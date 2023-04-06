#include "OnboardAssist.h"
#include <QDebug>
#include "ui_OnboardAssist.h"
#include "CustomPlainTextEdit.h"
#include <iterator> 
#include <vector>
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QLabel>
#include <QVBoxLayout>
#include <QScrollArea>
#include <QButtonGroup>
#include <QCheckBox>
#include <QPlainTextEdit>
#include <QPushButton>
#include <QtWidgets>
#include <QCheckBox>
#include <QFont>

OnboardAssist::OnboardAssist(QWidget* parent)
    : QMainWindow(parent), fullNames(), firstNames(), lastNames(), emailAppend(), modifiedExtensions(), users(), checkBoxGroup(nullptr)
{
    ui.setupUi(this);
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint);
    checkBoxGroup = new QButtonGroup(this);

    // setup connections for buttons
    
    connect(ui.extensionButton, &QPushButton::clicked, this, &OnboardAssist::populateExtensions);

    // connect other buttons
    QPushButton* extensionButton = findChild<QPushButton*>("extensionButton");
    QPushButton* processCSVButton = findChild<QPushButton*>("processCSV");
    if (processCSVButton) {
        connect(processCSVButton, &QPushButton::clicked, this, &OnboardAssist::onProcessCSVButtonClicked);
    }

    // setup layout for user items
    userItemsLayout = new QVBoxLayout();
    ui.verticalLayoutUsers->addLayout(userItemsLayout);

    
    disableButtons();
}

void OnboardAssist::onProcessCSVButtonClicked()
{
    qDebug() << "CSV button clicked";
    CustomPlainTextEdit* workgroupFilter = findChild<CustomPlainTextEdit*>("workgroupFilter");
    QString targetWorkgroup;

    if (workgroupFilter) {
        targetWorkgroup = workgroupFilter->toPlainText().trimmed();
    }
    else {
        QMessageBox::critical(this, "Error", "Workgroup filter not found.");
        return;
    }

    loadUsersAndProcessData(targetWorkgroup);
}

QList<OnboardAssist::User> OnboardAssist::loadUsersAndProcessData(const QString& targetWorkgroup)
{
    users.clear(); // clear users before loading new ones
    QString filename = QFileDialog::getOpenFileName(nullptr, "Open CSV File", "", "CSV Files (*.csv)");

    if (filename.isEmpty())
    {
        return users;
    }

    try
    {
        QFile file(filename);
        if (!file.open(QIODevice::ReadOnly))
        {
            throw std::runtime_error("Unable to open the CSV file");
        }

        QTextStream stream(&file);

        // skip header line
        if (!stream.atEnd())
        {
            stream.readLine();
        }

        while (!stream.atEnd())
        {
            QString line = stream.readLine();
            QStringList fields = line.split(',');

            QString workgroup = fields[10]; // Column K

            // filter by target workgroup
            if (workgroup != targetWorkgroup) {
                continue;
            }

            QString completionStatus = fields[25]; // Column Z

            // skip if completion status is "Complete"
            if (completionStatus.trimmed().toLower() == "complete") {
                continue;
            }

            QString adUsername = fields[22]; // Column W

            // skip if username is empty
            if (adUsername.isEmpty()) {
                continue;
            }

            QStringList nameParts = adUsername.split('_');
            QString lastName = nameParts[1].trimmed();
            QString firstName = nameParts[0].trimmed();
            QString formattedName = firstName + " " + lastName;
            QString email = fields[4]; // Column E
            QString primaryPhoneNumber = fields[5]; // Column F
            QString firstNameLower = firstName[0].toLower();


            QString lastNameLower = lastName[0].toLower();
            QString password = QString("%1%2%3").arg(lastNameLower).arg(firstNameLower).arg(primaryPhoneNumber.right(4));
            qDebug() << "Generated password:" << password;
            QString emailAddress = firstName + "_" + lastName + "@readingprograms.org";

            // create and populate user object
            User user;
            user.adUsername = adUsername;
            user.firstName = firstName;
            user.lastName = lastName;
            user.phoneNumber = primaryPhoneNumber;
            user.password = password;
            user.contactEmail = email;
            user.emailAddress = emailAddress;
            user.modifiedExtension = "1010";

            // add user to the list
            users.append(user);

            // add user item to layout
            this->addUserItem(user, users.size() - 1);
        }
        enableButtons();
    }

    catch (const std::exception& e)
    {
        QMessageBox::critical(nullptr, "Error", QString("Failed to load the CSV file: %1").arg(e.what()));
    }

    if (!users.isEmpty()) {
        onCheckBoxClicked(0);
        QCheckBox* firstCheckBox = findChild<QCheckBox*>(QString("checkBox_1"));
        if (firstCheckBox) {
            firstCheckBox->setChecked(true);
        }
    }

    return users;
}

void OnboardAssist::onCheckBoxClicked(int index) {
    qDebug() << "User checkbox clicked";
    updateDisplayFields(index);
}

void OnboardAssist::addUserItem(const OnboardAssist::User& user, int index)
{
    QWidget* userItem = new QWidget();
    QHBoxLayout* userItemLayout = new QHBoxLayout(userItem);

    QCheckBox* checkBox = new QCheckBox();
    checkBox->setObjectName(QString("checkBox_%1").arg(index + 1));
    connect(checkBox, &QAbstractButton::clicked, this, [this, index]() {
        this->onCheckBoxClicked(index);
        });

    // Add the checkbox to the checkBoxGroup
    checkBoxGroup->addButton(static_cast<QAbstractButton*>(checkBox), index + 1);
    checkBoxGroup->setExclusive(true);

    QLineEdit* nameField = new QLineEdit();
    nameField->setObjectName(QString("nameField_%1").arg(index + 1));
    nameField->setText(user.adUsername);
    nameField->setFixedHeight(20);
    nameField->setStyleSheet("background-color: white;"); // Set the background color to white

    QLineEdit* extensionField = new QLineEdit();
    extensionField->setObjectName(QString("extensionField_%1").arg(index + 1));
    extensionField->setFixedHeight(20);

    QPushButton* removeButton = new QPushButton("X");
    removeButton->setObjectName(QString("removeButton_%1").arg(index + 1));
    connect(removeButton, &QPushButton::clicked, this, [=]() {
        this->onRemoveButtonClicked(index);
        });

    userItemLayout->addWidget(checkBox);
    userItemLayout->addWidget(nameField);
    userItemLayout->addWidget(extensionField);
    userItemLayout->addWidget(removeButton);

    userItemsLayout->addWidget(userItem);

    extensionField->setStyleSheet("background-color: white;");
    // Set the default extension for the first user
    if (index == 0) {
        extensionField->setText("1001");
    }
}




void OnboardAssist::updateDisplayFields(int index) {
    if (index < 0 || index >= users.size()) {
        return;
    }

    User selectedUser = users[index];

    ui.firstNameDisplay->setPlainText(selectedUser.firstName);
    ui.lastNameDisplay->setPlainText(selectedUser.lastName);
    ui.emailDisplay->setPlainText(selectedUser.adUsername + "@readingprograms.org");
    ui.modifiedExtensionDisplay->setPlainText("1010" + selectedUser.modifiedExtension);
    ui.fullNameDisplay->setPlainText(selectedUser.firstName + " " + selectedUser.lastName);
    ui.adUsernameDisplay->setPlainText(selectedUser.adUsername);
    ui.phoneNumberDisplay->setPlainText(selectedUser.phoneNumber);
    ui.passwordDisplay->setPlainText(selectedUser.password);
    ui.contactEmailDisplay->setPlainText(selectedUser.contactEmail);
    ui.extensionPasteDisplay->setPlainText(selectedUser.modifiedExtension);
}

void OnboardAssist::populateExtensions() {
    int selectedUserIndex = checkBoxGroup->checkedId() - 1;
    if (selectedUserIndex < 0 || selectedUserIndex >= users.size()) {
        return;
    }

    QLineEdit* selectedExtensionField = findChild<QLineEdit*>(QString("extensionField_%1").arg(selectedUserIndex + 1));
    if (!selectedExtensionField) {
        return;
    }

    int selectedExtension = selectedExtensionField->text().toInt();

    for (int i = 0; i < users.size(); ++i) {
        QLineEdit* extensionField = findChild<QLineEdit*>(QString("extensionField_%1").arg(i + 1));
        if (!extensionField) {
            continue;
        }

        int newExtension;
        if (i < selectedUserIndex) {
            newExtension = selectedExtension - (selectedUserIndex - i);
        }
        else {
            newExtension = selectedExtension + (i - selectedUserIndex);
        }

        extensionField->setText(QString::number(newExtension));
        users[i].modifiedExtension = QString::number(newExtension); // Store the current extension
    }

    // Update the display fields after populating the extensions
    updateDisplayFields(selectedUserIndex);
    qDebug() << "extentsions populated";
}


void OnboardAssist::onRemoveButtonClicked(int index)
{
    qDebug() << "Removing user at index" << index;
    QWidget* userItem = userItemsLayout->itemAt(index)->widget();

    if (userItem) {
        checkBoxGroup->removeButton(static_cast<QAbstractButton*>(userItem->layout()->itemAt(0)->widget()));
        userItemsLayout->removeWidget(userItem);
        userItem->deleteLater();
    }

    users.removeAt(index);

    // Update the object names of the remaining users
    for (int i = index; i < users.size(); ++i) {
        QWidget* remainingUserItem = userItemsLayout->itemAt(i)->widget();
        if (remainingUserItem) {
            QCheckBox* checkBox = static_cast<QCheckBox*>(remainingUserItem->layout()->itemAt(0)->widget());
            QLineEdit* nameField = static_cast<QLineEdit*>(remainingUserItem->layout()->itemAt(1)->widget());
            QLineEdit* extensionField = static_cast<QLineEdit*>(remainingUserItem->layout()->itemAt(2)->widget());
            QPushButton* removeButton = static_cast<QPushButton*>(remainingUserItem->layout()->itemAt(3)->widget());

            checkBox->setObjectName(QString("checkBox_%1").arg(i + 1));
            nameField->setObjectName(QString("nameField_%1").arg(i + 1));
            extensionField->setObjectName(QString("extensionField_%1").arg(i + 1));
            removeButton->setObjectName(QString("removeButton_%1").arg(i + 1));

            // Update the checkBoxGroup ID
            checkBoxGroup->setId(static_cast<QAbstractButton*>(checkBox), i + 1);

            // Update the removeButton connection
            disconnect(removeButton, nullptr, nullptr, nullptr);
            connect(removeButton, &QPushButton::clicked, this, [this, i]() {
                this->onRemoveButtonClicked(i);
                });

            // Update the checkBox connection
            disconnect(checkBox, nullptr, nullptr, nullptr);
            connect(checkBox, &QAbstractButton::clicked, this, [this, i]() {
                this->onCheckBoxClicked(i);
                });
        }
    }

    // Check the first available checkbox
    if (users.size() > 0) {
        int firstAvailableIndex = index < users.size() ? index : index - 1;
        QCheckBox* firstAvailableCheckBox = findChild<QCheckBox*>(QString("checkBox_%1").arg(firstAvailableIndex + 1));
        if (firstAvailableCheckBox) {
            firstAvailableCheckBox->setChecked(true);
        }
    }
    else {
        // Clear the display fields if there are no users left
        updateDisplayFields(-1);
    }
}
void OnboardAssist::enableButtons() {

    QPushButton* extensionButton = findChild<QPushButton*>("extensionButton");

    
    if (extensionButton) {
        extensionButton->setEnabled(true);
    }
}

void OnboardAssist::disableButtons() {

    QPushButton* extensionButton = findChild<QPushButton*>("extensionButton");

 
    if (extensionButton) {
        extensionButton->setEnabled(false);
    }
}
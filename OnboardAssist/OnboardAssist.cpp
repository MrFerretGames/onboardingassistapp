#include "OnboardAssist.h"
#include <QDebug>
#include "ui_OnboardAssist.h"
#include "CustomPlainTextEdit.h"



OnboardAssist::OnboardAssist(QWidget* parent)
    : QMainWindow(parent), fullNames(), firstNames(), lastNames(), emailAppend(), modifiedExtensions()
{
    ui.setupUi(this);
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint); // Add this line to set the window flag
    checkBoxGroup = new QButtonGroup(this);
    connect(ui.processButton, &QPushButton::clicked, this, &OnboardAssist::onProcessButtonClicked);
    QPushButton* extensionButton = findChild<QPushButton*>("extensionButton");
    if (extensionButton) {
        connect(extensionButton, &QPushButton::clicked, this, &OnboardAssist::onExtensionButtonClicked);
    }

    for (int i = 1; i <= 16; ++i) {
        QCheckBox* checkBox = findChild<QCheckBox*>(QString("checkBox_%1").arg(i));
        if (checkBox) {
            checkBoxGroup->addButton(checkBox, i);
        }
    }
}

void OnboardAssist::onProcessButtonClicked()
{
    QString extensions;
    QString usernames;

    fullNames.clear();
    firstNames.clear();
    lastNames.clear();
    emailAppend.clear();
    modifiedExtensions.clear();

    int checkedId = checkBoxGroup->checkedId();
    if (checkedId != -1) {
        QPlainTextEdit* extensionTemp = findChild<QPlainTextEdit*>(QString("extensionPaste_%1").arg(checkedId));
        QPlainTextEdit* usernameTemp = findChild<QPlainTextEdit*>(QString("nameUnderscore_%1").arg(checkedId));

        if (extensionTemp && usernameTemp) {
            QString extension = extensionTemp->toPlainText();
            QString username = usernameTemp->toPlainText();

            extensions += extension + " ";
            usernames += username + " ";

            modifiedExtensions.append("1010" + extension);

            QStringList nameParts = username.split("_");
            if (nameParts.size() >= 2) {
                QString firstName = nameParts[0];
                QString lastName = nameParts[1];

                fullNames.append(firstName + " " + lastName);
                firstNames.append(firstName);
                lastNames.append(lastName);
                emailAppend.append(username + "@readingprograms.org");
            }
        }
    }

    qDebug() << "Extensions:" << extensions;
    qDebug() << "Usernames:" << usernames;

    qDebug() << "Full Names:" << fullNames.join(" ");
    qDebug() << "First Names:" << firstNames.join(" ");
    qDebug() << "Last Names:" << lastNames.join(" ");
    qDebug() << "Email Addresses:" << emailAppend.join(" ");
    qDebug() << "Modified Extensions:" << modifiedExtensions.join(" ");

    // Process the data as needed

    // Update the UI with the new information
    QPlainTextEdit* firstNameDisplay = findChild<QPlainTextEdit*>("firstNameDisplay");
    QPlainTextEdit* lastNameDisplay = findChild<QPlainTextEdit*>("lastNameDisplay");
    QPlainTextEdit* emailDisplay = findChild<QPlainTextEdit*>("emailDisplay");
    QPlainTextEdit* modifiedExtensionDisplay = findChild<QPlainTextEdit*>("modifiedExtensionDisplay"); 
    QPlainTextEdit* fullNameDisplay = findChild<QPlainTextEdit*>("fullNameDisplay");

    if (firstNameDisplay && lastNameDisplay && emailDisplay && modifiedExtensionDisplay && fullNameDisplay) {
        firstNameDisplay->setPlainText(firstNames.join(" "));
        lastNameDisplay->setPlainText(lastNames.join(" "));
        emailDisplay->setPlainText(emailAppend.join(" "));
        modifiedExtensionDisplay->setPlainText(modifiedExtensions.join(" "));
        fullNameDisplay->setPlainText(fullNames.join(" "));

    }
}
void OnboardAssist::onExtensionButtonClicked()
{
    QPlainTextEdit* extensionPaste1 = findChild<QPlainTextEdit*>("extensionPaste_1");

    if (extensionPaste1) {
        QString firstExtension = extensionPaste1->toPlainText();
        int firstExtensionNumber = firstExtension.toInt();
        QString newExtension;

        for (int i = 2; i <= 16; ++i) {
            QPlainTextEdit* extensionPaste = findChild<QPlainTextEdit*>(QString("extensionPaste_%1").arg(i));
            if (extensionPaste) {
                newExtension = QString::number(firstExtensionNumber + (i - 1));
                extensionPaste->setPlainText(newExtension);
            }
        }
    }
}
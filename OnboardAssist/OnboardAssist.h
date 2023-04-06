#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_OnboardAssist.h"
#include <QPushButton>
#include <QButtonGroup>
#include <QPlainTextEdit>
#include <vector>
#include <QDebug>

class OnboardAssist : public QMainWindow
{
    Q_OBJECT

public:
    OnboardAssist(QWidget* parent = nullptr);
    ~OnboardAssist()
    {
    }
public:
    struct User {
        QString adUsername;
        QString firstName;
        QString lastName;
        QString phoneNumber;
        QString password;
        QString contactEmail;
        QString emailAddress;
        QString modifiedExtension;
    };

private:
    Ui::OnboardAssistClass ui;
    QButtonGroup* checkBoxGroup;
    QStringList fullNames, firstNames, lastNames, emailAppend, modifiedExtensions;
    QVBoxLayout* userItemsLayout;

    void addUserItem(const OnboardAssist::User& user, int index);
    void disableButtons();
    void enableButtons();
            


    QList<User> users;

    QList<User> loadUsersAndProcessData(const QString& targetWorkgroup);
    void processUsers();

private slots:
    void onProcessCSVButtonClicked();
    void onCheckBoxClicked(int index);
    void updateDisplayFields(int index);
    void populateExtensions();
    void onRemoveButtonClicked(int index);
    
};
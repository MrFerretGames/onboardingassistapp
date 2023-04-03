#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_OnboardAssist.h"
#include <QPushButton>
#include <QButtonGroup>
#include <QPlainTextEdit>

class OnboardAssist : public QMainWindow
{
    Q_OBJECT

public:
    OnboardAssist(QWidget* parent = nullptr);
    ~OnboardAssist()
    {

    }

private:
    Ui::OnboardAssistClass ui;
    QButtonGroup* checkBoxGroup;
    QStringList fullNames, firstNames, lastNames, emailAppend, modifiedExtensions;

private slots:
    void onProcessButtonClicked();
    void onExtensionButtonClicked();
};
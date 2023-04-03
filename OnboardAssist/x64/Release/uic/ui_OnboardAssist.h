/********************************************************************************
** Form generated from reading UI file 'OnboardAssist.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONBOARDASSIST_H
#define UI_ONBOARDASSIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "customplaintextedit.h"

QT_BEGIN_NAMESPACE

class Ui_OnboardAssistClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *leftMenuContainer;
    QVBoxLayout *verticalLayout;
    QWidget *leftMenuSubContainer;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QPushButton *processButton;
    QPushButton *extensionButton;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_5;
    CustomPlainTextEdit *Static3;
    CustomPlainTextEdit *Static1;
    CustomPlainTextEdit *Static2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_6;
    CustomPlainTextEdit *fullNameDisplay;
    CustomPlainTextEdit *firstNameDisplay;
    CustomPlainTextEdit *lastNameDisplay;
    CustomPlainTextEdit *emailDisplay;
    CustomPlainTextEdit *modifiedExtensionDisplay;
    QWidget *mainBodyContainer;
    QHBoxLayout *horizontalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_5;
    QWidget *MainBodyLeft;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_14;
    QCheckBox *checkBox_15;
    QCheckBox *checkBox_16;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    CustomPlainTextEdit *extensionPaste_1;
    CustomPlainTextEdit *extensionPaste_2;
    CustomPlainTextEdit *extensionPaste_3;
    CustomPlainTextEdit *extensionPaste_4;
    CustomPlainTextEdit *extensionPaste_5;
    CustomPlainTextEdit *extensionPaste_6;
    CustomPlainTextEdit *extensionPaste_7;
    CustomPlainTextEdit *extensionPaste_8;
    CustomPlainTextEdit *extensionPaste_9;
    CustomPlainTextEdit *extensionPaste_10;
    CustomPlainTextEdit *extensionPaste_11;
    CustomPlainTextEdit *extensionPaste_12;
    CustomPlainTextEdit *extensionPaste_13;
    CustomPlainTextEdit *extensionPaste_14;
    CustomPlainTextEdit *extensionPaste_15;
    CustomPlainTextEdit *extensionPaste_16;
    QWidget *mainBodyRight;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_8;
    CustomPlainTextEdit *nameUnderscore_1;
    CustomPlainTextEdit *nameUnderscore_2;
    CustomPlainTextEdit *nameUnderscore_3;
    CustomPlainTextEdit *nameUnderscore_4;
    CustomPlainTextEdit *nameUnderscore_5;
    CustomPlainTextEdit *nameUnderscore_6;
    CustomPlainTextEdit *nameUnderscore_7;
    CustomPlainTextEdit *nameUnderscore_8;
    CustomPlainTextEdit *nameUnderscore_9;
    CustomPlainTextEdit *nameUnderscore_10;
    CustomPlainTextEdit *nameUnderscore_11;
    CustomPlainTextEdit *nameUnderscore_12;
    CustomPlainTextEdit *nameUnderscore_13;
    CustomPlainTextEdit *nameUnderscore_14;
    CustomPlainTextEdit *nameUnderscore_15;
    CustomPlainTextEdit *nameUnderscore_16;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OnboardAssistClass)
    {
        if (OnboardAssistClass->objectName().isEmpty())
            OnboardAssistClass->setObjectName("OnboardAssistClass");
        OnboardAssistClass->resize(747, 616);
        OnboardAssistClass->setStyleSheet(QString::fromUtf8("/*Copyright (c) DevSec Studio. All rights reserved.\n"
"\n"
"MIT License\n"
"\n"
"Permission is hereby granted, free of charge, to any person obtaining a copy\n"
"of this software and associated documentation files (the \"Software\"), to deal\n"
"in the Software without restriction, including without limitation the rights\n"
"to use, copy, modify, merge, publish, distribute, sublicense, and/or sell\n"
"copies of the Software, and to permit persons to whom the Software is\n"
"furnished to do so, subject to the following conditions:\n"
"\n"
"The above copyright notice and this permission notice shall be included in all\n"
"copies or substantial portions of the Software.\n"
"\n"
"THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n"
"IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n"
"FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\n"
"AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n"
"LIABILITY, WHETHER IN AN ACT"
                        "ION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n"
"OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.\n"
"*/\n"
"\n"
"/*-----QWidget-----*/\n"
"QWidget\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(27, 39, 50, 255),stop:1 rgba(27, 39, 55, 255));\n"
"	color: #ffff;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLabel-----*/\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #c2c7d5;\n"
"	font-size: 13px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 155),stop:0.995192 rgba(54, 197, 177, 155));\n"
"	color: #fff;\n"
"	font-size: 11px;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 3px;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgb"
                        "a(70, 255, 230, 255));\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QCheckBox-----*/\n"
"QCheckBox\n"
"{\n"
"	background-color: transparent;\n"
"	color: #fff;\n"
"	font-size: 10px;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QCheckBox-----*/\n"
"QCheckBox::indicator\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid darkgray;\n"
"    width: 12px;\n"
"    height: 12px;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image:url(\"./ressources/check.png\");\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 172, 149, 255),stop:0.995192 rgba(54, 197, 177, 255));;\n"
"    border: 1px solid #607cff;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:unchecked:hover\n"
"{\n"
"    border: 1px solid #08b099;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::disabled\n"
"{\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	co"
                        "lor: #656565;\n"
"    border: 1px solid #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLineEdit-----*/\n"
"QLineEdit\n"
"{\n"
"	background-color: #c2c7d5;\n"
"	color: #000;\n"
"	font-weight: bold;\n"
"	border: none;\n"
"	border-radius: 2px;\n"
"	padding: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QListView-----*/\n"
"QListView\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(50, 61, 80, 255),stop:1 rgba(44, 49, 69, 255));\n"
"	color: #fff;\n"
"	font-size: 12px;\n"
"	font-weight: bold;\n"
"	border: 1px solid #191919;\n"
"	show-decoration-selected: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item\n"
"{\n"
"	color: #31cecb;\n"
"	background-color: #454e5e;\n"
"	border: none;\n"
"	padding: 5px;\n"
"	border-radius: 0px;\n"
"	padding-left : 10px;\n"
"	height: 42px;\n"
"\n"
"}\n"
"\n"
"QListView::item:selected\n"
"{\n"
"	color: #31cecb;\n"
"	background-color: #454e5e;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item:!selected\n"
"{\n"
"	color:white;\n"
"	background-color: transparent;\n"
"	border: "
                        "none;\n"
"	padding-left : 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item:!selected:hover\n"
"{\n"
"	color: #bbbcba;\n"
"	background-color: #454e5e;\n"
"	border: none;\n"
"	padding-left : 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTreeView-----*/\n"
"QTreeView \n"
"{\n"
"	background-color: #232939;\n"
"	show-decoration-selected: 0;\n"
"	color: #c2c8d7;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item \n"
"{\n"
"	border-top-color: transparent;\n"
"	border-bottom-color: transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item:hover \n"
"{\n"
"	background-color: #606060;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item:selected \n"
"{\n"
"	background-color: #0ab19a;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item:selected:active\n"
"{\n"
"	background-color: #0ab19a;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::branch:has-children:!has-siblings:closed,\n"
"QTreeView::branch:closed:has-children:has-siblings \n"
"{\n"
"	image: url(://tree-closed.png);\n"
"\n"
"}\n"
"\n"
"QTreeView::branch:open:has-chil"
                        "dren:!has-siblings,\n"
"QTreeView::branch:open:has-children:has-siblings  \n"
"{\n"
"	image: url(://tree-open.png);\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTableView & QTableWidget-----*/\n"
"QTableView\n"
"{\n"
"    background-color: #232939;\n"
"	border: 1px solid gray;\n"
"    color: #f0f0f0;\n"
"    gridline-color: #232939;\n"
"    outline : 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::disabled\n"
"{\n"
"    background-color: #242526;\n"
"    border: 1px solid #32414B;\n"
"    color: #656565;\n"
"    gridline-color: #656565;\n"
"    outline : 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:hover \n"
"{\n"
"    background-color: #606060;\n"
"    color: #f0f0f0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:selected \n"
"{\n"
"	background-color: #0ab19a;\n"
"    color: #F0F0F0;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableView::item:selected:disabled\n"
"{\n"
"    background-color: #1a1b1c;\n"
"    border: 2px solid #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableCornerButton::section\n"
"{\n"
"	background-color: #343a49;\n"
""
                        "    color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section\n"
"{\n"
"	color: #fff;\n"
"	border-top: 0px;\n"
"	border-bottom: 1px solid gray;\n"
"	border-right: 1px solid gray;\n"
"	background-color: #343a49;\n"
"    margin-top:1px;\n"
"	margin-bottom:1px;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:disabled\n"
"{\n"
"    background-color: #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
"    color: #fff;\n"
"    background-color: #0ab19a;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked:disabled\n"
"{\n"
"    color: #656565;\n"
"    background-color: #525251;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical::first,\n"
"QHeaderView::section::vertical::only-one\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal::first,\n"
"QHeaderView::section::horizontal::only-one\n"
"{\n"
"    "
                        "border-left: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal\n"
"{\n"
"    border-left: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QScrollBar-----*/\n"
"QScrollBar:horizontal \n"
"{\n"
"    background-color: transparent;\n"
"    height: 8px;\n"
"    margin: 0px;\n"
"    padding: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:horizontal \n"
"{\n"
"    border: none;\n"
"	min-width: 100px;\n"
"    background-color: #56576c;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:horizontal, \n"
"QScrollBar::sub-line:horizontal,\n"
"QScrollBar::add-page:horizontal, \n"
"QScrollBar::sub-page:horizontal \n"
"{\n"
"    width: 0px;\n"
"    background-color: transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar:vertical \n"
"{\n"
"    background-color: transparent;\n"
"    width: 8px;\n"
"    margin: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:vertical \n"
"{\n"
"    border: none;\n"
"	min-height: 100px;\n"
"    background-color: #56576c;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:vertical"
                        ", \n"
"QScrollBar::sub-line:vertical,\n"
"QScrollBar::add-page:vertical, \n"
"QScrollBar::sub-page:vertical \n"
"{\n"
"    height: 0px;\n"
"    background-color: transparent;\n"
"\n"
"}\n"
""));
        centralWidget = new QWidget(OnboardAssistClass);
        centralWidget->setObjectName("centralWidget");
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        leftMenuContainer = new QWidget(centralWidget);
        leftMenuContainer->setObjectName("leftMenuContainer");
        verticalLayout = new QVBoxLayout(leftMenuContainer);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        leftMenuSubContainer = new QWidget(leftMenuContainer);
        leftMenuSubContainer->setObjectName("leftMenuSubContainer");
        leftMenuSubContainer->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(27, 39, 39, 255),stop:1 rgba(27, 39, 39, 255));"));
        verticalLayout_2 = new QVBoxLayout(leftMenuSubContainer);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame = new QFrame(leftMenuSubContainer);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 0));
        frame->setMaximumSize(QSize(270, 150));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        processButton = new QPushButton(frame);
        processButton->setObjectName("processButton");
        processButton->setStyleSheet(QString::fromUtf8("background-color: #232939;\n"
"	border: 1px solid gray;\n"
"    color: #f0f0f0;\n"
"    gridline-color: #232939;\n"
"    outline : 0;"));

        verticalLayout_3->addWidget(processButton);

        extensionButton = new QPushButton(frame);
        extensionButton->setObjectName("extensionButton");
        extensionButton->setStyleSheet(QString::fromUtf8("background-color: #232939;\n"
"	border: 1px solid gray;\n"
"    color: #f0f0f0;\n"
"    gridline-color: #232939;\n"
"    outline : 0;"));

        verticalLayout_3->addWidget(extensionButton);


        verticalLayout_2->addWidget(frame, 0, Qt::AlignTop);

        frame_2 = new QFrame(leftMenuSubContainer);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(100, 50));
        frame_2->setMaximumSize(QSize(270, 150));
        frame_2->setStyleSheet(QString::fromUtf8("\n"
"	border: 1px solid gray;\n"
"    color: #f0f0f0;\n"
"    gridline-color: #232939;\n"
"    outline : 0;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        Static3 = new CustomPlainTextEdit(frame_2);
        Static3->setObjectName("Static3");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Static3->sizePolicy().hasHeightForWidth());
        Static3->setSizePolicy(sizePolicy);
        Static3->setMaximumSize(QSize(250, 20));
        Static3->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_5->addWidget(Static3);

        Static1 = new CustomPlainTextEdit(frame_2);
        Static1->setObjectName("Static1");
        sizePolicy.setHeightForWidth(Static1->sizePolicy().hasHeightForWidth());
        Static1->setSizePolicy(sizePolicy);
        Static1->setMaximumSize(QSize(150, 20));
        Static1->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_5->addWidget(Static1);

        Static2 = new CustomPlainTextEdit(frame_2);
        Static2->setObjectName("Static2");
        sizePolicy.setHeightForWidth(Static2->sizePolicy().hasHeightForWidth());
        Static2->setSizePolicy(sizePolicy);
        Static2->setMaximumSize(QSize(150, 20));
        Static2->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_5->addWidget(Static2);


        verticalLayout_2->addWidget(frame_2);

        frame_3 = new QFrame(leftMenuSubContainer);
        frame_3->setObjectName("frame_3");
        frame_3->setStyleSheet(QString::fromUtf8("\n"
"	border: 1px solid gray;\n"
"    color: #f0f0f1;\n"
"    gridline-color: #232939;\n"
"    outline : 0;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        fullNameDisplay = new CustomPlainTextEdit(frame_3);
        fullNameDisplay->setObjectName("fullNameDisplay");
        fullNameDisplay->setMinimumSize(QSize(0, 15));
        fullNameDisplay->setMaximumSize(QSize(400, 20));
        fullNameDisplay->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_6->addWidget(fullNameDisplay);

        firstNameDisplay = new CustomPlainTextEdit(frame_3);
        firstNameDisplay->setObjectName("firstNameDisplay");
        firstNameDisplay->setMinimumSize(QSize(0, 15));
        firstNameDisplay->setMaximumSize(QSize(400, 20));
        firstNameDisplay->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_6->addWidget(firstNameDisplay);

        lastNameDisplay = new CustomPlainTextEdit(frame_3);
        lastNameDisplay->setObjectName("lastNameDisplay");
        lastNameDisplay->setMinimumSize(QSize(0, 15));
        lastNameDisplay->setMaximumSize(QSize(400, 20));
        lastNameDisplay->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_6->addWidget(lastNameDisplay);

        emailDisplay = new CustomPlainTextEdit(frame_3);
        emailDisplay->setObjectName("emailDisplay");
        emailDisplay->setMinimumSize(QSize(0, 15));
        emailDisplay->setMaximumSize(QSize(400, 20));
        emailDisplay->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_6->addWidget(emailDisplay);

        modifiedExtensionDisplay = new CustomPlainTextEdit(frame_3);
        modifiedExtensionDisplay->setObjectName("modifiedExtensionDisplay");
        modifiedExtensionDisplay->setMinimumSize(QSize(0, 15));
        modifiedExtensionDisplay->setMaximumSize(QSize(400, 20));
        modifiedExtensionDisplay->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_6->addWidget(modifiedExtensionDisplay);


        verticalLayout_2->addWidget(frame_3);


        verticalLayout->addWidget(leftMenuSubContainer);


        horizontalLayout->addWidget(leftMenuContainer);

        mainBodyContainer = new QWidget(centralWidget);
        mainBodyContainer->setObjectName("mainBodyContainer");
        horizontalLayout_2 = new QHBoxLayout(mainBodyContainer);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        scrollArea = new QScrollArea(mainBodyContainer);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 344, 523));
        horizontalLayout_5 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        MainBodyLeft = new QWidget(scrollAreaWidgetContents);
        MainBodyLeft->setObjectName("MainBodyLeft");
        horizontalLayout_3 = new QHBoxLayout(MainBodyLeft);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        widget = new QWidget(MainBodyLeft);
        widget->setObjectName("widget");
        verticalLayout_10 = new QVBoxLayout(widget);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName("verticalLayout_10");
        checkBox_1 = new QCheckBox(widget);
        checkBox_1->setObjectName("checkBox_1");

        verticalLayout_10->addWidget(checkBox_1);

        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName("checkBox_2");

        verticalLayout_10->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName("checkBox_3");

        verticalLayout_10->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(widget);
        checkBox_4->setObjectName("checkBox_4");

        verticalLayout_10->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(widget);
        checkBox_5->setObjectName("checkBox_5");

        verticalLayout_10->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(widget);
        checkBox_6->setObjectName("checkBox_6");

        verticalLayout_10->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(widget);
        checkBox_7->setObjectName("checkBox_7");

        verticalLayout_10->addWidget(checkBox_7);

        checkBox_8 = new QCheckBox(widget);
        checkBox_8->setObjectName("checkBox_8");

        verticalLayout_10->addWidget(checkBox_8);

        checkBox_9 = new QCheckBox(widget);
        checkBox_9->setObjectName("checkBox_9");

        verticalLayout_10->addWidget(checkBox_9);

        checkBox_10 = new QCheckBox(widget);
        checkBox_10->setObjectName("checkBox_10");

        verticalLayout_10->addWidget(checkBox_10);

        checkBox_11 = new QCheckBox(widget);
        checkBox_11->setObjectName("checkBox_11");

        verticalLayout_10->addWidget(checkBox_11);

        checkBox_12 = new QCheckBox(widget);
        checkBox_12->setObjectName("checkBox_12");

        verticalLayout_10->addWidget(checkBox_12);

        checkBox_13 = new QCheckBox(widget);
        checkBox_13->setObjectName("checkBox_13");

        verticalLayout_10->addWidget(checkBox_13);

        checkBox_14 = new QCheckBox(widget);
        checkBox_14->setObjectName("checkBox_14");

        verticalLayout_10->addWidget(checkBox_14);

        checkBox_15 = new QCheckBox(widget);
        checkBox_15->setObjectName("checkBox_15");

        verticalLayout_10->addWidget(checkBox_15);

        checkBox_16 = new QCheckBox(widget);
        checkBox_16->setObjectName("checkBox_16");

        verticalLayout_10->addWidget(checkBox_16);


        horizontalLayout_3->addWidget(widget);

        frame_4 = new QFrame(MainBodyLeft);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");
        extensionPaste_1 = new CustomPlainTextEdit(frame_4);
        extensionPaste_1->setObjectName("extensionPaste_1");
        sizePolicy.setHeightForWidth(extensionPaste_1->sizePolicy().hasHeightForWidth());
        extensionPaste_1->setSizePolicy(sizePolicy);
        extensionPaste_1->setMaximumSize(QSize(50, 20));
        extensionPaste_1->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_4->addWidget(extensionPaste_1);

        extensionPaste_2 = new CustomPlainTextEdit(frame_4);
        extensionPaste_2->setObjectName("extensionPaste_2");
        sizePolicy.setHeightForWidth(extensionPaste_2->sizePolicy().hasHeightForWidth());
        extensionPaste_2->setSizePolicy(sizePolicy);
        extensionPaste_2->setMaximumSize(QSize(50, 20));
        extensionPaste_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_4->addWidget(extensionPaste_2);

        extensionPaste_3 = new CustomPlainTextEdit(frame_4);
        extensionPaste_3->setObjectName("extensionPaste_3");
        sizePolicy.setHeightForWidth(extensionPaste_3->sizePolicy().hasHeightForWidth());
        extensionPaste_3->setSizePolicy(sizePolicy);
        extensionPaste_3->setMaximumSize(QSize(50, 20));
        extensionPaste_3->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_4->addWidget(extensionPaste_3);

        extensionPaste_4 = new CustomPlainTextEdit(frame_4);
        extensionPaste_4->setObjectName("extensionPaste_4");
        sizePolicy.setHeightForWidth(extensionPaste_4->sizePolicy().hasHeightForWidth());
        extensionPaste_4->setSizePolicy(sizePolicy);
        extensionPaste_4->setMaximumSize(QSize(50, 20));
        extensionPaste_4->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_4->addWidget(extensionPaste_4);

        extensionPaste_5 = new CustomPlainTextEdit(frame_4);
        extensionPaste_5->setObjectName("extensionPaste_5");
        sizePolicy.setHeightForWidth(extensionPaste_5->sizePolicy().hasHeightForWidth());
        extensionPaste_5->setSizePolicy(sizePolicy);
        extensionPaste_5->setMaximumSize(QSize(50, 20));
        extensionPaste_5->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_4->addWidget(extensionPaste_5);

        extensionPaste_6 = new CustomPlainTextEdit(frame_4);
        extensionPaste_6->setObjectName("extensionPaste_6");
        sizePolicy.setHeightForWidth(extensionPaste_6->sizePolicy().hasHeightForWidth());
        extensionPaste_6->setSizePolicy(sizePolicy);
        extensionPaste_6->setMaximumSize(QSize(50, 20));
        extensionPaste_6->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_4->addWidget(extensionPaste_6);

        extensionPaste_7 = new CustomPlainTextEdit(frame_4);
        extensionPaste_7->setObjectName("extensionPaste_7");
        sizePolicy.setHeightForWidth(extensionPaste_7->sizePolicy().hasHeightForWidth());
        extensionPaste_7->setSizePolicy(sizePolicy);
        extensionPaste_7->setMaximumSize(QSize(50, 20));
        extensionPaste_7->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_4->addWidget(extensionPaste_7);

        extensionPaste_8 = new CustomPlainTextEdit(frame_4);
        extensionPaste_8->setObjectName("extensionPaste_8");
        sizePolicy.setHeightForWidth(extensionPaste_8->sizePolicy().hasHeightForWidth());
        extensionPaste_8->setSizePolicy(sizePolicy);
        extensionPaste_8->setMaximumSize(QSize(50, 20));
        extensionPaste_8->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_4->addWidget(extensionPaste_8);

        extensionPaste_9 = new CustomPlainTextEdit(frame_4);
        extensionPaste_9->setObjectName("extensionPaste_9");
        sizePolicy.setHeightForWidth(extensionPaste_9->sizePolicy().hasHeightForWidth());
        extensionPaste_9->setSizePolicy(sizePolicy);
        extensionPaste_9->setMaximumSize(QSize(50, 20));
        extensionPaste_9->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_4->addWidget(extensionPaste_9);

        extensionPaste_10 = new CustomPlainTextEdit(frame_4);
        extensionPaste_10->setObjectName("extensionPaste_10");
        sizePolicy.setHeightForWidth(extensionPaste_10->sizePolicy().hasHeightForWidth());
        extensionPaste_10->setSizePolicy(sizePolicy);
        extensionPaste_10->setMaximumSize(QSize(50, 20));
        extensionPaste_10->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_4->addWidget(extensionPaste_10);

        extensionPaste_11 = new CustomPlainTextEdit(frame_4);
        extensionPaste_11->setObjectName("extensionPaste_11");
        sizePolicy.setHeightForWidth(extensionPaste_11->sizePolicy().hasHeightForWidth());
        extensionPaste_11->setSizePolicy(sizePolicy);
        extensionPaste_11->setMaximumSize(QSize(50, 20));
        extensionPaste_11->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_4->addWidget(extensionPaste_11);

        extensionPaste_12 = new CustomPlainTextEdit(frame_4);
        extensionPaste_12->setObjectName("extensionPaste_12");
        sizePolicy.setHeightForWidth(extensionPaste_12->sizePolicy().hasHeightForWidth());
        extensionPaste_12->setSizePolicy(sizePolicy);
        extensionPaste_12->setMaximumSize(QSize(50, 20));
        extensionPaste_12->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_4->addWidget(extensionPaste_12);

        extensionPaste_13 = new CustomPlainTextEdit(frame_4);
        extensionPaste_13->setObjectName("extensionPaste_13");
        sizePolicy.setHeightForWidth(extensionPaste_13->sizePolicy().hasHeightForWidth());
        extensionPaste_13->setSizePolicy(sizePolicy);
        extensionPaste_13->setMaximumSize(QSize(50, 20));
        extensionPaste_13->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_4->addWidget(extensionPaste_13);

        extensionPaste_14 = new CustomPlainTextEdit(frame_4);
        extensionPaste_14->setObjectName("extensionPaste_14");
        sizePolicy.setHeightForWidth(extensionPaste_14->sizePolicy().hasHeightForWidth());
        extensionPaste_14->setSizePolicy(sizePolicy);
        extensionPaste_14->setMaximumSize(QSize(50, 20));
        extensionPaste_14->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_4->addWidget(extensionPaste_14);

        extensionPaste_15 = new CustomPlainTextEdit(frame_4);
        extensionPaste_15->setObjectName("extensionPaste_15");
        sizePolicy.setHeightForWidth(extensionPaste_15->sizePolicy().hasHeightForWidth());
        extensionPaste_15->setSizePolicy(sizePolicy);
        extensionPaste_15->setMaximumSize(QSize(50, 20));
        extensionPaste_15->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_4->addWidget(extensionPaste_15);

        extensionPaste_16 = new CustomPlainTextEdit(frame_4);
        extensionPaste_16->setObjectName("extensionPaste_16");
        sizePolicy.setHeightForWidth(extensionPaste_16->sizePolicy().hasHeightForWidth());
        extensionPaste_16->setSizePolicy(sizePolicy);
        extensionPaste_16->setMaximumSize(QSize(50, 20));
        extensionPaste_16->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_4->addWidget(extensionPaste_16);


        horizontalLayout_3->addWidget(frame_4);


        horizontalLayout_5->addWidget(MainBodyLeft);

        mainBodyRight = new QWidget(scrollAreaWidgetContents);
        mainBodyRight->setObjectName("mainBodyRight");
        horizontalLayout_4 = new QHBoxLayout(mainBodyRight);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        frame_6 = new QFrame(mainBodyRight);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_6);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName("verticalLayout_8");
        nameUnderscore_1 = new CustomPlainTextEdit(frame_6);
        nameUnderscore_1->setObjectName("nameUnderscore_1");
        sizePolicy.setHeightForWidth(nameUnderscore_1->sizePolicy().hasHeightForWidth());
        nameUnderscore_1->setSizePolicy(sizePolicy);
        nameUnderscore_1->setMaximumSize(QSize(150, 20));
        nameUnderscore_1->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_8->addWidget(nameUnderscore_1);

        nameUnderscore_2 = new CustomPlainTextEdit(frame_6);
        nameUnderscore_2->setObjectName("nameUnderscore_2");
        sizePolicy.setHeightForWidth(nameUnderscore_2->sizePolicy().hasHeightForWidth());
        nameUnderscore_2->setSizePolicy(sizePolicy);
        nameUnderscore_2->setMaximumSize(QSize(150, 20));
        nameUnderscore_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_8->addWidget(nameUnderscore_2);

        nameUnderscore_3 = new CustomPlainTextEdit(frame_6);
        nameUnderscore_3->setObjectName("nameUnderscore_3");
        sizePolicy.setHeightForWidth(nameUnderscore_3->sizePolicy().hasHeightForWidth());
        nameUnderscore_3->setSizePolicy(sizePolicy);
        nameUnderscore_3->setMaximumSize(QSize(150, 20));
        nameUnderscore_3->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_8->addWidget(nameUnderscore_3);

        nameUnderscore_4 = new CustomPlainTextEdit(frame_6);
        nameUnderscore_4->setObjectName("nameUnderscore_4");
        sizePolicy.setHeightForWidth(nameUnderscore_4->sizePolicy().hasHeightForWidth());
        nameUnderscore_4->setSizePolicy(sizePolicy);
        nameUnderscore_4->setMaximumSize(QSize(150, 20));
        nameUnderscore_4->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_8->addWidget(nameUnderscore_4);

        nameUnderscore_5 = new CustomPlainTextEdit(frame_6);
        nameUnderscore_5->setObjectName("nameUnderscore_5");
        sizePolicy.setHeightForWidth(nameUnderscore_5->sizePolicy().hasHeightForWidth());
        nameUnderscore_5->setSizePolicy(sizePolicy);
        nameUnderscore_5->setMaximumSize(QSize(150, 20));
        nameUnderscore_5->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_8->addWidget(nameUnderscore_5);

        nameUnderscore_6 = new CustomPlainTextEdit(frame_6);
        nameUnderscore_6->setObjectName("nameUnderscore_6");
        sizePolicy.setHeightForWidth(nameUnderscore_6->sizePolicy().hasHeightForWidth());
        nameUnderscore_6->setSizePolicy(sizePolicy);
        nameUnderscore_6->setMaximumSize(QSize(150, 20));
        nameUnderscore_6->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_8->addWidget(nameUnderscore_6);

        nameUnderscore_7 = new CustomPlainTextEdit(frame_6);
        nameUnderscore_7->setObjectName("nameUnderscore_7");
        sizePolicy.setHeightForWidth(nameUnderscore_7->sizePolicy().hasHeightForWidth());
        nameUnderscore_7->setSizePolicy(sizePolicy);
        nameUnderscore_7->setMaximumSize(QSize(150, 20));
        nameUnderscore_7->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_8->addWidget(nameUnderscore_7);

        nameUnderscore_8 = new CustomPlainTextEdit(frame_6);
        nameUnderscore_8->setObjectName("nameUnderscore_8");
        sizePolicy.setHeightForWidth(nameUnderscore_8->sizePolicy().hasHeightForWidth());
        nameUnderscore_8->setSizePolicy(sizePolicy);
        nameUnderscore_8->setMaximumSize(QSize(150, 20));
        nameUnderscore_8->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_8->addWidget(nameUnderscore_8);

        nameUnderscore_9 = new CustomPlainTextEdit(frame_6);
        nameUnderscore_9->setObjectName("nameUnderscore_9");
        sizePolicy.setHeightForWidth(nameUnderscore_9->sizePolicy().hasHeightForWidth());
        nameUnderscore_9->setSizePolicy(sizePolicy);
        nameUnderscore_9->setMaximumSize(QSize(150, 20));
        nameUnderscore_9->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_8->addWidget(nameUnderscore_9);

        nameUnderscore_10 = new CustomPlainTextEdit(frame_6);
        nameUnderscore_10->setObjectName("nameUnderscore_10");
        sizePolicy.setHeightForWidth(nameUnderscore_10->sizePolicy().hasHeightForWidth());
        nameUnderscore_10->setSizePolicy(sizePolicy);
        nameUnderscore_10->setMaximumSize(QSize(150, 20));
        nameUnderscore_10->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_8->addWidget(nameUnderscore_10);

        nameUnderscore_11 = new CustomPlainTextEdit(frame_6);
        nameUnderscore_11->setObjectName("nameUnderscore_11");
        sizePolicy.setHeightForWidth(nameUnderscore_11->sizePolicy().hasHeightForWidth());
        nameUnderscore_11->setSizePolicy(sizePolicy);
        nameUnderscore_11->setMaximumSize(QSize(150, 20));
        nameUnderscore_11->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_8->addWidget(nameUnderscore_11);

        nameUnderscore_12 = new CustomPlainTextEdit(frame_6);
        nameUnderscore_12->setObjectName("nameUnderscore_12");
        sizePolicy.setHeightForWidth(nameUnderscore_12->sizePolicy().hasHeightForWidth());
        nameUnderscore_12->setSizePolicy(sizePolicy);
        nameUnderscore_12->setMaximumSize(QSize(150, 20));
        nameUnderscore_12->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_8->addWidget(nameUnderscore_12);

        nameUnderscore_13 = new CustomPlainTextEdit(frame_6);
        nameUnderscore_13->setObjectName("nameUnderscore_13");
        sizePolicy.setHeightForWidth(nameUnderscore_13->sizePolicy().hasHeightForWidth());
        nameUnderscore_13->setSizePolicy(sizePolicy);
        nameUnderscore_13->setMaximumSize(QSize(150, 20));
        nameUnderscore_13->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_8->addWidget(nameUnderscore_13);

        nameUnderscore_14 = new CustomPlainTextEdit(frame_6);
        nameUnderscore_14->setObjectName("nameUnderscore_14");
        sizePolicy.setHeightForWidth(nameUnderscore_14->sizePolicy().hasHeightForWidth());
        nameUnderscore_14->setSizePolicy(sizePolicy);
        nameUnderscore_14->setMaximumSize(QSize(150, 20));
        nameUnderscore_14->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_8->addWidget(nameUnderscore_14);

        nameUnderscore_15 = new CustomPlainTextEdit(frame_6);
        nameUnderscore_15->setObjectName("nameUnderscore_15");
        sizePolicy.setHeightForWidth(nameUnderscore_15->sizePolicy().hasHeightForWidth());
        nameUnderscore_15->setSizePolicy(sizePolicy);
        nameUnderscore_15->setMaximumSize(QSize(150, 20));
        nameUnderscore_15->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_8->addWidget(nameUnderscore_15);

        nameUnderscore_16 = new CustomPlainTextEdit(frame_6);
        nameUnderscore_16->setObjectName("nameUnderscore_16");
        sizePolicy.setHeightForWidth(nameUnderscore_16->sizePolicy().hasHeightForWidth());
        nameUnderscore_16->setSizePolicy(sizePolicy);
        nameUnderscore_16->setMaximumSize(QSize(150, 20));
        nameUnderscore_16->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\"; background-color: white;\n"
"  color: black;"));

        verticalLayout_8->addWidget(nameUnderscore_16);


        horizontalLayout_4->addWidget(frame_6);


        horizontalLayout_5->addWidget(mainBodyRight);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_2->addWidget(scrollArea);


        horizontalLayout->addWidget(mainBodyContainer);

        OnboardAssistClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OnboardAssistClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 747, 22));
        OnboardAssistClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OnboardAssistClass);
        mainToolBar->setObjectName("mainToolBar");
        OnboardAssistClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OnboardAssistClass);
        statusBar->setObjectName("statusBar");
        OnboardAssistClass->setStatusBar(statusBar);

        retranslateUi(OnboardAssistClass);

        QMetaObject::connectSlotsByName(OnboardAssistClass);
    } // setupUi

    void retranslateUi(QMainWindow *OnboardAssistClass)
    {
        OnboardAssistClass->setWindowTitle(QCoreApplication::translate("OnboardAssistClass", "OnboardAssist", nullptr));
        processButton->setText(QCoreApplication::translate("OnboardAssistClass", "Get info for user", nullptr));
        extensionButton->setText(QCoreApplication::translate("OnboardAssistClass", "Populate Extensions", nullptr));
        Static3->setPlainText(QCoreApplication::translate("OnboardAssistClass", "CUSTOM::PureCloudWebRTCExtension", nullptr));
        Static1->setPlainText(QCoreApplication::translate("OnboardAssistClass", "WebRTC Phone", nullptr));
        Static2->setPlainText(QCoreApplication::translate("OnboardAssistClass", "@readingprograms.org\n"
"", nullptr));
        checkBox_1->setText(QString());
        checkBox_2->setText(QString());
        checkBox_3->setText(QString());
        checkBox_4->setText(QString());
        checkBox_5->setText(QString());
        checkBox_6->setText(QString());
        checkBox_7->setText(QString());
        checkBox_8->setText(QString());
        checkBox_9->setText(QString());
        checkBox_10->setText(QString());
        checkBox_11->setText(QString());
        checkBox_12->setText(QString());
        checkBox_13->setText(QString());
        checkBox_14->setText(QString());
        checkBox_15->setText(QString());
        checkBox_16->setText(QString());
        extensionPaste_1->setPlainText(QCoreApplication::translate("OnboardAssistClass", "3000", nullptr));
        extensionPaste_2->setPlainText(QCoreApplication::translate("OnboardAssistClass", "3001", nullptr));
        extensionPaste_3->setPlainText(QCoreApplication::translate("OnboardAssistClass", "3002", nullptr));
        extensionPaste_4->setPlainText(QCoreApplication::translate("OnboardAssistClass", "3003", nullptr));
        extensionPaste_5->setPlainText(QCoreApplication::translate("OnboardAssistClass", "3004", nullptr));
        extensionPaste_6->setPlainText(QCoreApplication::translate("OnboardAssistClass", "3005", nullptr));
        extensionPaste_7->setPlainText(QCoreApplication::translate("OnboardAssistClass", "3006", nullptr));
        extensionPaste_8->setPlainText(QCoreApplication::translate("OnboardAssistClass", "3007", nullptr));
        extensionPaste_9->setPlainText(QCoreApplication::translate("OnboardAssistClass", "3008", nullptr));
        extensionPaste_10->setPlainText(QCoreApplication::translate("OnboardAssistClass", "3009", nullptr));
        extensionPaste_11->setPlainText(QCoreApplication::translate("OnboardAssistClass", "3011", nullptr));
        extensionPaste_12->setPlainText(QCoreApplication::translate("OnboardAssistClass", "3012", nullptr));
        extensionPaste_13->setPlainText(QCoreApplication::translate("OnboardAssistClass", "3013", nullptr));
        extensionPaste_14->setPlainText(QCoreApplication::translate("OnboardAssistClass", "3014", nullptr));
        extensionPaste_15->setPlainText(QCoreApplication::translate("OnboardAssistClass", "3015", nullptr));
        extensionPaste_16->setPlainText(QCoreApplication::translate("OnboardAssistClass", "3016", nullptr));
        nameUnderscore_1->setPlainText(QCoreApplication::translate("OnboardAssistClass", "First_Last", nullptr));
        nameUnderscore_2->setPlainText(QCoreApplication::translate("OnboardAssistClass", "First_Last2", nullptr));
        nameUnderscore_3->setPlainText(QCoreApplication::translate("OnboardAssistClass", "First_Last3", nullptr));
        nameUnderscore_4->setPlainText(QCoreApplication::translate("OnboardAssistClass", "First_Last4", nullptr));
        nameUnderscore_5->setPlainText(QCoreApplication::translate("OnboardAssistClass", "First_Last5", nullptr));
        nameUnderscore_6->setPlainText(QCoreApplication::translate("OnboardAssistClass", "First_Last6", nullptr));
        nameUnderscore_7->setPlainText(QCoreApplication::translate("OnboardAssistClass", "First_Last7", nullptr));
        nameUnderscore_8->setPlainText(QCoreApplication::translate("OnboardAssistClass", "First_Last8", nullptr));
        nameUnderscore_9->setPlainText(QCoreApplication::translate("OnboardAssistClass", "First_Last9", nullptr));
        nameUnderscore_10->setPlainText(QCoreApplication::translate("OnboardAssistClass", "First_Last10", nullptr));
        nameUnderscore_11->setPlainText(QCoreApplication::translate("OnboardAssistClass", "First_Last11", nullptr));
        nameUnderscore_12->setPlainText(QCoreApplication::translate("OnboardAssistClass", "First_Last12", nullptr));
        nameUnderscore_13->setPlainText(QCoreApplication::translate("OnboardAssistClass", "First_Last13", nullptr));
        nameUnderscore_14->setPlainText(QCoreApplication::translate("OnboardAssistClass", "First_Last14", nullptr));
        nameUnderscore_15->setPlainText(QCoreApplication::translate("OnboardAssistClass", "First_Last15", nullptr));
        nameUnderscore_16->setPlainText(QCoreApplication::translate("OnboardAssistClass", "First_Last16\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OnboardAssistClass: public Ui_OnboardAssistClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONBOARDASSIST_H

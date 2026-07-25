/********************************************************************************
** Form generated from reading UI file 'profilewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEWINDOW_H
#define UI_PROFILEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProfileWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_5;

    void setupUi(QWidget *ProfileWindow)
    {
        if (ProfileWindow->objectName().isEmpty())
            ProfileWindow->setObjectName("ProfileWindow");
        ProfileWindow->resize(553, 725);
        label = new QLabel(ProfileWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 70, 201, 181));
        label_2 = new QLabel(ProfileWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 310, 63, 20));
        label_3 = new QLabel(ProfileWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(240, 370, 63, 20));
        label_4 = new QLabel(ProfileWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(240, 430, 63, 20));
        pushButton = new QPushButton(ProfileWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 590, 90, 29));
        label_6 = new QLabel(ProfileWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(80, 310, 81, 21));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:12pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));
        label_7 = new QLabel(ProfileWindow);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(80, 360, 121, 41));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:12pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));
        label_8 = new QLabel(ProfileWindow);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(80, 480, 131, 41));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:12pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));
        label_9 = new QLabel(ProfileWindow);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(80, 420, 111, 31));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:12pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));
        label_5 = new QLabel(ProfileWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(240, 490, 63, 20));

        retranslateUi(ProfileWindow);

        QMetaObject::connectSlotsByName(ProfileWindow);
    } // setupUi

    void retranslateUi(QWidget *ProfileWindow)
    {
        ProfileWindow->setWindowTitle(QCoreApplication::translate("ProfileWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("ProfileWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("ProfileWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("ProfileWindow", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("ProfileWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("ProfileWindow", "Close", nullptr));
        label_6->setText(QCoreApplication::translate("ProfileWindow", "Name :", nullptr));
        label_7->setText(QCoreApplication::translate("ProfileWindow", "UserName :", nullptr));
        label_8->setText(QCoreApplication::translate("ProfileWindow", "Biography :", nullptr));
        label_9->setText(QCoreApplication::translate("ProfileWindow", "Password :", nullptr));
        label_5->setText(QCoreApplication::translate("ProfileWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileWindow: public Ui_ProfileWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEWINDOW_H

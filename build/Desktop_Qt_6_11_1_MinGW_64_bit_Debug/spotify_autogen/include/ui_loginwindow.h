/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginwindow
{
public:
    QPushButton *pushButton_2;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_4;

    void setupUi(QWidget *loginwindow)
    {
        if (loginwindow->objectName().isEmpty())
            loginwindow->setObjectName("loginwindow");
        loginwindow->resize(732, 609);
        pushButton_2 = new QPushButton(loginwindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 490, 251, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: transparent;\n"
"    color: white;\n"
"    border: 2px solid white;\n"
"    border-radius: 18px;\n"
"    font-size: 14pt;\n"
"    font-weight: bold;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    border: 2px solid #1DB954;\n"
"    color: #1DB954;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: #282828;\n"
"}"));
        label = new QLabel(loginwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 80, 311, 91));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"    color: white;\n"
"    font-size: 28px;\n"
"    font-weight: bold;\n"
"}"));
        layoutWidget = new QWidget(loginwindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 300, 581, 78));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"    color: #B3B3B3;\n"
"    font-size: 12pt;\n"
"    font-weight: bold;\n"
"}"));

        verticalLayout_3->addWidget(label_4);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"    background-color: #282828;\n"
"    color: white;\n"
"    border: 2px solid #404040;\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"    border: 2px solid #1DB954;\n"
"}"));
        lineEdit_3->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_3->addWidget(lineEdit_3);

        pushButton = new QPushButton(loginwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 410, 251, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    background-color: #1DB954;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 18px;\n"
"    font-size: 14pt;\n"
"    font-weight: bold;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: #1ED760;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: #169C46;\n"
"}"));
        layoutWidget_2 = new QWidget(loginwindow);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(70, 200, 581, 78));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"    color: #B3B3B3;\n"
"    font-size: 12pt;\n"
"    font-weight: bold;\n"
"}"));

        verticalLayout_4->addWidget(label_5);

        lineEdit_4 = new QLineEdit(layoutWidget_2);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"    background-color: #282828;\n"
"    color: white;\n"
"    border: 2px solid #404040;\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QLineEdit:focus\n"
"{\n"
"    border: 2px solid #1DB954;\n"
"}"));

        verticalLayout_4->addWidget(lineEdit_4);


        retranslateUi(loginwindow);

        QMetaObject::connectSlotsByName(loginwindow);
    } // setupUi

    void retranslateUi(QWidget *loginwindow)
    {
        loginwindow->setWindowTitle(QCoreApplication::translate("loginwindow", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("loginwindow", "Register", nullptr));
        label->setText(QCoreApplication::translate("loginwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; color:#aa007f;\">SPOTIFY MUSIC</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("loginwindow", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("loginwindow", "Log In", nullptr));
        label_5->setText(QCoreApplication::translate("loginwindow", "Username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginwindow: public Ui_loginwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H

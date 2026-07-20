/********************************************************************************
** Form generated from reading UI file 'editaccountwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITACCOUNTWINDOW_H
#define UI_EDITACCOUNTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditAccountwindow
{
public:
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QLabel *label_10;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QWidget *EditAccountwindow)
    {
        if (EditAccountwindow->objectName().isEmpty())
            EditAccountwindow->setObjectName("EditAccountwindow");
        EditAccountwindow->resize(697, 602);
        layoutWidget_3 = new QWidget(EditAccountwindow);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(50, 160, 571, 42));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:18pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));

        horizontalLayout_6->addWidget(label_8);

        lineEdit_2 = new QLineEdit(layoutWidget_3);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_6->addWidget(lineEdit_2);

        pushButton_2 = new QPushButton(EditAccountwindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(330, 450, 111, 41));
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
        label_10 = new QLabel(EditAccountwindow);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(50, 270, 351, 71));
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:18pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));
        layoutWidget = new QWidget(EditAccountwindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 100, 571, 42));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:18pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));

        horizontalLayout_4->addWidget(label_6);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_4->addWidget(lineEdit);

        lineEdit_4 = new QLineEdit(EditAccountwindow);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(220, 280, 401, 111));
        layoutWidget_2 = new QWidget(EditAccountwindow);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(50, 220, 571, 42));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:18pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));

        horizontalLayout_5->addWidget(label_7);

        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_5->addWidget(lineEdit_3);

        pushButton = new QPushButton(EditAccountwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 450, 111, 41));
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

        retranslateUi(EditAccountwindow);

        QMetaObject::connectSlotsByName(EditAccountwindow);
    } // setupUi

    void retranslateUi(QWidget *EditAccountwindow)
    {
        EditAccountwindow->setWindowTitle(QCoreApplication::translate("EditAccountwindow", "Form", nullptr));
        label_8->setText(QCoreApplication::translate("EditAccountwindow", "UserName", nullptr));
        pushButton_2->setText(QCoreApplication::translate("EditAccountwindow", "Cancel", nullptr));
        label_10->setText(QCoreApplication::translate("EditAccountwindow", "Biography", nullptr));
        label_6->setText(QCoreApplication::translate("EditAccountwindow", "Full Name", nullptr));
        label_7->setText(QCoreApplication::translate("EditAccountwindow", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("EditAccountwindow", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditAccountwindow: public Ui_EditAccountwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITACCOUNTWINDOW_H

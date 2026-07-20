/********************************************************************************
** Form generated from reading UI file 'listenerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTENERWINDOW_H
#define UI_LISTENERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listenerWindow
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QWidget *listenerWindow)
    {
        if (listenerWindow->objectName().isEmpty())
            listenerWindow->setObjectName("listenerWindow");
        listenerWindow->resize(677, 615);
        listenerWindow->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background:#282828;\n"
"    border:2px solid #1DB954;\n"
"    border-radius:8px;\n"
"    color:white;\n"
"    padding:6px;\n"
"}  QPushButton{\n"
"    background-color:#1DB954;\n"
"    color:white;\n"
"    border:none;\n"
"    border-radius:10px;\n"
"    padding:8px;\n"
"    font-weight:bold;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background:#1ED760;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"    background:#169C46;\n"
"}\n"
"QComboBox{\n"
"    background:#282828;\n"
"    color:white;\n"
"    border:2px solid #1DB954;\n"
"    border-radius:8px;\n"
"    padding:6px;\n"
"} QListWidget{\n"
"    background:#181818;\n"
"    border:2px solid #1DB954;\n"
"    border-radius:8px;\n"
"    color:white;\n"
"}\n"
"\n"
"QListWidget::item{\n"
"    padding:8px;\n"
"}\n"
"\n"
"QListWidget::item:selected{\n"
"    background:#1DB954;\n"
"}"));
        listWidget = new QListWidget(listenerWindow);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 150, 611, 351));
        pushButton = new QPushButton(listenerWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 530, 131, 31));
        pushButton_2 = new QPushButton(listenerWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(230, 530, 121, 31));
        pushButton_3 = new QPushButton(listenerWindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(400, 530, 131, 31));
        pushButton_4 = new QPushButton(listenerWindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(440, 80, 211, 41));
        label_2 = new QLabel(listenerWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 80, 181, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:18pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));
        pushButton_5 = new QPushButton(listenerWindow);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(569, 568, 91, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: #E53935;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 12px;\n"
"    font-size: 11pt;\n"
"    font-weight: bold;\n"
"    padding: 5px 12px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background-color: #F44336;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"    background-color: #C62828;\n"
"}"));
        layoutWidget = new QWidget(listenerWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 30, 293, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:18pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));

        horizontalLayout->addWidget(label);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:18pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));

        horizontalLayout->addWidget(label_3);

        pushButton_6 = new QPushButton(listenerWindow);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(430, 10, 111, 41));
        pushButton_7 = new QPushButton(listenerWindow);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(550, 10, 121, 41));

        retranslateUi(listenerWindow);

        QMetaObject::connectSlotsByName(listenerWindow);
    } // setupUi

    void retranslateUi(QWidget *listenerWindow)
    {
        listenerWindow->setWindowTitle(QCoreApplication::translate("listenerWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("listenerWindow", "Create Playlist", nullptr));
        pushButton_2->setText(QCoreApplication::translate("listenerWindow", "Edit Playlist", nullptr));
        pushButton_3->setText(QCoreApplication::translate("listenerWindow", "Delete Playlist", nullptr));
        pushButton_4->setText(QCoreApplication::translate("listenerWindow", "Explore Music", nullptr));
        label_2->setText(QCoreApplication::translate("listenerWindow", "<html><head/><body><p align=\"center\">My Playlist</p></body></html>", nullptr));
        pushButton_5->setText(QCoreApplication::translate("listenerWindow", "Logout", nullptr));
        label->setText(QCoreApplication::translate("listenerWindow", "Welcome", nullptr));
        label_3->setText(QCoreApplication::translate("listenerWindow", "TextLabel", nullptr));
        pushButton_6->setText(QCoreApplication::translate("listenerWindow", "Edit account", nullptr));
        pushButton_7->setText(QCoreApplication::translate("listenerWindow", "Delete account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listenerWindow: public Ui_listenerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTENERWINDOW_H

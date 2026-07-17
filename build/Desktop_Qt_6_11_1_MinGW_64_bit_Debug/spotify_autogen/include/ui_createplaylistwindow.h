/********************************************************************************
** Form generated from reading UI file 'createplaylistwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPLAYLISTWINDOW_H
#define UI_CREATEPLAYLISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createPlaylistWindow
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *createPlaylistWindow)
    {
        if (createPlaylistWindow->objectName().isEmpty())
            createPlaylistWindow->setObjectName("createPlaylistWindow");
        createPlaylistWindow->resize(570, 448);
        createPlaylistWindow->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background:#282828;\n"
"    border:2px solid #1DB954;\n"
"    border-radius:8px;\n"
"    color:white;\n"
"    padding:6px;\n"
"} QLabel{\n"
"    color:white;\n"
"    font-weight:bold;\n"
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
"}"));
        label = new QLabel(createPlaylistWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 40, 201, 81));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:10pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));
        lineEdit = new QLineEdit(createPlaylistWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(130, 140, 241, 51));
        lineEdit->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(createPlaylistWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 250, 101, 41));
        pushButton_2 = new QPushButton(createPlaylistWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(280, 250, 101, 41));

        retranslateUi(createPlaylistWindow);

        QMetaObject::connectSlotsByName(createPlaylistWindow);
    } // setupUi

    void retranslateUi(QWidget *createPlaylistWindow)
    {
        createPlaylistWindow->setWindowTitle(QCoreApplication::translate("createPlaylistWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("createPlaylistWindow", "Playlist Name:", nullptr));
        pushButton->setText(QCoreApplication::translate("createPlaylistWindow", "Create", nullptr));
        pushButton_2->setText(QCoreApplication::translate("createPlaylistWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createPlaylistWindow: public Ui_createPlaylistWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPLAYLISTWINDOW_H

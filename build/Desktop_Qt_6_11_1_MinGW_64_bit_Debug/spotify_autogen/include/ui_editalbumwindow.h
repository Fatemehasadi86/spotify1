/********************************************************************************
** Form generated from reading UI file 'editalbumwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITALBUMWINDOW_H
#define UI_EDITALBUMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editAlbumWindow
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *editAlbumWindow)
    {
        if (editAlbumWindow->objectName().isEmpty())
            editAlbumWindow->setObjectName("editAlbumWindow");
        editAlbumWindow->resize(672, 555);
        editAlbumWindow->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        lineEdit = new QLineEdit(editAlbumWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(210, 90, 211, 31));
        lineEdit_2 = new QLineEdit(editAlbumWindow);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(210, 160, 211, 31));
        pushButton = new QPushButton(editAlbumWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 240, 131, 41));
        label_2 = new QLabel(editAlbumWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 170, 111, 21));
        label = new QLabel(editAlbumWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 70, 161, 61));

        retranslateUi(editAlbumWindow);

        QMetaObject::connectSlotsByName(editAlbumWindow);
    } // setupUi

    void retranslateUi(QWidget *editAlbumWindow)
    {
        editAlbumWindow->setWindowTitle(QCoreApplication::translate("editAlbumWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("editAlbumWindow", "Save", nullptr));
        label_2->setText(QCoreApplication::translate("editAlbumWindow", "Release Year", nullptr));
        label->setText(QCoreApplication::translate("editAlbumWindow", "Album Name :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editAlbumWindow: public Ui_editAlbumWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITALBUMWINDOW_H

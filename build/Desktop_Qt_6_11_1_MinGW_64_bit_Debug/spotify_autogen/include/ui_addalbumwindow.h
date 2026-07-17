/********************************************************************************
** Form generated from reading UI file 'addalbumwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDALBUMWINDOW_H
#define UI_ADDALBUMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddAlbumWindow
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *AddAlbumWindow)
    {
        if (AddAlbumWindow->objectName().isEmpty())
            AddAlbumWindow->setObjectName("AddAlbumWindow");
        AddAlbumWindow->resize(498, 496);
        AddAlbumWindow->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        label = new QLabel(AddAlbumWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 100, 161, 61));
        lineEdit = new QLineEdit(AddAlbumWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(170, 120, 113, 28));
        label_2 = new QLabel(AddAlbumWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 200, 111, 21));
        lineEdit_2 = new QLineEdit(AddAlbumWindow);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(190, 200, 113, 28));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QListWidget{\n"
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
        label_3 = new QLabel(AddAlbumWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 280, 131, 16));
        pushButton = new QPushButton(AddAlbumWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 270, 181, 31));
        pushButton_2 = new QPushButton(AddAlbumWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 350, 111, 41));
        pushButton_3 = new QPushButton(AddAlbumWindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(250, 350, 111, 41));

        retranslateUi(AddAlbumWindow);

        QMetaObject::connectSlotsByName(AddAlbumWindow);
    } // setupUi

    void retranslateUi(QWidget *AddAlbumWindow)
    {
        AddAlbumWindow->setWindowTitle(QCoreApplication::translate("AddAlbumWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("AddAlbumWindow", "Album Name :", nullptr));
        label_2->setText(QCoreApplication::translate("AddAlbumWindow", "Release Year", nullptr));
        label_3->setText(QCoreApplication::translate("AddAlbumWindow", "Cover Image", nullptr));
        pushButton->setText(QCoreApplication::translate("AddAlbumWindow", "Choose Image", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddAlbumWindow", "Save", nullptr));
        pushButton_3->setText(QCoreApplication::translate("AddAlbumWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddAlbumWindow: public Ui_AddAlbumWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDALBUMWINDOW_H

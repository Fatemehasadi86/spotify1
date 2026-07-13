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

    void setupUi(QWidget *editAlbumWindow)
    {
        if (editAlbumWindow->objectName().isEmpty())
            editAlbumWindow->setObjectName("editAlbumWindow");
        editAlbumWindow->resize(672, 555);
        lineEdit = new QLineEdit(editAlbumWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(192, 90, 211, 31));
        lineEdit_2 = new QLineEdit(editAlbumWindow);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(190, 150, 211, 31));
        pushButton = new QPushButton(editAlbumWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 230, 131, 41));

        retranslateUi(editAlbumWindow);

        QMetaObject::connectSlotsByName(editAlbumWindow);
    } // setupUi

    void retranslateUi(QWidget *editAlbumWindow)
    {
        editAlbumWindow->setWindowTitle(QCoreApplication::translate("editAlbumWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("editAlbumWindow", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editAlbumWindow: public Ui_editAlbumWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITALBUMWINDOW_H

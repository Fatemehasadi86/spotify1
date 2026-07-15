/********************************************************************************
** Form generated from reading UI file 'editplaylistwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPLAYLISTWINDOW_H
#define UI_EDITPLAYLISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editPlaylistWindow
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *editPlaylistWindow)
    {
        if (editPlaylistWindow->objectName().isEmpty())
            editPlaylistWindow->setObjectName("editPlaylistWindow");
        editPlaylistWindow->resize(586, 508);
        lineEdit = new QLineEdit(editPlaylistWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(280, 80, 181, 31));
        label = new QLabel(editPlaylistWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 90, 111, 21));
        pushButton = new QPushButton(editPlaylistWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 170, 91, 31));

        retranslateUi(editPlaylistWindow);

        QMetaObject::connectSlotsByName(editPlaylistWindow);
    } // setupUi

    void retranslateUi(QWidget *editPlaylistWindow)
    {
        editPlaylistWindow->setWindowTitle(QCoreApplication::translate("editPlaylistWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("editPlaylistWindow", "Playlist Name", nullptr));
        pushButton->setText(QCoreApplication::translate("editPlaylistWindow", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editPlaylistWindow: public Ui_editPlaylistWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPLAYLISTWINDOW_H

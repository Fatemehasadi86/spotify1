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
        createPlaylistWindow->resize(671, 626);
        label = new QLabel(createPlaylistWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 20, 201, 81));
        lineEdit = new QLineEdit(createPlaylistWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(110, 90, 241, 51));
        pushButton = new QPushButton(createPlaylistWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 180, 101, 41));
        pushButton_2 = new QPushButton(createPlaylistWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(250, 180, 101, 41));

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

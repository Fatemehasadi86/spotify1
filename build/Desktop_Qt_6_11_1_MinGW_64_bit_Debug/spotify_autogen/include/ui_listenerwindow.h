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
    QLabel *label;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QPushButton *pushButton_5;

    void setupUi(QWidget *listenerWindow)
    {
        if (listenerWindow->objectName().isEmpty())
            listenerWindow->setObjectName("listenerWindow");
        listenerWindow->resize(677, 615);
        listWidget = new QListWidget(listenerWindow);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(50, 160, 521, 321));
        pushButton = new QPushButton(listenerWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 530, 131, 31));
        pushButton_2 = new QPushButton(listenerWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(230, 530, 121, 31));
        pushButton_3 = new QPushButton(listenerWindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(400, 530, 131, 31));
        label = new QLabel(listenerWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 121, 61));
        pushButton_4 = new QPushButton(listenerWindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(469, 60, 131, 41));
        label_2 = new QLabel(listenerWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 90, 111, 51));
        pushButton_5 = new QPushButton(listenerWindow);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(570, 570, 90, 29));

        retranslateUi(listenerWindow);

        QMetaObject::connectSlotsByName(listenerWindow);
    } // setupUi

    void retranslateUi(QWidget *listenerWindow)
    {
        listenerWindow->setWindowTitle(QCoreApplication::translate("listenerWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("listenerWindow", "Create Playlist", nullptr));
        pushButton_2->setText(QCoreApplication::translate("listenerWindow", "Edit Playlist", nullptr));
        pushButton_3->setText(QCoreApplication::translate("listenerWindow", "Delete Playlist", nullptr));
        label->setText(QCoreApplication::translate("listenerWindow", "Welcome back", nullptr));
        pushButton_4->setText(QCoreApplication::translate("listenerWindow", "Explore Music", nullptr));
        label_2->setText(QCoreApplication::translate("listenerWindow", "<html><head/><body><p align=\"center\">My Playlist</p></body></html>", nullptr));
        pushButton_5->setText(QCoreApplication::translate("listenerWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listenerWindow: public Ui_listenerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTENERWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'albumwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMWINDOW_H
#define UI_ALBUMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_albumWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *albumWindow)
    {
        if (albumWindow->objectName().isEmpty())
            albumWindow->setObjectName("albumWindow");
        albumWindow->resize(710, 592);
        label = new QLabel(albumWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(162, 50, 191, 41));
        label_2 = new QLabel(albumWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(440, 60, 63, 20));
        listWidget = new QListWidget(albumWindow);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(180, 121, 256, 271));
        pushButton = new QPushButton(albumWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 460, 90, 29));
        pushButton_2 = new QPushButton(albumWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(230, 460, 90, 29));
        pushButton_3 = new QPushButton(albumWindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(350, 460, 111, 31));
        pushButton_4 = new QPushButton(albumWindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(560, 520, 90, 29));

        retranslateUi(albumWindow);

        QMetaObject::connectSlotsByName(albumWindow);
    } // setupUi

    void retranslateUi(QWidget *albumWindow)
    {
        albumWindow->setWindowTitle(QCoreApplication::translate("albumWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("albumWindow", "Album Name :", nullptr));
        label_2->setText(QCoreApplication::translate("albumWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("albumWindow", "Add Song", nullptr));
        pushButton_2->setText(QCoreApplication::translate("albumWindow", "Edit Song ", nullptr));
        pushButton_3->setText(QCoreApplication::translate("albumWindow", "Delete Song", nullptr));
        pushButton_4->setText(QCoreApplication::translate("albumWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class albumWindow: public Ui_albumWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMWINDOW_H

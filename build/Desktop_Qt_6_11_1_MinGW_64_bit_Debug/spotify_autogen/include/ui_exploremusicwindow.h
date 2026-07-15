/********************************************************************************
** Form generated from reading UI file 'exploremusicwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPLOREMUSICWINDOW_H
#define UI_EXPLOREMUSICWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exploreMusicwindow
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *exploreMusicwindow)
    {
        if (exploreMusicwindow->objectName().isEmpty())
            exploreMusicwindow->setObjectName("exploreMusicwindow");
        exploreMusicwindow->resize(678, 603);
        label = new QLabel(exploreMusicwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(72, 60, 161, 51));
        listWidget = new QListWidget(exploreMusicwindow);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(30, 140, 321, 251));
        pushButton = new QPushButton(exploreMusicwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 440, 111, 41));
        pushButton_2 = new QPushButton(exploreMusicwindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(240, 440, 111, 41));

        retranslateUi(exploreMusicwindow);

        QMetaObject::connectSlotsByName(exploreMusicwindow);
    } // setupUi

    void retranslateUi(QWidget *exploreMusicwindow)
    {
        exploreMusicwindow->setWindowTitle(QCoreApplication::translate("exploreMusicwindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("exploreMusicwindow", "Artists", nullptr));
        pushButton->setText(QCoreApplication::translate("exploreMusicwindow", "Open Artist", nullptr));
        pushButton_2->setText(QCoreApplication::translate("exploreMusicwindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exploreMusicwindow: public Ui_exploreMusicwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPLOREMUSICWINDOW_H

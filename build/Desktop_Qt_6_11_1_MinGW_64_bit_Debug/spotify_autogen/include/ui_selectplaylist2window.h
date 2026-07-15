/********************************************************************************
** Form generated from reading UI file 'selectplaylist2window.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTPLAYLIST2WINDOW_H
#define UI_SELECTPLAYLIST2WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectplaylist2window
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *selectplaylist2window)
    {
        if (selectplaylist2window->objectName().isEmpty())
            selectplaylist2window->setObjectName("selectplaylist2window");
        selectplaylist2window->resize(693, 592);
        listWidget = new QListWidget(selectplaylist2window);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(180, 90, 256, 321));
        pushButton = new QPushButton(selectplaylist2window);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 490, 121, 31));

        retranslateUi(selectplaylist2window);

        QMetaObject::connectSlotsByName(selectplaylist2window);
    } // setupUi

    void retranslateUi(QWidget *selectplaylist2window)
    {
        selectplaylist2window->setWindowTitle(QCoreApplication::translate("selectplaylist2window", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("selectplaylist2window", "Delete playlist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectplaylist2window: public Ui_selectplaylist2window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTPLAYLIST2WINDOW_H

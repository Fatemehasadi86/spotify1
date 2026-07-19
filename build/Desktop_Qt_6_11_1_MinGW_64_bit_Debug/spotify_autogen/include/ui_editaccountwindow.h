/********************************************************************************
** Form generated from reading UI file 'editaccountwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITACCOUNTWINDOW_H
#define UI_EDITACCOUNTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditAccountwindow
{
public:

    void setupUi(QWidget *EditAccountwindow)
    {
        if (EditAccountwindow->objectName().isEmpty())
            EditAccountwindow->setObjectName("EditAccountwindow");
        EditAccountwindow->resize(697, 602);

        retranslateUi(EditAccountwindow);

        QMetaObject::connectSlotsByName(EditAccountwindow);
    } // setupUi

    void retranslateUi(QWidget *EditAccountwindow)
    {
        EditAccountwindow->setWindowTitle(QCoreApplication::translate("EditAccountwindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditAccountwindow: public Ui_EditAccountwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITACCOUNTWINDOW_H

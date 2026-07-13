/********************************************************************************
** Form generated from reading UI file 'selectalbum2window.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTALBUM2WINDOW_H
#define UI_SELECTALBUM2WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectAlbum2Window
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *selectAlbum2Window)
    {
        if (selectAlbum2Window->objectName().isEmpty())
            selectAlbum2Window->setObjectName("selectAlbum2Window");
        selectAlbum2Window->resize(652, 638);
        listWidget = new QListWidget(selectAlbum2Window);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(180, 80, 256, 311));
        pushButton = new QPushButton(selectAlbum2Window);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 460, 90, 29));

        retranslateUi(selectAlbum2Window);

        QMetaObject::connectSlotsByName(selectAlbum2Window);
    } // setupUi

    void retranslateUi(QWidget *selectAlbum2Window)
    {
        selectAlbum2Window->setWindowTitle(QCoreApplication::translate("selectAlbum2Window", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("selectAlbum2Window", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectAlbum2Window: public Ui_selectAlbum2Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTALBUM2WINDOW_H

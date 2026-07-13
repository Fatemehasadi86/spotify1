/********************************************************************************
** Form generated from reading UI file 'selectalbumwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTALBUMWINDOW_H
#define UI_SELECTALBUMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectAlbumWindow
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *selectAlbumWindow)
    {
        if (selectAlbumWindow->objectName().isEmpty())
            selectAlbumWindow->setObjectName("selectAlbumWindow");
        selectAlbumWindow->resize(619, 456);
        listWidget = new QListWidget(selectAlbumWindow);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(155, 70, 271, 301));
        pushButton = new QPushButton(selectAlbumWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 400, 90, 29));

        retranslateUi(selectAlbumWindow);

        QMetaObject::connectSlotsByName(selectAlbumWindow);
    } // setupUi

    void retranslateUi(QWidget *selectAlbumWindow)
    {
        selectAlbumWindow->setWindowTitle(QCoreApplication::translate("selectAlbumWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("selectAlbumWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectAlbumWindow: public Ui_selectAlbumWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTALBUMWINDOW_H

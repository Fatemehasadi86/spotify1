/********************************************************************************
** Form generated from reading UI file 'selectplaylistforsongwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTPLAYLISTFORSONGWINDOW_H
#define UI_SELECTPLAYLISTFORSONGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectPlaylistforsongwindow
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *selectPlaylistforsongwindow)
    {
        if (selectPlaylistforsongwindow->objectName().isEmpty())
            selectPlaylistforsongwindow->setObjectName("selectPlaylistforsongwindow");
        selectPlaylistforsongwindow->resize(660, 549);
        listWidget = new QListWidget(selectPlaylistforsongwindow);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(150, 90, 256, 192));
        pushButton = new QPushButton(selectPlaylistforsongwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 340, 90, 29));

        retranslateUi(selectPlaylistforsongwindow);

        QMetaObject::connectSlotsByName(selectPlaylistforsongwindow);
    } // setupUi

    void retranslateUi(QWidget *selectPlaylistforsongwindow)
    {
        selectPlaylistforsongwindow->setWindowTitle(QCoreApplication::translate("selectPlaylistforsongwindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("selectPlaylistforsongwindow", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectPlaylistforsongwindow: public Ui_selectPlaylistforsongwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTPLAYLISTFORSONGWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'selectplaylistwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTPLAYLISTWINDOW_H
#define UI_SELECTPLAYLISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectPlaylistWindow
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *selectPlaylistWindow)
    {
        if (selectPlaylistWindow->objectName().isEmpty())
            selectPlaylistWindow->setObjectName("selectPlaylistWindow");
        selectPlaylistWindow->resize(674, 531);
        listWidget = new QListWidget(selectPlaylistWindow);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(190, 60, 251, 291));
        pushButton = new QPushButton(selectPlaylistWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 400, 101, 41));

        retranslateUi(selectPlaylistWindow);

        QMetaObject::connectSlotsByName(selectPlaylistWindow);
    } // setupUi

    void retranslateUi(QWidget *selectPlaylistWindow)
    {
        selectPlaylistWindow->setWindowTitle(QCoreApplication::translate("selectPlaylistWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("selectPlaylistWindow", " Edit playlist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectPlaylistWindow: public Ui_selectPlaylistWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTPLAYLISTWINDOW_H

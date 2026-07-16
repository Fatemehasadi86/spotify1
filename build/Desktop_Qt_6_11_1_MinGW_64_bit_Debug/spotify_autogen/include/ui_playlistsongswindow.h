/********************************************************************************
** Form generated from reading UI file 'playlistsongswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYLISTSONGSWINDOW_H
#define UI_PLAYLISTSONGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlaylistSongsWindow
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *PlaylistSongsWindow)
    {
        if (PlaylistSongsWindow->objectName().isEmpty())
            PlaylistSongsWindow->setObjectName("PlaylistSongsWindow");
        PlaylistSongsWindow->resize(650, 558);
        listWidget = new QListWidget(PlaylistSongsWindow);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(145, 51, 281, 281));
        pushButton = new QPushButton(PlaylistSongsWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 390, 141, 41));

        retranslateUi(PlaylistSongsWindow);

        QMetaObject::connectSlotsByName(PlaylistSongsWindow);
    } // setupUi

    void retranslateUi(QWidget *PlaylistSongsWindow)
    {
        PlaylistSongsWindow->setWindowTitle(QCoreApplication::translate("PlaylistSongsWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("PlaylistSongsWindow", "Remove Song", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlaylistSongsWindow: public Ui_PlaylistSongsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYLISTSONGSWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'album_song_window.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUM_SONG_WINDOW_H
#define UI_ALBUM_SONG_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_album_song_window
{
public:
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *album_song_window)
    {
        if (album_song_window->objectName().isEmpty())
            album_song_window->setObjectName("album_song_window");
        album_song_window->resize(575, 403);
        listWidget = new QListWidget(album_song_window);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(120, 90, 281, 211));
        label = new QLabel(album_song_window);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 30, 81, 21));
        pushButton = new QPushButton(album_song_window);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 340, 121, 31));
        pushButton_2 = new QPushButton(album_song_window);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(130, 340, 90, 29));

        retranslateUi(album_song_window);

        QMetaObject::connectSlotsByName(album_song_window);
    } // setupUi

    void retranslateUi(QWidget *album_song_window)
    {
        album_song_window->setWindowTitle(QCoreApplication::translate("album_song_window", "Form", nullptr));
        label->setText(QCoreApplication::translate("album_song_window", "Songs:", nullptr));
        pushButton->setText(QCoreApplication::translate("album_song_window", "Add to playlist", nullptr));
        pushButton_2->setText(QCoreApplication::translate("album_song_window", "Like", nullptr));
    } // retranslateUi

};

namespace Ui {
    class album_song_window: public Ui_album_song_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUM_SONG_WINDOW_H

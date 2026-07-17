/********************************************************************************
** Form generated from reading UI file 'album_artist_window.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUM_ARTIST_WINDOW_H
#define UI_ALBUM_ARTIST_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_album_artist_window
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *album_artist_window)
    {
        if (album_artist_window->objectName().isEmpty())
            album_artist_window->setObjectName("album_artist_window");
        album_artist_window->resize(489, 363);
        album_artist_window->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"    background:#181818;\n"
"    border:2px solid #1DB954;\n"
"    border-radius:8px;\n"
"    color:white;\n"
"}\n"
"\n"
"QListWidget::item{\n"
"    padding:8px;\n"
"}\n"
"\n"
"QListWidget::item:selected{\n"
"    background:#1DB954;\n"
"}  QLabel{\n"
"    color:white;\n"
"    font-weight:bold;\n"
"}  QPushButton{\n"
"    background-color:#1DB954;\n"
"    color:white;\n"
"    border:none;\n"
"    border-radius:10px;\n"
"    padding:8px;\n"
"    font-weight:bold;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background:#1ED760;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"    background:#169C46;\n"
"}"));
        listWidget = new QListWidget(album_artist_window);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(90, 80, 256, 192));
        pushButton = new QPushButton(album_artist_window);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 300, 90, 29));
        label = new QLabel(album_artist_window);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 30, 63, 20));

        retranslateUi(album_artist_window);

        QMetaObject::connectSlotsByName(album_artist_window);
    } // setupUi

    void retranslateUi(QWidget *album_artist_window)
    {
        album_artist_window->setWindowTitle(QCoreApplication::translate("album_artist_window", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("album_artist_window", "Back", nullptr));
        label->setText(QCoreApplication::translate("album_artist_window", "Albums :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class album_artist_window: public Ui_album_artist_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUM_ARTIST_WINDOW_H

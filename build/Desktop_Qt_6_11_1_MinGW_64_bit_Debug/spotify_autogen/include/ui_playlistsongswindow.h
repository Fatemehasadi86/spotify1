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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlaylistSongsWindow
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QWidget *PlaylistSongsWindow)
    {
        if (PlaylistSongsWindow->objectName().isEmpty())
            PlaylistSongsWindow->setObjectName("PlaylistSongsWindow");
        PlaylistSongsWindow->resize(650, 558);
        PlaylistSongsWindow->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background:#282828;\n"
"    border:2px solid #1DB954;\n"
"    border-radius:8px;\n"
"    color:white;\n"
"    padding:6px;\n"
"} QLabel{\n"
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
"}\n"
"QComboBox{\n"
"    background:#282828;\n"
"    color:white;\n"
"    border:2px solid #1DB954;\n"
"    border-radius:8px;\n"
"    padding:6px;\n"
"} QListWidget{\n"
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
"}"));
        listWidget = new QListWidget(PlaylistSongsWindow);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(140, 170, 281, 301));
        pushButton = new QPushButton(PlaylistSongsWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 500, 141, 41));
        lineEdit = new QLineEdit(PlaylistSongsWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 110, 341, 31));
        label = new QLabel(PlaylistSongsWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 110, 63, 20));

        retranslateUi(PlaylistSongsWindow);

        QMetaObject::connectSlotsByName(PlaylistSongsWindow);
    } // setupUi

    void retranslateUi(QWidget *PlaylistSongsWindow)
    {
        PlaylistSongsWindow->setWindowTitle(QCoreApplication::translate("PlaylistSongsWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("PlaylistSongsWindow", "Remove Song", nullptr));
        label->setText(QCoreApplication::translate("PlaylistSongsWindow", "Search:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlaylistSongsWindow: public Ui_PlaylistSongsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYLISTSONGSWINDOW_H

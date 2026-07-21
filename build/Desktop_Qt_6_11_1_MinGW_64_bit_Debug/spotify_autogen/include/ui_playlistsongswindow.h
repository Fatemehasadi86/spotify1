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
#include <QtWidgets/QComboBox>
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
    QPushButton *pushButton_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QPushButton *pushButton_3;

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
        listWidget->setGeometry(QRect(150, 170, 281, 301));
        pushButton = new QPushButton(PlaylistSongsWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 490, 141, 41));
        lineEdit = new QLineEdit(PlaylistSongsWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(90, 40, 261, 31));
        label = new QLabel(PlaylistSongsWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 40, 63, 20));
        pushButton_2 = new QPushButton(PlaylistSongsWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(310, 490, 141, 41));
        label_2 = new QLabel(PlaylistSongsWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 110, 63, 20));
        comboBox = new QComboBox(PlaylistSongsWindow);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(90, 100, 261, 31));
        label_4 = new QLabel(PlaylistSongsWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(390, 90, 101, 21));
        label_5 = new QLabel(PlaylistSongsWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(400, 40, 111, 31));
        comboBox_2 = new QComboBox(PlaylistSongsWindow);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(510, 40, 121, 31));
        comboBox_3 = new QComboBox(PlaylistSongsWindow);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(510, 90, 121, 31));
        pushButton_3 = new QPushButton(PlaylistSongsWindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(499, 250, 91, 41));

        retranslateUi(PlaylistSongsWindow);

        QMetaObject::connectSlotsByName(PlaylistSongsWindow);
    } // setupUi

    void retranslateUi(QWidget *PlaylistSongsWindow)
    {
        PlaylistSongsWindow->setWindowTitle(QCoreApplication::translate("PlaylistSongsWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("PlaylistSongsWindow", "Remove Song", nullptr));
        label->setText(QCoreApplication::translate("PlaylistSongsWindow", "Search:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PlaylistSongsWindow", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("PlaylistSongsWindow", "Sort:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("PlaylistSongsWindow", "Default", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("PlaylistSongsWindow", "Name (A-Z)", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("PlaylistSongsWindow", "Year (New-old)", nullptr));

        label_4->setText(QCoreApplication::translate("PlaylistSongsWindow", "Filter by gener", nullptr));
        label_5->setText(QCoreApplication::translate("PlaylistSongsWindow", "Filter by year", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("PlaylistSongsWindow", "All", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("PlaylistSongsWindow", "2020", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("PlaylistSongsWindow", "2021", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("PlaylistSongsWindow", "2022", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("PlaylistSongsWindow", "2023", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("PlaylistSongsWindow", "2024", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("PlaylistSongsWindow", "2025", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("PlaylistSongsWindow", "2026", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("PlaylistSongsWindow", "All", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("PlaylistSongsWindow", "Pop", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("PlaylistSongsWindow", "Rock", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("PlaylistSongsWindow", "Rap", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("PlaylistSongsWindow", "Hip Hop", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("PlaylistSongsWindow", "Jazz", nullptr));
        comboBox_3->setItemText(6, QCoreApplication::translate("PlaylistSongsWindow", "Classical", nullptr));
        comboBox_3->setItemText(7, QCoreApplication::translate("PlaylistSongsWindow", "Metal", nullptr));
        comboBox_3->setItemText(8, QCoreApplication::translate("PlaylistSongsWindow", "Electronic", nullptr));
        comboBox_3->setItemText(9, QCoreApplication::translate("PlaylistSongsWindow", "Country", nullptr));

        pushButton_3->setText(QCoreApplication::translate("PlaylistSongsWindow", "Play", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlaylistSongsWindow: public Ui_PlaylistSongsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYLISTSONGSWINDOW_H

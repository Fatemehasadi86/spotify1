/********************************************************************************
** Form generated from reading UI file 'albumwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMWINDOW_H
#define UI_ALBUMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_albumWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QListWidget *listWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox_2;

    void setupUi(QWidget *albumWindow)
    {
        if (albumWindow->objectName().isEmpty())
            albumWindow->setObjectName("albumWindow");
        albumWindow->resize(710, 592);
        albumWindow->setStyleSheet(QString::fromUtf8("QListWidget{\n"
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
        label = new QLabel(albumWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 130, 191, 41));
        label_2 = new QLabel(albumWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 140, 81, 21));
        listWidget = new QListWidget(albumWindow);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(180, 190, 256, 271));
        pushButton_2 = new QPushButton(albumWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 490, 111, 31));
        pushButton_3 = new QPushButton(albumWindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(330, 490, 111, 31));
        pushButton_4 = new QPushButton(albumWindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(560, 520, 90, 29));
        lineEdit = new QLineEdit(albumWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(70, 80, 311, 31));
        label_3 = new QLabel(albumWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 80, 63, 20));
        comboBox = new QComboBox(albumWindow);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(540, 90, 121, 31));
        label_4 = new QLabel(albumWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(420, 90, 101, 21));
        label_5 = new QLabel(albumWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(420, 40, 111, 31));
        comboBox_2 = new QComboBox(albumWindow);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(540, 40, 121, 31));

        retranslateUi(albumWindow);

        QMetaObject::connectSlotsByName(albumWindow);
    } // setupUi

    void retranslateUi(QWidget *albumWindow)
    {
        albumWindow->setWindowTitle(QCoreApplication::translate("albumWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("albumWindow", "Album Name :", nullptr));
        label_2->setText(QCoreApplication::translate("albumWindow", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("albumWindow", "Edit Song ", nullptr));
        pushButton_3->setText(QCoreApplication::translate("albumWindow", "Delete Song", nullptr));
        pushButton_4->setText(QCoreApplication::translate("albumWindow", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("albumWindow", "Search:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("albumWindow", "All", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("albumWindow", "Pop", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("albumWindow", "Rock", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("albumWindow", "Rap", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("albumWindow", "Hip Hop", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("albumWindow", "Jazz", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("albumWindow", "Classical", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("albumWindow", "Metal", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("albumWindow", "Electronic", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("albumWindow", "Country", nullptr));

        label_4->setText(QCoreApplication::translate("albumWindow", "Filter by gener", nullptr));
        label_5->setText(QCoreApplication::translate("albumWindow", "Filter by year", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("albumWindow", "All", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("albumWindow", "2020", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("albumWindow", "2021", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("albumWindow", "2022", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("albumWindow", "2023", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("albumWindow", "2024", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("albumWindow", "2025", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("albumWindow", "2026", nullptr));

    } // retranslateUi

};

namespace Ui {
    class albumWindow: public Ui_albumWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMWINDOW_H

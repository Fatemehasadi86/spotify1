/********************************************************************************
** Form generated from reading UI file 'editsongwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSONGWINDOW_H
#define UI_EDITSONGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editsongWindow
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox_2;

    void setupUi(QWidget *editsongWindow)
    {
        if (editsongWindow->objectName().isEmpty())
            editsongWindow->setObjectName("editsongWindow");
        editsongWindow->resize(620, 530);
        editsongWindow->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
"}"));
        lineEdit = new QLineEdit(editsongWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(210, 70, 113, 28));
        lineEdit_3 = new QLineEdit(editsongWindow);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(210, 220, 113, 28));
        comboBox = new QComboBox(editsongWindow);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(190, 300, 151, 28));
        pushButton = new QPushButton(editsongWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 380, 161, 31));
        label = new QLabel(editsongWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 70, 63, 20));
        label_2 = new QLabel(editsongWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 150, 63, 20));
        label_3 = new QLabel(editsongWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 230, 101, 21));
        label_4 = new QLabel(editsongWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 300, 63, 20));
        comboBox_2 = new QComboBox(editsongWindow);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(210, 140, 141, 31));

        retranslateUi(editsongWindow);

        QMetaObject::connectSlotsByName(editsongWindow);
    } // setupUi

    void retranslateUi(QWidget *editsongWindow)
    {
        editsongWindow->setWindowTitle(QCoreApplication::translate("editsongWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("editsongWindow", "Save", nullptr));
        label->setText(QCoreApplication::translate("editsongWindow", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("editsongWindow", "Genre", nullptr));
        label_3->setText(QCoreApplication::translate("editsongWindow", "Release Year", nullptr));
        label_4->setText(QCoreApplication::translate("editsongWindow", "Album", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("editsongWindow", "Pop", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("editsongWindow", "Rock", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("editsongWindow", "Rap", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("editsongWindow", "Hip Hop", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("editsongWindow", "Jazz", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("editsongWindow", "Classical", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("editsongWindow", "Metal", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("editsongWindow", "Country", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("editsongWindow", "Electronic", nullptr));

    } // retranslateUi

};

namespace Ui {
    class editsongWindow: public Ui_editsongWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSONGWINDOW_H

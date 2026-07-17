/********************************************************************************
** Form generated from reading UI file 'addsongwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSONGWINDOW_H
#define UI_ADDSONGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addSongWindow
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QComboBox *comboBox;
    QLabel *label_6;

    void setupUi(QWidget *addSongWindow)
    {
        if (addSongWindow->objectName().isEmpty())
            addSongWindow->setObjectName("addSongWindow");
        addSongWindow->resize(673, 545);
        addSongWindow->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        label = new QLabel(addSongWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 30, 121, 51));
        lineEdit = new QLineEdit(addSongWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(250, 40, 113, 28));
        label_2 = new QLabel(addSongWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 100, 63, 20));
        lineEdit_2 = new QLineEdit(addSongWindow);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(250, 100, 113, 28));
        label_3 = new QLabel(addSongWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 160, 101, 21));
        lineEdit_3 = new QLineEdit(addSongWindow);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(250, 160, 113, 28));
        label_4 = new QLabel(addSongWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 280, 91, 21));
        label_5 = new QLabel(addSongWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(110, 350, 63, 20));
        pushButton = new QPushButton(addSongWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 280, 111, 31));
        pushButton_2 = new QPushButton(addSongWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(260, 340, 121, 41));
        pushButton_3 = new QPushButton(addSongWindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(100, 420, 90, 29));
        pushButton_4 = new QPushButton(addSongWindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(260, 420, 90, 29));
        comboBox = new QComboBox(addSongWindow);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(220, 220, 201, 31));
        label_6 = new QLabel(addSongWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 220, 101, 31));

        retranslateUi(addSongWindow);

        QMetaObject::connectSlotsByName(addSongWindow);
    } // setupUi

    void retranslateUi(QWidget *addSongWindow)
    {
        addSongWindow->setWindowTitle(QCoreApplication::translate("addSongWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("addSongWindow", "Song Name", nullptr));
        label_2->setText(QCoreApplication::translate("addSongWindow", "Genre", nullptr));
        label_3->setText(QCoreApplication::translate("addSongWindow", "Release Year", nullptr));
        label_4->setText(QCoreApplication::translate("addSongWindow", "Audio File", nullptr));
        label_5->setText(QCoreApplication::translate("addSongWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("addSongWindow", "Choose File", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addSongWindow", "Choose Image", nullptr));
        pushButton_3->setText(QCoreApplication::translate("addSongWindow", "Save", nullptr));
        pushButton_4->setText(QCoreApplication::translate("addSongWindow", "Cancel", nullptr));
        label_6->setText(QCoreApplication::translate("addSongWindow", "Album Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addSongWindow: public Ui_addSongWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSONGWINDOW_H

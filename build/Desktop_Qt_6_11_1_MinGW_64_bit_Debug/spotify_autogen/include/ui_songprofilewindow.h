/********************************************************************************
** Form generated from reading UI file 'songprofilewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONGPROFILEWINDOW_H
#define UI_SONGPROFILEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SongProfileWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *SongProfileWindow)
    {
        if (SongProfileWindow->objectName().isEmpty())
            SongProfileWindow->setObjectName("SongProfileWindow");
        SongProfileWindow->resize(453, 600);
        label = new QLabel(SongProfileWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 60, 251, 211));
        label_2 = new QLabel(SongProfileWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 310, 63, 20));
        label_3 = new QLabel(SongProfileWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(220, 370, 63, 20));
        label_4 = new QLabel(SongProfileWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(210, 430, 63, 20));
        pushButton = new QPushButton(SongProfileWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 500, 90, 29));
        label_5 = new QLabel(SongProfileWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(110, 310, 63, 20));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:12pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));
        label_6 = new QLabel(SongProfileWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(110, 370, 63, 20));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:12pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));
        label_7 = new QLabel(SongProfileWindow);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(110, 430, 63, 20));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:12pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));

        retranslateUi(SongProfileWindow);

        QMetaObject::connectSlotsByName(SongProfileWindow);
    } // setupUi

    void retranslateUi(QWidget *SongProfileWindow)
    {
        SongProfileWindow->setWindowTitle(QCoreApplication::translate("SongProfileWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("SongProfileWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("SongProfileWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("SongProfileWindow", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("SongProfileWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("SongProfileWindow", "Close", nullptr));
        label_5->setText(QCoreApplication::translate("SongProfileWindow", "Name :", nullptr));
        label_6->setText(QCoreApplication::translate("SongProfileWindow", "Genre:", nullptr));
        label_7->setText(QCoreApplication::translate("SongProfileWindow", "Year:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SongProfileWindow: public Ui_SongProfileWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONGPROFILEWINDOW_H

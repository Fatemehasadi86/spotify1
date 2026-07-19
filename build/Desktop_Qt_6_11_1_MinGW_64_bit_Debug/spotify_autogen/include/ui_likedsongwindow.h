/********************************************************************************
** Form generated from reading UI file 'likedsongwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIKEDSONGWINDOW_H
#define UI_LIKEDSONGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LikedSongWindow
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QWidget *LikedSongWindow)
    {
        if (LikedSongWindow->objectName().isEmpty())
            LikedSongWindow->setObjectName("LikedSongWindow");
        LikedSongWindow->resize(685, 603);
        LikedSongWindow->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        listWidget = new QListWidget(LikedSongWindow);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(160, 160, 271, 281));
        pushButton = new QPushButton(LikedSongWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 490, 90, 29));
        lineEdit = new QLineEdit(LikedSongWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(130, 80, 371, 31));
        label = new QLabel(LikedSongWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 80, 63, 20));

        retranslateUi(LikedSongWindow);

        QMetaObject::connectSlotsByName(LikedSongWindow);
    } // setupUi

    void retranslateUi(QWidget *LikedSongWindow)
    {
        LikedSongWindow->setWindowTitle(QCoreApplication::translate("LikedSongWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("LikedSongWindow", "Back", nullptr));
        label->setText(QCoreApplication::translate("LikedSongWindow", "Search:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LikedSongWindow: public Ui_LikedSongWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIKEDSONGWINDOW_H

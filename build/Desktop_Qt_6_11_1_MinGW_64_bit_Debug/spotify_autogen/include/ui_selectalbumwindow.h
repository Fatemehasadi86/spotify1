/********************************************************************************
** Form generated from reading UI file 'selectalbumwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTALBUMWINDOW_H
#define UI_SELECTALBUMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectAlbumWindow
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *selectAlbumWindow)
    {
        if (selectAlbumWindow->objectName().isEmpty())
            selectAlbumWindow->setObjectName("selectAlbumWindow");
        selectAlbumWindow->resize(619, 456);
        selectAlbumWindow->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        listWidget = new QListWidget(selectAlbumWindow);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(155, 70, 271, 301));
        pushButton = new QPushButton(selectAlbumWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 400, 90, 29));

        retranslateUi(selectAlbumWindow);

        QMetaObject::connectSlotsByName(selectAlbumWindow);
    } // setupUi

    void retranslateUi(QWidget *selectAlbumWindow)
    {
        selectAlbumWindow->setWindowTitle(QCoreApplication::translate("selectAlbumWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("selectAlbumWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectAlbumWindow: public Ui_selectAlbumWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTALBUMWINDOW_H

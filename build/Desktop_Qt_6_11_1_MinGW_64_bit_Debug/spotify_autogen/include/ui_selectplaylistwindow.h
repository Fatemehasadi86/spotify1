/********************************************************************************
** Form generated from reading UI file 'selectplaylistwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTPLAYLISTWINDOW_H
#define UI_SELECTPLAYLISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectPlaylistWindow
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QWidget *selectPlaylistWindow)
    {
        if (selectPlaylistWindow->objectName().isEmpty())
            selectPlaylistWindow->setObjectName("selectPlaylistWindow");
        selectPlaylistWindow->resize(674, 531);
        selectPlaylistWindow->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        listWidget = new QListWidget(selectPlaylistWindow);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(190, 60, 251, 291));
        pushButton = new QPushButton(selectPlaylistWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 400, 101, 41));

        retranslateUi(selectPlaylistWindow);

        QMetaObject::connectSlotsByName(selectPlaylistWindow);
    } // setupUi

    void retranslateUi(QWidget *selectPlaylistWindow)
    {
        selectPlaylistWindow->setWindowTitle(QCoreApplication::translate("selectPlaylistWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("selectPlaylistWindow", " Edit playlist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectPlaylistWindow: public Ui_selectPlaylistWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTPLAYLISTWINDOW_H

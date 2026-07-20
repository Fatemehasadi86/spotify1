/********************************************************************************
** Form generated from reading UI file 'artistwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARTISTWINDOW_H
#define UI_ARTISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_artistWindow
{
public:
    QFrame *frame;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QListWidget *listWidgetAlbums;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QWidget *artistWindow)
    {
        if (artistWindow->objectName().isEmpty())
            artistWindow->setObjectName("artistWindow");
        artistWindow->resize(875, 678);
        artistWindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"    background-color:#121212;\n"
"}"));
        frame = new QFrame(artistWindow);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 30, 831, 70));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"    background-color:#181818;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame->setLineWidth(1);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 50, 50));
        label->setMinimumSize(QSize(50, 50));
        label->setMaximumSize(QSize(50, 50));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    border-radius:25px;\n"
"    border:2px solid #1DB954;\n"
"}"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/124.png")));
        label->setScaledContents(true);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 19, 157, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:18pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(279, 20, 161, 40));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:18pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));
        label_4 = new QLabel(artistWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 110, 211, 51));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    color:qlineargradient(\n"
"        x1:0,y1:0,x2:1,y2:0,\n"
"        stop:0 #1DB954,\n"
"        stop:0.5 #5CFF9D,\n"
"        stop:1 #1DB954);\n"
"    font-size:10pt;\n"
"    font-weight:900;\n"
"    font-family:\"Segoe UI\";\n"
"}"));
        pushButton = new QPushButton(artistWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 600, 131, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0,\n"
"        x2:1, y2:1,\n"
"        stop:0 #1DB954,\n"
"        stop:1 #18a84b);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 12px;\n"
"    font-size: 11pt;\n"
"    font-weight: bold;\n"
"    padding: 5px 12px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background: #28e46a;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"    background: #12853d;\n"
"}"));
        pushButton_2 = new QPushButton(artistWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 600, 131, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0,\n"
"        x2:1, y2:1,\n"
"        stop:0 #1DB954,\n"
"        stop:1 #18a84b);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 12px;\n"
"    font-size: 11pt;\n"
"    font-weight: bold;\n"
"    padding: 5px 12px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background: #28e46a;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"    background: #12853d;\n"
"}"));
        pushButton_3 = new QPushButton(artistWindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(300, 600, 151, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0,\n"
"        x2:1, y2:1,\n"
"        stop:0 #1DB954,\n"
"        stop:1 #18a84b);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 12px;\n"
"    font-size: 11pt;\n"
"    font-weight: bold;\n"
"    padding: 5px 12px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background: #28e46a;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"    background: #12853d;\n"
"}"));
        pushButton_4 = new QPushButton(artistWindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(460, 600, 161, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0,\n"
"        x2:1, y2:1,\n"
"        stop:0 #1DB954,\n"
"        stop:1 #18a84b);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 12px;\n"
"    font-size: 11pt;\n"
"    font-weight: bold;\n"
"    padding: 5px 12px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background: #28e46a;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"    background: #12853d;\n"
"}"));
        pushButton_5 = new QPushButton(artistWindow);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(750, 600, 101, 51));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color: #E53935;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 12px;\n"
"    font-size: 11pt;\n"
"    font-weight: bold;\n"
"    padding: 5px 12px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background-color: #F44336;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"    background-color: #C62828;\n"
"}"));
        listWidgetAlbums = new QListWidget(artistWindow);
        listWidgetAlbums->setObjectName("listWidgetAlbums");
        listWidgetAlbums->setGeometry(QRect(40, 180, 551, 381));
        listWidgetAlbums->setStyleSheet(QString::fromUtf8("QListWidget{\n"
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
        pushButton_6 = new QPushButton(artistWindow);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(520, 110, 161, 51));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0,\n"
"        x2:1, y2:1,\n"
"        stop:0 #1DB954,\n"
"        stop:1 #18a84b);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 12px;\n"
"    font-size: 11pt;\n"
"    font-weight: bold;\n"
"    padding: 5px 12px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background: #28e46a;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"    background: #12853d;\n"
"}"));
        pushButton_7 = new QPushButton(artistWindow);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(700, 110, 161, 51));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0,\n"
"        x2:1, y2:1,\n"
"        stop:0 #1DB954,\n"
"        stop:1 #18a84b);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 12px;\n"
"    font-size: 11pt;\n"
"    font-weight: bold;\n"
"    padding: 5px 12px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"    background: #28e46a;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"    background: #12853d;\n"
"}"));

        retranslateUi(artistWindow);

        QMetaObject::connectSlotsByName(artistWindow);
    } // setupUi

    void retranslateUi(QWidget *artistWindow)
    {
        artistWindow->setWindowTitle(QCoreApplication::translate("artistWindow", "Form", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("artistWindow", "Welcome", nullptr));
        label_3->setText(QCoreApplication::translate("artistWindow", ".", nullptr));
        label_4->setText(QCoreApplication::translate("artistWindow", "My Albums", nullptr));
        pushButton->setText(QCoreApplication::translate("artistWindow", "Add Album", nullptr));
        pushButton_2->setText(QCoreApplication::translate("artistWindow", "Add Song", nullptr));
        pushButton_3->setText(QCoreApplication::translate("artistWindow", "Edit Album", nullptr));
        pushButton_4->setText(QCoreApplication::translate("artistWindow", "Delete Album", nullptr));
        pushButton_5->setText(QCoreApplication::translate("artistWindow", "Logout", nullptr));
        pushButton_6->setText(QCoreApplication::translate("artistWindow", "Edit Account", nullptr));
        pushButton_7->setText(QCoreApplication::translate("artistWindow", "Delete Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class artistWindow: public Ui_artistWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARTISTWINDOW_H

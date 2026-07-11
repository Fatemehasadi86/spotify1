#include "mainwindow.h"
#include <QApplication>

#include "registerwindow.h"
#include "loginwindow.h"
#include <fstream>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow ma;
    loginwindow l;
    registerWindow r;
    l.show();
    // std::ofstream file("accounts.txt", std::ios::trunc);
    // file.close();
    return QApplication::exec();
}
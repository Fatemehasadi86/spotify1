#include <QApplication>
#include "loginwindow.h"
#include <fstream>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginwindow l;
    l.show();
    // std::ofstream file("accounts.txt", std::ios::trunc);
    // file.close();
    return a.exec();
}
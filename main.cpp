#include <QApplication>
#include "loginwindow.h"
#include <fstream>
#include<QFile>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginwindow l;
    l.show();


    return a.exec();
}
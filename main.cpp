#include "mainwindow.h"
#include <QApplication>
#include "artistwindow.h"
#include "registerwindow.h"
#include "loginwindow.h"
#include <fstream>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow ma;
    loginwindow l;
    registerWindow r;
    artistWindow ar(0);
    ar.show();
    // std::ofstream file("songs.txt", std::ios::trunc);
    // file.close();
    return QApplication::exec();
}
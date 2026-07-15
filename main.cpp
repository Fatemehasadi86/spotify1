#include "mainwindow.h"
#include <QApplication>
#include "artistwindow.h"
#include "registerwindow.h"
#include "loginwindow.h"
#include "listenerwindow.h"
#include <fstream>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow ma;
    loginwindow l;
    registerWindow r;
    artistWindow ar(0);
    listenerWindow l2(0);
    l.show();
    // std::ofstream file("playlists.txt", std::ios::trunc);
    // file.close();
    return QApplication::exec();
}
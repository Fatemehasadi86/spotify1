#ifndef SELECTPLAYLISTFORSONGWINDOW_H
#define SELECTPLAYLISTFORSONGWINDOW_H

#include <QWidget>

namespace Ui {
class selectPlaylistforsongwindow;
}

class selectPlaylistforsongwindow : public QWidget
{
    Q_OBJECT

public:
    explicit selectPlaylistforsongwindow(int listenerId,int songId,QWidget *parent = nullptr);
    ~selectPlaylistforsongwindow();
    void loadPlaylist();

private slots:
    void on_pushButton_clicked();

private:
    Ui::selectPlaylistforsongwindow *ui;
    int listenerId;
    int songId;

};

#endif // SELECTPLAYLISTFORSONGWINDOW_H

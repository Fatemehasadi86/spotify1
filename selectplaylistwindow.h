#ifndef SELECTPLAYLISTWINDOW_H
#define SELECTPLAYLISTWINDOW_H

#include <QWidget>

namespace Ui {
class selectPlaylistWindow;
}

class selectPlaylistWindow : public QWidget
{
    Q_OBJECT

public:
    explicit selectPlaylistWindow(int listenerId, QWidget *parent = nullptr);
    ~selectPlaylistWindow();

private slots:
    void on_pushButton_clicked();
    void loadPlaylists();

private:
    Ui::selectPlaylistWindow *ui;
    int listenerId;
signals:
    void playlistEdited();

};

#endif // SELECTPLAYLISTWINDOW_H

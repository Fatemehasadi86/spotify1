#ifndef EDITPLAYLISTWINDOW_H
#define EDITPLAYLISTWINDOW_H

#include <QWidget>

namespace Ui {
class editPlaylistWindow;
}

class editPlaylistWindow : public QWidget
{
    Q_OBJECT

public:
    explicit editPlaylistWindow(int playlistId,QWidget *parent = nullptr);
    ~editPlaylistWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::editPlaylistWindow *ui;
    int playlistId;
signals:
    void playlistEdited();
};

#endif // EDITPLAYLISTWINDOW_H

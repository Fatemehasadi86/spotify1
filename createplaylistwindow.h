#ifndef CREATEPLAYLISTWINDOW_H
#define CREATEPLAYLISTWINDOW_H

#include <QWidget>

namespace Ui {
class createPlaylistWindow;
}

class createPlaylistWindow : public QWidget
{
    Q_OBJECT

public:
    explicit createPlaylistWindow(int listenerId,QWidget *parent = nullptr);
    ~createPlaylistWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::createPlaylistWindow *ui;
    int listenerId;
signals:
    void playlistcreated();
};

#endif // CREATEPLAYLISTWINDOW_H

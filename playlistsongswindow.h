#ifndef PLAYLISTSONGSWINDOW_H
#define PLAYLISTSONGSWINDOW_H

#include <QWidget>
#include <QListWidgetItem>

namespace Ui {
class PlaylistSongsWindow;
}

class PlaylistSongsWindow : public QWidget
{
    Q_OBJECT

public:
    explicit PlaylistSongsWindow(int playlistId,QWidget *parent = nullptr);
    ~PlaylistSongsWindow();
    void loadSongs();

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_2_clicked();

private:
    Ui::PlaylistSongsWindow *ui;
    int playlistId;
    int selectedSongId=-1;
    QString searchText;

};

#endif // PLAYLISTSONGSWINDOW_H

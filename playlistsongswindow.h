#ifndef PLAYLISTSONGSWINDOW_H
#define PLAYLISTSONGSWINDOW_H

#include <QWidget>
#include <QListWidgetItem>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QUrl>

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

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_comboBox_3_currentTextChanged(const QString &arg1);

    void on_comboBox_2_currentTextChanged(const QString &arg1);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::PlaylistSongsWindow *ui;
    int playlistId;
    int selectedSongId=-1;
    int currentIndex=-1;

    QString searchText;
    QString sortText="Default";
    QString filtergenre="All";
    QString yearfilter="All";
    QMediaPlayer *player;
    QAudioOutput *audioOutput;

};

#endif // PLAYLISTSONGSWINDOW_H

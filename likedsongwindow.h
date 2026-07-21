#ifndef LIKEDSONGWINDOW_H
#define LIKEDSONGWINDOW_H

#include <QWidget>
#include <QListWidgetItem>

namespace Ui {
class LikedSongWindow;
}

class LikedSongWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LikedSongWindow(int listenerId,QWidget *parent = nullptr);
    ~LikedSongWindow();
    void loadSongs();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::LikedSongWindow *ui;
    int listenerId;
    QString searchText;
    int selectedSongId =-1;
};

#endif // LIKEDSONGWINDOW_H

#ifndef EXPLOREMUSICWINDOW_H
#define EXPLOREMUSICWINDOW_H

#include <QWidget>
#include <QListWidgetItem>

namespace Ui {
class exploreMusicwindow;
}

class exploreMusicwindow : public QWidget
{
    Q_OBJECT

public:
    explicit exploreMusicwindow(int listenerId,QWidget *parent = nullptr);
    ~exploreMusicwindow();
    void loadArtists();

private slots:

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_2_clicked();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::exploreMusicwindow *ui;
    int selectedArtistId=-1;
    void loadAlbums();
    int listenerId;

};

#endif // EXPLOREMUSICWINDOW_H

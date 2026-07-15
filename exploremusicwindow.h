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
    explicit exploreMusicwindow(QWidget *parent = nullptr);
    ~exploreMusicwindow();
    void loadArtists();

private slots:

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_pushButton_2_clicked();

private:
    Ui::exploreMusicwindow *ui;
    int selectedArtistId=-1;
    void loadAlbums();

};

#endif // EXPLOREMUSICWINDOW_H

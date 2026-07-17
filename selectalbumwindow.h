#ifndef SELECTALBUMWINDOW_H
#define SELECTALBUMWINDOW_H

#include <QDialog>

namespace Ui {
class selectAlbumWindow;
}

class selectAlbumWindow : public QDialog
{
    Q_OBJECT

public:
    explicit selectAlbumWindow(int artistId,QWidget *parent = nullptr);
    ~selectAlbumWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::selectAlbumWindow *ui;
    int artistId;
signals:
    void albumsChanged();
};

#endif // SELECTALBUMWINDOW_H

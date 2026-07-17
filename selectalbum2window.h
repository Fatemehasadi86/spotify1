#ifndef SELECTALBUM2WINDOW_H
#define SELECTALBUM2WINDOW_H

#include <QWidget>

namespace Ui {
class selectAlbum2Window;
}

class selectAlbum2Window : public QWidget
{
    Q_OBJECT

public:
    explicit selectAlbum2Window(int artistId,QWidget *parent = nullptr);
    ~selectAlbum2Window();

private slots:
    void on_pushButton_clicked();

private:
    Ui::selectAlbum2Window *ui;
    int artistId;
};

#endif // SELECTALBUM2WINDOW_H

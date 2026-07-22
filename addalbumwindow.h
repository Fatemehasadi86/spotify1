#ifndef ADDALBUMWINDOW_H
#define ADDALBUMWINDOW_H

#include <QWidget>

namespace Ui {
class AddAlbumWindow;
}

class AddAlbumWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AddAlbumWindow(int artistId,QWidget *parent = nullptr);
    ~AddAlbumWindow();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddAlbumWindow *ui;
    int artistId;
    QString image;
signals:
    void albumAdded();
};

#endif // ADDALBUMWINDOW_H

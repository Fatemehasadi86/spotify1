#ifndef EDITALBUMWINDOW_H
#define EDITALBUMWINDOW_H

#include <QWidget>

namespace Ui {
class editAlbumWindow;
}

class editAlbumWindow : public QWidget
{
    Q_OBJECT

public:
    explicit editAlbumWindow(int albumId,QWidget *parent = nullptr);
    ~editAlbumWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::editAlbumWindow *ui;
    int albumId;
signals:
    void albumEdited();
};

#endif // EDITALBUMWINDOW_H

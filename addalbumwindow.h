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
    explicit AddAlbumWindow(QWidget *parent = nullptr);
    ~AddAlbumWindow();

private:
    Ui::AddAlbumWindow *ui;
};

#endif // ADDALBUMWINDOW_H

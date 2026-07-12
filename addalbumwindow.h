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

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AddAlbumWindow *ui;
signals:
    void albumAdded();
};

#endif // ADDALBUMWINDOW_H

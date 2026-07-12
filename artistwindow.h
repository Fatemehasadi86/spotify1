#ifndef ARTISTWINDOW_H
#define ARTISTWINDOW_H

#include <QWidget>

namespace Ui {
class artistWindow;
}

class artistWindow : public QWidget
{
    Q_OBJECT

public:
    explicit artistWindow(QWidget *parent = nullptr);
    ~artistWindow();
    void loadAlbums();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::artistWindow *ui;
};

#endif // ARTISTWINDOW_H

#ifndef SELECTPLAYLIST2WINDOW_H
#define SELECTPLAYLIST2WINDOW_H

#include <QWidget>

namespace Ui {
class selectplaylist2window;
}

class selectplaylist2window : public QWidget
{
    Q_OBJECT

public:
    explicit selectplaylist2window(int listenerId,QWidget *parent = nullptr);
    ~selectplaylist2window();
    void loadPlaylists();

private:
    Ui::selectplaylist2window *ui;
    int listenerId;
signals:
    void playlistDelete();
private slots:
    void on_pushButton_clicked();
};

#endif // SELECTPLAYLIST2WINDOW_H

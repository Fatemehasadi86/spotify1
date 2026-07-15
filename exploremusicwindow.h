#ifndef EXPLOREMUSICWINDOW_H
#define EXPLOREMUSICWINDOW_H

#include <QWidget>

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

private:
    Ui::exploreMusicwindow *ui;

};

#endif // EXPLOREMUSICWINDOW_H

#ifndef EDITACCOUNTWINDOW_H
#define EDITACCOUNTWINDOW_H

#include <QWidget>

namespace Ui {
class EditAccountwindow;
}

class EditAccountwindow : public QWidget
{
    Q_OBJECT

public:
    explicit EditAccountwindow(int accountId,bool isArtist,QWidget *parent = nullptr);
    ~EditAccountwindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::EditAccountwindow *ui;
    int accountId;
    bool isArtist;
};

#endif // EDITACCOUNTWINDOW_H

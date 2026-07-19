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
    explicit EditAccountwindow(int accountId,QWidget *parent = nullptr);
    ~EditAccountwindow();

private:
    Ui::EditAccountwindow *ui;
};

#endif // EDITACCOUNTWINDOW_H

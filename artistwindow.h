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

private:
    Ui::artistWindow *ui;
};

#endif // ARTISTWINDOW_H

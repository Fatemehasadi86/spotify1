#ifndef ALBUMWINDOW_H
#define ALBUMWINDOW_H

#include <QWidget>

namespace Ui {
class albumWindow;
}

class albumWindow : public QWidget
{
    Q_OBJECT

public:
    explicit albumWindow(int albumId,int artistId, QWidget *parent = nullptr);
    ~albumWindow();
    void loadSong();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_textChanged(const QString &text);

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_comboBox_2_currentTextChanged(const QString &arg1);

    void on_comboBox_3_currentTextChanged(const QString &arg1);

private:
    Ui::albumWindow *ui;
    int albumId;
    int artistId;
    QString searchText;
    QString genreFilter = "All";
    QString yearFilter = "All";
    QString sortType= "Default";
};

#endif // ALBUMWINDOW_H

#ifndef INIT_GAME_H
#define INIT_GAME_H

#include <QWidget>

namespace Ui {
class init_game;
}

class init_game : public QWidget
{
    Q_OBJECT

public:
    explicit init_game(QWidget *parent = nullptr);
    ~init_game();

private slots:
    void on_back_btn_clicked();

    void on_next_btn_clicked();

private:
    Ui::init_game *ui;
};

#endif // INIT_GAME_H

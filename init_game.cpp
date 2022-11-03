#include "init_game.h"
#include "ui_init_game.h"

init_game::init_game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::init_game)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("D:\\program\\cpp\\qt\\one_card_ui\\res\\poker.png"));
    ui->player_icon->setPixmap(QPixmap("D:\\program\\cpp\\qt\\one_card_ui\\res\\player.png"));
    ui->deck_icon->setPixmap(QPixmap("D:\\program\\cpp\\qt\\one_card_ui\\res\\deck.png"));
    ui->init_card_icon->setPixmap(QPixmap("D:\\program\\cpp\\qt\\one_card_ui\\res\\init_no.png"));
    ui->round_icon->setPixmap(QPixmap("D:\\program\\cpp\\qt\\one_card_ui\\res\\round.png"));
}

init_game::~init_game()
{
    delete ui;
}

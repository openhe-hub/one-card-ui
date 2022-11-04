#include "init_game.h"
#include "ui_init_game.h"
#include "mainwindow.h"
#include "QtWidgets/QMessageBox"

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

void init_game::on_back_btn_clicked()
{
    MainWindow *main=new MainWindow;
    main->show();
    close();
}


void init_game::on_next_btn_clicked()
{
    int player_num=ui->player_num_editor->text().toInt();
    int deck_num=ui->deck_num_editor->text().toInt();
    int init_card_num=ui->init_card_num_editor->text().toInt();
    int round_num=ui->round_num_editor->text().toInt();
    bool is_auto=ui->auto_check_btn->isChecked();
    bool is_open_logger=ui->log_check_btn->isChecked();

    QString info;
    info.append("\nplayer_num = ").append(!player_num?"4":QString::number(player_num));
    info.append("\ndeck_num = ").append(!deck_num?"2":QString::number(deck_num));
    info.append("\ninit_card_num = ").append(!init_card_num?"5":QString::number(init_card_num));
    info.append("\nround_num = ").append(!round_num?"1":QString::number(round_num));
    info.append("\nauto = ").append(is_auto?"Yes":"No");
    info.append("\nlogger = ").append(is_open_logger?"Yes":"No");

    QString title="New Game ?";

    QMessageBox msgBox;
    msgBox.setStyleSheet("QLabel{"
                            "min-width:150px;"
                            "min-height:100px; "
                            "font-size:16px;"
                            "font:consolas"
                          "}");
    msgBox.setText(title);
    msgBox.setInformativeText(info);
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Ok);
    msgBox.setWindowTitle("One Card Game");
    msgBox.setWindowIcon(QIcon("D:\\program\\cpp\\qt\\one_card_ui\\res\\poker.png"));
    msgBox.setIcon(QMessageBox::Information);
    int ret = msgBox.exec();
    if(ret == QMessageBox::Ok){
        //...
    }else if(ret==QMessageBox::No){
        //...
    }
}


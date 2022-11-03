#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("D:\\program\\cpp\\qt\\one_card_ui\\res\\poker.png"));
    ui->game_icon->setPixmap(QPixmap("D:\\program\\cpp\\qt\\one_card_ui\\res\\games.png"));
    ui->intro_icon->setPixmap(QPixmap("D:\\program\\cpp\\qt\\one_card_ui\\res\\intro.png"));
    ui->setting_icon->setPixmap(QPixmap("D:\\program\\cpp\\qt\\one_card_ui\\res\\setting.png"));
    ui->about_icon->setPixmap(QPixmap("D:\\program\\cpp\\qt\\one_card_ui\\res\\about.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


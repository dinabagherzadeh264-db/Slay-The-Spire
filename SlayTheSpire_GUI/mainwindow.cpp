#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_cardButton_1_clicked()
{
    ui->cardButton_1->hide();
}

void MainWindow::on_cardButton_2_clicked()
{
    ui->cardButton_2->hide();
}

void MainWindow::on_cardButton_3_clicked()
{
    ui->cardButton_3->hide();
}

void MainWindow::on_cardButton_4_clicked()
{
    ui->cardButton_4->hide();
}

void MainWindow::on_cardButton_5_clicked()
{
    ui->cardButton_5->hide();
}

void MainWindow::on_EndTurnButton_clicked()
{
    ui->cardButton_1->show();
    ui->cardButton_2->show();
    ui->cardButton_3->show();
    ui->cardButton_4->show();
    ui->cardButton_5->show();
}


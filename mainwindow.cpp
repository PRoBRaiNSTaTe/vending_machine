#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    money_=0;
    ui->setupUi(this);
    setControl();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setControl()
{
    ui->lcdNumber->display(money_);
    ui->Coffee->setEnabled(money_>=100);
    ui->Tea->setEnabled(money_>=150);
    ui->Cola->setEnabled(money_>=200);
}
void MainWindow::on__500_clicked()
{
    money_+=500;
    setControl();
}

void MainWindow::on__100_clicked()
{
    money_+=100;
    setControl();
}

void MainWindow::on__50_clicked()
{
    money_+=50;
    setControl();
}

void MainWindow::on__10_clicked()
{
    money_+=10;
    setControl();
}

void MainWindow::on_Tea_clicked()
{
    money_-=150;
    setControl();
}

void MainWindow::on_Cola_clicked()
{
    money_-=200;
    setControl();
}

void MainWindow::on_Coffee_clicked()
{
    money_-=100;
    setControl();
}

void MainWindow::on_CoinChange_clicked()
{
    coin500_ = money_/500;
    money_ -= coin500_ * 500;
    coin100_ = money_/100;
    money_ -= coin100_ * 100;
    coin50_ = money_/50;
    money_ -= coin50_ * 50;
    coin10_ = money_/10;
    money_ = 0;
    setControl();
    QMessageBox::information(this,"Return",QString("500: %1, 100: %2, 50: %3, 10: %4").arg(coin500_).arg(coin100_).arg(coin50_).arg(coin10_));
}

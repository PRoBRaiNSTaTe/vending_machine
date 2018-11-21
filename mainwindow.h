#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int money_;
    int coin500_, coin100_, coin50_, coin10_;
    void setControl();

private slots:
    void on__500_clicked();

    void on__100_clicked();

    void on__50_clicked();

    void on__10_clicked();

    void on_Tea_clicked();

    void on_Cola_clicked();

    void on_Coffee_clicked();

    void on_CoinChange_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

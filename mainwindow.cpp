#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>


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

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("Hello World");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label_2->setText("Goodbye Cruel World");
}

void MainWindow::on_pushButton_Run_clicked()
{
    ui->label_2->setText("Run");
}

void MainWindow::on_pushButton_Step_clicked()
{
    ui->label_2->setText("Step Cycle");
}

void MainWindow::on_pushButton_Fetch_clicked()
{
    ui->label_2->setText("Fetch Cycle");
}

void MainWindow::on_pushButton_Execute_clicked()
{
    ui->label_2->setText("Execute Cycle");
}

void MainWindow::on_pushButton_Mode_clicked()
{
    ui->label_2->setText(ui->comboBox_Mode->currentText());
//    QMessageBox::information(this, "Item Selection",
//                                 ui->comboBox_Mode->currentText());
}


//void MainWindow::on_pushButton_3_clicked()
//{
//    ui->lcdNumber->display(2);
//}

void MainWindow::on_horizontalSlider_Clock_moved()
{
    ui->lcdNumber->display(2);
}

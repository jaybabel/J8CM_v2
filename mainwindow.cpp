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
    ui->radioButton_Fetch->setCheckable(true);
    ui->radioButton_Execute->setChecked(false);
    ui->radioButton_Fetch->setChecked(true);
//    ui->radioButton_Fetch->setCheckable(false);
    //set PSW bit 7 to zero after the fetch cycle
    ui->radioButton_PSW7->setChecked(true);
}

void MainWindow::on_pushButton_Execute_clicked()
{
    ui->label_2->setText("Execute Cycle");
    ui->radioButton_Execute->setCheckable(true);
    ui->radioButton_Fetch->setChecked(false);
    ui->radioButton_Execute->setChecked(true);
//    ui->radioButton_Execute->setCheckable(false);
    //set PSW bit 7 to one after the execute cycle
    ui->radioButton_PSW7->setChecked(false);
}

void MainWindow::on_pushButton_Mode_clicked()
{
    ui->label_2->setText(ui->comboBox_Mode->currentText());
    //QMessageBox::information(this, "Item Selection", ui->comboBox_Mode->currentText());
}

void MainWindow::on_horizontalSlider_Clock_sliderMoved()
{
    ui->lcdNumber->display(ui->horizontalSlider_Clock->sliderPosition());
}

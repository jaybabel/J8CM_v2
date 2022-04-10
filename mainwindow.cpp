#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget_StackView->setHorizontalHeaderItem(0, new QTableWidgetItem("Address"));
    ui->tableWidget_StackView->setHorizontalHeaderItem(1, new QTableWidgetItem("Contents"));
    ui->tableWidget_StackView->setItem(0, 0, new QTableWidgetItem("11111111"));
    ui->tableWidget_StackView->setItem(0, 1, new QTableWidgetItem("00100000"));
    ui->tableWidget_StackView->setItem(1, 0, new QTableWidgetItem("11111110"));
    ui->tableWidget_StackView->setItem(1, 1, new QTableWidgetItem("00001001"));
    ui->tableWidget_StackView->setItem(2, 0, new QTableWidgetItem("11111101"));
    ui->tableWidget_StackView->setItem(2, 1, new QTableWidgetItem("00001011"));
    ui->tableWidget_StackView->setItem(3, 0, new QTableWidgetItem("11111100"));
    ui->tableWidget_StackView->setItem(3, 1, new QTableWidgetItem("00000000"));
    ui->tableWidget_StackView->setItem(4, 0, new QTableWidgetItem("11111011"));
    ui->tableWidget_StackView->setItem(4, 1, new QTableWidgetItem("00000000"));
    ui->tableWidget_StackView->setItem(5, 0, new QTableWidgetItem("11111010"));
    ui->tableWidget_StackView->setItem(5, 1, new QTableWidgetItem("00000000"));
    ui->tableWidget_StackView->setItem(6, 0, new QTableWidgetItem("11111001"));
    ui->tableWidget_StackView->setItem(6, 1, new QTableWidgetItem("00000000"));
//    QTableWidgetItem *header2 = new QTableWidgetItem();
//    header2->setText("Value");
//    tableWidget_StackView->setHorizontalHeaderItem(1,header2);
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

//void MainWindow::
// ui->tableWidget_StackView->setHorizontalHeaderItem(1, "Address")

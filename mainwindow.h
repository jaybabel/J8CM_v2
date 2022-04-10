#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Run_clicked();
    void on_pushButton_Step_clicked();
    void on_pushButton_Fetch_clicked();
    void on_pushButton_Execute_clicked();

   // void on_comboBox_Mode_;
    void on_pushButton_Mode_clicked();

    // slider for clock speed
    void on_horizontalSlider_Clock_sliderMoved();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

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
//appmenu-gtk-module}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("Hello World");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText("Ola mundo");
}

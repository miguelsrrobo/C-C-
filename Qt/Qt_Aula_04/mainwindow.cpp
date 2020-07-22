#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
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
    QMessageBox::about(this,"Se fudeu otario","Teu CU esta na rodada otario, se fudeu!!!!");
}

void MainWindow::on_pushButton_2_clicked()
{
    close();
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::aboutQt(this,"Qt Mensagem");
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::critical(this,"Qt tutorial","<ERROR> not found, after expression no expected");
}

void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox::information(this,"Qt","StandardButton information (QWidget *parent, const QString &title, fond not wall)");
}

void MainWindow::on_pushButton_6_clicked()
{
    QMessageBox::question(this,"Qt-Creator","Question it's StandardButtons(Yes|No)");
}

void MainWindow::on_pushButton_7_clicked()
{
    QMessageBox::warning(this,"hi's ior notebook it's sheat fuck","sori ior note is one cheat");
}

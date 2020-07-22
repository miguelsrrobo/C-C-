#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->addWidget(ui->pushButton_2);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->statusbar->showMessage("Nome: "+ui->text_nome->text()+" | e-mail: "+ui->text_email->text());
}

void MainWindow::on_pushButton_2_clicked()
{
    QString msg = "CFB ola mundo";
    ui->statusbar->showMessage(msg);
    QMessageBox::about(this,"",msg);
}

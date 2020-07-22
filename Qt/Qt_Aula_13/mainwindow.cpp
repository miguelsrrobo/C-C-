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


void MainWindow::on_pushButton_clicked()
{
    QString username=ui->text_nome->text();
    QString senha = ui->text_senha->text();
    QString resultado;

    (username == "miguel" && senha == "1234")? QMessageBox::information(this,"Login","Ok") : QMessageBox::warning(this,"Login","Usuario ou senha incorretos.");
}

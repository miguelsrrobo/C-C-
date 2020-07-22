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

void MainWindow::on_btn_mostrar_clicked()
{
    QString nome = ui->text_nome->text();
    QString fone = ui->text_telefone->text();
    QString mail = ui->text_email->text();

    QMessageBox::information(this,"Qt_inside","Nome: "+nome+"\nTelefone: "+fone+"\nE-mail: "+mail);
}

void MainWindow::on_btn_limpar_clicked()
{
    ui->text_nome->clear();
    ui->text_email->clear();
    ui->text_telefone->clear();

    ui->text_nome->setFocus();
}

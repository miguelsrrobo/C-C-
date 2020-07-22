#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap logo("/home/miguel/Imagens/external-content.duckduckgo.com.png");
    ui->label_2->setPixmap(logo.scaled(390,100,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QPixmap logo("/home/miguel/Imagens/Qt.png");
    ui->label_2->setPixmap(logo.scaled(390,100,Qt::KeepAspectRatio));
}

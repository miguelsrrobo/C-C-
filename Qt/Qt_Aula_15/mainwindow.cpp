#include "mainwindow.h"
#include "ui_mainwindow.h"

QString msg="",m1,m2,m3;

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
    bool cb1, cb2, cb3;

    cb1 = ui->checkBox->isChecked();
    cb2 = ui->checkBox_2->isChecked();
    cb3 = ui->checkBox_3->isChecked();

    msg = "";
    if(cb1){
        msg += " CB1 maraco";
    }
    if(cb2){
        msg += " CB2 maraco";
    }
    if(cb3){
        msg += " CB3 maraco";
    }
    QMessageBox::information(this,"Checboxes",msg);
}

void MainWindow::on_pushButton_2_clicked()
{
    bool vetbo[3];

    vetbo[0] = ui->checkBox->isChecked();
    vetbo[1] = ui->checkBox_2->isChecked();
    vetbo[2] = ui->checkBox_3->isChecked();

    msg = "";
    for (int linha = 0;linha < 3;linha++)
    {
        if(vetbo[linha])
        {
            msg += " CB" + QString::number(linha+1) + " marcado ";
        }
    }
    QMessageBox::information(this,"Checboxes",msg);

}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        m1 = " CB1 marcado ";
    }else {
        m1 = "";
    }
}

void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1)
    {
        m2 = " CB2 marcado ";
    }else {
        m2 = "";
    }
}

void MainWindow::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1)
    {
        m3 = " CB3 marcado ";
    }else {
        m3 = "";
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    msg = m1+m2+m3;
    QMessageBox::information(this,"Checboxes",msg);

}

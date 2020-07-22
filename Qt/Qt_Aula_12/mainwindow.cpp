#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*
     * QPixmap logoCanal(":/imags/imagens/<nome da foto>");
     * ui->lb_logo->setPixmap(logoCanal);
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}


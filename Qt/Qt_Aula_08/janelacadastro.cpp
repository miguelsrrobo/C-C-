#include "janelacadastro.h"
#include "ui_janelacadastro.h"

JanelaCadastro::JanelaCadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JanelaCadastro)
{
    ui->setupUi(this);
}

JanelaCadastro::~JanelaCadastro()
{
    delete ui;
}

#ifndef JANELACADASTRO_H
#define JANELACADASTRO_H

#include <QDialog>

namespace Ui {
class JanelaCadastro;
}

class JanelaCadastro : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaCadastro(QWidget *parent = nullptr);
    ~JanelaCadastro();

private:
    Ui::JanelaCadastro *ui;
};

#endif // JANELACADASTRO_H

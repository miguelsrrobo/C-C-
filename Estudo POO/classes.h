#ifndef CALSSES_H_INCLUDED
#define CLASSES_H_INCLUDED

#include<iostream>

using namespace std;

class Veiculo

{
private:
    string nome;
    int velMax;
    bool ligado;
public:
    unsigned int vel;
    unsigned int tipo;

    Veiculo(int tp);
    int getVelMax();
    void setVelMax(int vm);
};

int Veiculo::getVelMax()
{
    return velMax;
}

void Veiculo::setVelMax(int vm)
{
    velMax = vm;
}

Veiculo::Veiculo(int tp)
{
    tipo = tp;
    if(tipo == 1)
    {
        nome = "Carro";
        setVelMax(200);
    }
    else if(tipo == 2)
    {
        nome = "Aviao";
        setVelMax(800);
    }
    else
    {
        nome = "Navio";
        setVelMax(120);
    }
}

#endif
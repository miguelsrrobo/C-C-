#ifndef CALSSES2_H_INCLUDED
#define CLASSES2_H_INCLUDED

#include <iostream>

using namespace std;

class Veiculo{
private:
    unsigned int tipo;
    unsigned int velMax;
    bool arma;
public:
    int vel;
    int blind;
    int rodas;
    void setTipo(int tp);
    void setVelMax(int vm);
    bool setArma(bool ar);
    void imp();
};

void Veiculo::imp(){
 cout << "Tipo veiculo:............" << tipo << endl;
 cout << "Velocidade Maxima:......." << velMax << endl;
 cout << "Qtde rodas:.............." << rodas << endl;
 cout << "Blindagem:..............." << blind << endl;
 cout << "Armamento:..............." << arma << endl;
 cout << "-------------------------------------" << endl;
}

void Veiculo::setTipo(int tp){
    tipo = tp;
}

void Veiculo::setVelMax(int vm){
    velMax = vm;
}

bool Veiculo::setArma(bool ar){
    arma = ar;
}

class Moto:public Veiculo{
private:
public:
    Moto();
};

Moto::Moto(){
    vel = 0;
    blind = 0;
    rodas = 2;
    setTipo(1);
    setVelMax(180);
    setArma(false);
}

class Carro:public Veiculo{
private:
public:
    Carro();
};

Carro::Carro(){
    vel = 0;
    blind = 0;
    rodas = 4;
    setTipo(1);
    setVelMax(180);
    setArma(false);
}

class Tanque:public Veiculo{
private:
    /* data */
public:
    Tanque(/* args */);
    ~Tanque();
};

Tanque::Tanque(/* args */){
    vel = 0;
    blind = 0;
    rodas = 4;
    setTipo(1);
    setVelMax(200);
    setArma(true);
}

#endif
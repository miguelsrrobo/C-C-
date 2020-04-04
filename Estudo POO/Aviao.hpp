#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

#include <iostream>

using namespace std;

class Aviao
{
private:
    
public:
    int vel = 0;
    int velMax;
    string tipo;
    Aviao(int tp);
    void imprimir();
};

Aviao::Aviao(int tp)
{
    if (tp == 1)
    {
        tipo = "Jato";
        velMax = 800;
    }
    else if (tp == 2)
    {
        tipo = "Monomotor";
        velMax = 350;
    }
    else
    {
        tipo = "Planador";
        velMax = 180;
    }    
}


void Aviao::imprimir()
{
    cout << "--------------------------------------" << endl;
    cout << "Tipo:.............." << tipo << endl;
    cout << "Velocidade Maxima:." << velMax << endl;
    cout << "Velocidade Atual:.." << vel << endl;
    cout << "--------------------------------------" << endl;
}

#endif
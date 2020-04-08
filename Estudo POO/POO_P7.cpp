#include <iostream>
#include <memory>
using namespace std;

class Carro{
private:
    int velMax;
    void setVelMax(int velocidade_maxima){this->velMax = velocidade_maxima;}

public:
    const int vel_imag1 = 100,vel_imag2 = 200;
    int potencia;
    const char* nome;
    int getVelMax(){return this->velMax;}
    Carro(const char* n, int p);
    
};

Carro::Carro(const char* n, int p):nome(n),potencia(p){// lista de inicialização
    // operador ternario ()? <> : <>; 
    if(p < vel_imag1)
    {
        //this->setVelMax(120)
        this->velMax = 120;
    }else if (p < vel_imag2)
    {
        //this->setVelMax(220)
        this->velMax = 220;
    }else
    {
        //this->setVelMax(350)
        this->velMax = 350;
    }     
}

int main(){
    unique_ptr<Carro>c1(new Carro{"Bruno",85});
    cout << c1->nome << " - " << c1->potencia << " - " << c1->getVelMax() << endl;
    Carro c2{"Ventania",400};
    cout << c2.nome << " - " << c2.potencia << " - " << c2.getVelMax() << endl;

    return 0;
}
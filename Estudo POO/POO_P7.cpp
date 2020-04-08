#include <iostream>
#include <memory>
using namespace std;

class Carro{
private:
    int velMax;
public:
    const int vel_imag1 = 100,vel_imag2 = 200;
    int potencia;
    const char* nome;
    void setVelMax(int velocidade_maxima);
    int getVelMax(){
        return this->velMax;
    }
    Carro(const char* n, int p);
    
};

void Carro::setVelMax(int velocidade_maxima){
    this->velMax = velocidade_maxima;
}

Carro::Carro(const char* n, int p):nome(n),potencia(p){// lista de inicialização
        if(p < vel_imag1)
        {
            this->velMax = 120;
        }else if (p < vel_imag2)
        {
            this->velMax = 220;
        }else
        {
            this->velMax = 350;
        }
        
        
    }
int main(){
    unique_ptr<Carro>c1(new Carro{"Bruno",85});
    cout << c1->nome << " - " << c1->potencia << " - " << c1->velMax << endl;
    Carro c2{"Ventania",400};
    cout << c2.nome << " - " << c2.potencia << " - " << c2.velMax << endl;

    return 0;
}
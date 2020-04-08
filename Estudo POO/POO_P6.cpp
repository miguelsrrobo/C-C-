#include <iostream>

using namespace std;

class Carro{
private:
public:
    int velMax;
    const int val_imag1 = 100,val_imag2 = 200;
    int potencia;
    const char* nome;
    Carro(const char* n, int p);
    
};

Carro::Carro(const char* n, int p):nome(n),potencia(p){// lista de inicialização
        if(p < val_imag1)
        {
            this->velMax = 120;
        }else if (p < val_imag2)
        {
            this->velMax = 220;
        }else
        {
            this->velMax = 350;
        }
        
        
    }
int main(){
    Carro c1{"Bruno",70};
    cout << c1.nome << " - " << c1.potencia << " - " << c1.velMax << endl;

    return 0;
}
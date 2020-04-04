#include <iostream>

using namespace std;

class Aviao
{
private:
public:
    int vel = 0;
    int velMax;
    string tipo;
    void ini(int tp);
};

void Aviao::ini(int tp)//tipo 1 jato tipo 2 monomotor tipo 3 planador 
{
    if(tp == 1)
    {
        this -> velMax = 800;
        this -> tipo = "Jato";
    }
    else if (tp == 2)
    {
        this -> velMax = 350;
        this -> tipo = "Monomotor";
    }
    else
    {
        this -> velMax = 180;
        this -> tipo = "Planador";
    }
    
        
}

int main()
{
    int n;
    Aviao *av1 = new Aviao();
    
    av1->ini(1);
    
    cout << av1 -> velMax << endl;
    
    return 0;
}
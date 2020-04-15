#include <iostream>

using namespace std;

class Veicule{
private:
	int velMax;
	int potencia;
public:
	int rodas;
	const char* nome;
protected:
	int portas;
	const char* cot;
};

class Carro{
	Carro(){
		//velMax = 180;
		//potencia = 150;
		rodas = 4;
		nome = "Carro"
		portas = 4;
		cor = "Vermelho";

		cout << velMax << endl;
		cout << potencia << endl;
		cout << rodas << endl;
		cout << nome << endl;
		cout << portas << endl;
		cout << cor << endl;
	}
}

int main{

	return 0;
}

#include<iostream>

using namespace std;

class Conta
{
public:
	int numero;
	double saldo;

	double depositar(double quantidade)
	{
		if(quantidade > 0)
			saldo += quantidade;
		return saldo;
	}

	double retirar(double quantidade)
	{
		if(saldo >= quantidade)
			saldo -= quantidade;
		return saldo;
	}
};

int main()
{
	Conta c;

	c.numero = 1;
	c.saldo = 100.75;

	cout << "Saldo: " << c.saldo << endl;
	c.depositar(100);
	cout << "Saldo depois de depositar: " << c.saldo << endl;
	c.retirar(50);
	cout << "Saldo depois do saque: " << c.saldo << endl;
	return 0;
}

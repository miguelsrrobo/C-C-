#include <iostream>

using namespace std;

int main(){
	
	string veiculo = "Carro";
	string *pv;

	pv = &veiculo;

	cout << pv;

	return 0;
}

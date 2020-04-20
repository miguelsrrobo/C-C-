#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<string>produtos = {"mouse","teclando","monitor","gabinete","cx.som"};
	
	//it = produtos.end();
	//end()-1 -> pega o ultimo elemento do conteiner
	//advance -> percorre o conteiner
	//next(var,3) -> percorre o conteiner pela doreita
	//prev(var,3)
	//advance(it,3);

	for(vector<string>::iterator it = produtos.begin();it != produtos.end();it++){
		cout << *it << endl;
	}
	return 0;
}

#include<iostream>

using namespace std;

auto soma(double n1,double n2)->double
{
	return n1+n2;
}

string canal()
{
	return "CFB Cursos";
}

int main(){
	
	auto num = 10;
	auto nome = "Bruno";
	auto valor = 10.5;

	auto res =  soma(10.3,5.2);

	cout << res << endl;

	return 0;
}

#include <iostream>
#include <memory>

using namespace std;

int main(){
	//int *pnum = new  int();
	//unique_ptr<int>pnum(new int(10));
	//shared_ptr<int>pnum2 = pnum;
	/*
	string *str = new string("CFB.Cursos");
	cout << *str << " tamanho " << str->size() << endl;
	delete str;
	*/
	unique_ptr<string>str(new string("CFB.Cursos"));
	cout << *str << "- tamanho:" << str->size() << endl;

	return 0;
}

#include <iostream>
#include <vector>

using namespace std;

void somador()
{
	static auto i = 0;
	i++;
	cout << i <<endl;
}

int main()
{	//register int cont;

	/*for(cont = 0;cont <= 10;cont++)
	{
		cout << cont << endl;
	}

	vector <int>v{10,20,30,40,50,60,70};

	for(register auto it = v.begin();it!=v.end();it++)
	{
		cout << *it << endl;
	}*/

	somador();
	somador();

	return 0;
}

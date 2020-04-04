#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    	double x1,y1,x2,y2,p1,p2,conclusao;

    	cin >> x1 >> y1 >> x2 >> y2;

    	p1 = pow(x2 - x1, 2);
	p2 = pow(y2 - y1, 2);
	conclusao = sqrt(p1 + p2);

    	cout << fixed;
    	cout.precision(4);
    	cout << conclusao << endl;

    	return 0;
}


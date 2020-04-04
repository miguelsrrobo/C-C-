#include<iostream>

using namespace std;

int main()
{
  float a;
  float b;
  float c;
  float area = 0,perimetro = 0;

  cin >> a >> b >> c;

  perimetro = a + b + c;

  area = ((a + b) * c) / 2;

  if(a == b && b == c)
  {
    cout << "Perimetro = " << perimetro << endl;
  }
  else if(a == b || b == c)
  {
    cout << "Perimetro = " << perimetro << endl;

  }
  else
  {
    //cout.precision(1);
    cout << "Area = " << area << endl;
  }
  return 0;
}

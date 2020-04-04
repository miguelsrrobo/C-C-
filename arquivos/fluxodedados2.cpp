#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream output("saida.txt");
    output << "Aprenda a usar arquivo\n";
    output << "www.GeeksBR.com\n";

    return 0;
}
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream in("testo.txt");
    
    string testo;
    char c = in.get();
    testo.push_back(c);

    cout << "\nMostroando cada caracter" << endl;
    while (in.good())
    {
        cout << c << "|";
        c = in.get();
        testo.push_back(c);
    }
    
    cout << "\n\nMostrar a string: " << testo << endl;
    return  0;
    
}
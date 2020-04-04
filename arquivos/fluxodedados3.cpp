#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream in("testo.txt");
    char c;

    while (true)
    {
        in >> c;
        if (in.fail())
            break;
        cout << c;
            
    }
    
    return 0;
}

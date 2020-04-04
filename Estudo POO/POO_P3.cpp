#include "classes.h"

int main()
{

    Veiculo *v1 = new Veiculo(2);
    Veiculo *v2 = new Veiculo(3);
    Veiculo *v3 = new Veiculo(1);

    cout << v1 -> getVelMax() << endl;
    cout << v2 -> getVelMax() << endl;
    cout << v3 -> getVelMax() << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main() {

    double x,y,z;
    cin >> x >> y;
    z=(x*y)/12.0;
    //cout << fixed;
    cout.precision(3) << fixed;
    cout << z << endl;
    return 0;
}

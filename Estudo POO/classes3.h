#ifndef CALSSES2_H_INCLUDED
#define CLASSES2_H_INCLUDED

#include <iostream>

using namespace std;

class Base1{
private:
public:
    void impBase1();
};

void Base1::impBase1(){
    cout << "Imp classe Base1" << endl;
}

class Base2{
private:
public:
    void impBase2();
};


void Base2::impBase2(){
    cout << "Imp classe Base2" << endl;
}

class CFB:public Base1, public Base2{

};



#endif
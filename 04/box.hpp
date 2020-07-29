#include <iostream>
#include <stdlib.h>

using namespace std;

class Box
{
private:
    float m_width, m_height, m_depth;
    
public:
    //constructor and destructor
    //Box() { cout << "Initializing object" << endl;}
    //Box() { m_width=0; m_height=0; m_depth=0; }
    Box() : m_width(0), m_height(0), m_depth(0) { };    
    Box(float w, float h, float d) : m_width(w), m_height(h), m_depth(d) { };    
    Box(const Box &b) : m_width(b.m_width), m_height(b.m_height), m_depth(b.m_depth) { };
    
    ~Box() { cout << "Ohhh man, I'm dying..." << endl; }
    
    
    //show member's variable information
    void ShowInfo();
    
    //calculate box's volume
    float GetVolume() const { return m_width * m_height * m_depth; };
    
    //update box members
    void Update(unsigned int w, unsigned int h, unsigned int d);
};



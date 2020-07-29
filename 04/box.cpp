#include "box.hpp"

void Box::ShowInfo()
{
        cout << "Box width = "  << this->m_width  << endl;
        cout << "Box height = " << this->m_height << endl;
        cout << "Box depth = "  << this->m_depth  << endl;
        
        cout << "Box volume = " << this->GetVolume() << endl;
}

void Box::Update(unsigned int w, unsigned int h, unsigned int d)
{
    m_width  = w;
    m_height = h;
    m_depth  = d;
}

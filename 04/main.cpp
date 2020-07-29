
#include "box.hpp"

int main()
{
    Box a;
    Box b(10, 10, 10);
    Box c(b);  
    
    
    a.ShowInfo();
    b.ShowInfo();
    c.ShowInfo();
}

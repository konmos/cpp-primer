#include <iostream>

int main()
{
    int a = 5, *p;
    p = &a;
    
    std::cout << a << std::endl;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    
    *p = 10;
    std::cout << a << std::endl;
    std::cout << p << std::endl;
    std::cout << *p << std::endl;
    
    return 0;
}

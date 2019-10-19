#include <iostream>

int main()
{
    int *p;
    // WARNING: Using uninitialized variable.
    std::cout << p << std::endl;
    std::cout << &p << std::endl;
    
    int a = 5;
    p = &a;
    
    std::cout << &a << std::endl;
    std::cout << p << std::endl;
    std::cout << &p << std::endl;
    std::cout << *p << std::endl;
    
    int *p2 = p;
    std::cout << *p2 << std::endl;
    std::cout << p << std::endl;
    
    return 0;
}

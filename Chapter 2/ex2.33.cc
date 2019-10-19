#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;
    
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;
    
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << " " << *d << std::endl;
    std::cout << e << " " << *e << std::endl;
    std::cout << g << std::endl;
    
    a = 42;  // ok; a is int
    b = 42;  // ok; b is int
    c = 42;  // ok; c is int
    // d = 42;  // error d is int*
    // e = 42;  // error e is const int*
    // g = 42;  // error; g is const int&
    
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << " " << *d << std::endl;
    std::cout << e << " " << *e << std::endl;
    std::cout << g << std::endl;
    
    return 0;
}

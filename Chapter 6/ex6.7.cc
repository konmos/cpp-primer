#include <iostream>

size_t gen() {
    static size_t ctr = 0;
    return ctr++;
}

int main()
{
    for (int i = 0; i != 10; ++i) {
        std::cout << gen() << std::endl;;
    }
    
    return 0;
}
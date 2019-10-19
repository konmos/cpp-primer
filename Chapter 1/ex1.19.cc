#include <iostream>

int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    
    int small, big;
    std::cin >> small >> big;
    
    if (small > big){
        int tmp = small;
        small = big;
        big = tmp;
    }
    
    while (small <= big){
        std::cout << small << " ";
        ++small;
    }
    
    std::cout << std::endl;
    
    return 0;
}

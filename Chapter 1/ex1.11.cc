#include <iostream>

int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    
    // We assume that the user enters the numbers in order.
    int small, big;
    std::cin >> small >> big;
    
    while (small <= big){
        std::cout << small << " ";
        ++small;
    }
    
    std::cout << std::endl;
    
    return 0;
}

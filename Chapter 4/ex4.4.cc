#include <iostream>

int main()
{
    // 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2
    // ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2)
    // 91
    
    int x = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    std::cout << x << std::endl;
    
    return 0;
}
#include <iostream>

// Simple main function: prints numbers from 10 - 0.
int main()
{
    int val = 10;
    
    while (val >= 0){
        std::cout << val << std::endl;
        --val;
    }
    
    return 0;
}

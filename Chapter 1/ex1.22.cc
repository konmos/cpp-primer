#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;
    
    if (std::cin >> total){
        Sales_item current;
        
        while (std::cin >> current){
            total += current;
        }
    } else {
        std::cerr << "No data!" << std::endl;
        return -1;
    }
    
    std::cout << total << std::endl;
    return 0;
}

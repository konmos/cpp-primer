#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item current;
    
    if (std::cin >> current){
        int count = 1;
        Sales_item item;
        
        while (std::cin >> item){
            if (item.isbn() == current.isbn()){
                ++count;
            } else {
                std::cout << current << " occured " << count << " times." << std::endl;
                current = item;
                count = 1;
            }
        }
        std::cout << current << " occured " << count << " times." << std::endl;
        
    } else {
        std::cerr << "No data?" << std::endl;
        return -1;
    }
    
    return 0;
}

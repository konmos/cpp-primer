#include <iostream>

int main()
{
    unsigned x = 0;
    
    goto begin;
    
    end: return 0;
    
    begin:
        ++x;
        if (x <= 10) {
            std::cout << x << std::endl;
            goto begin;
        }
    
    std::cout << "ENDING" << std::endl;
    goto end;
}
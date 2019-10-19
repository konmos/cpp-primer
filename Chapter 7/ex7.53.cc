#include "Debug.h"
#include <iostream>

int main() {
    constexpr Debug io_sub(false, true, false);  // debugging io
    if (io_sub.any()) {
        std::cerr << "print appropriate error message" << std::endl;
    }
    
    constexpr Debug prod(false);  // no debugging during production
    if (prod.any()) {
        std::cerr << "print an error message" << std::endl;
    }
}
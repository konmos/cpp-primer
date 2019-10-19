#include "Account.h"
#include <iostream>

int main() {
    Account ac, ac2;
    
    std::cout << ac.rate() << std::endl;
    ac.rate(123);
    std::cout << ac.rate() << std::endl;
    std::cout << ac2.rate() << std::endl;
}
#include <iostream>
#include <string>

int main(int argc, char **argv) {
    if (argc != 3) {
        std::cerr << "Incorrect arguments!" << std::endl;
        return 1;
    }
    
    std::string a = argv[1], b = argv[2];
    std::cout << a << " " << b << std::endl;
    
    return 0;
}
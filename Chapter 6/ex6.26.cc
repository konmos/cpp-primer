#include <iostream>
#include <iterator>

using std::begin;
using std::end;

int main(int argc, char *argv[]) {
    std::cout << "argc: " << argc << std::endl;
    
    if (argc != 1) {
        std::cout << "argv: ";
        
        for (int x = 1; x != argc - 1; ++x) {
            std::cout << argv[x] << " ";
        }
        
        std::cout << std::endl;
    }
}
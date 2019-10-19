#include <iostream>

int compare(int const i, int const *const j) {
    return (*j > i) ? *j : i;
}

int main() {
    int x = 1, z = 2;
    int *y = &z;
    
    std::cout << compare(x, y) << std::endl;
}
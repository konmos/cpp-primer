#include <vector>
#include <iostream>

using std::vector;
using Func = int(int, int);


int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int main() {
    vector<Func*> vec = {
        add, subtract, multiply, divide
    };
    
    int x = 5, y = 2;
    
    for (Func *func : vec) {
        std::cout << func(x, y) << std::endl;
    }
}

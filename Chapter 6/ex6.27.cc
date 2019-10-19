#include <iostream>
#include <initializer_list>

using std::endl;
using std::cout;
using std::initializer_list;


int sum(initializer_list<int> const &il) {
    int ret = 0;
    
    for (auto x : il) {
        ret += x;
    }
    
    return ret;
}

int main() {
    cout << sum({1, 2, 3, 4, 5, 6, 7, 8, 9}) << endl;
}
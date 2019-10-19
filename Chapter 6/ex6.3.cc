#include <iostream>

using std::cout;
using std::cin;
using std::endl;


unsigned fact(int x) {
    unsigned ret = 1;
    
    while (x > 1) {
        ret *= x;
        --x;
    }
    
    return ret;
}

int main()
{
    int x = 5;
    cout << fact(x) << endl;
    return 0;
}

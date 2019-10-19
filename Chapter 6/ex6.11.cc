#include <iostream>

using std::cout;
using std::endl;


template <typename T>
void reset(T &x)
{
    x = 0;
}

int main()
{
    int x = 1;
    double y = 1.0;
    
    reset(x);
    reset(y);
    
    cout << x << endl;
    cout << y << endl;
    
    return 0;
}
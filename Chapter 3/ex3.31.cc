#include <iostream>

using std::cout;
using std::endl;

int main()
{
    constexpr unsigned sz = 10;
    int arr[sz] = {};
    
    for (int ix = 0; ix < sz; ++ix) arr[ix] = ix;
    for (auto x : arr) cout << x << endl;
    
    return 0;
}
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    constexpr unsigned sz = 10;
    int arr1[sz], arr2[sz];
    
    for (int ix = 0; ix < sz; ++ix) arr1[ix] = ix;
    for (int ix = 0; ix < sz; ++ix) arr2[ix] = arr1[ix];
    
    vector<int> vec1;
    for (int ix = 0; ix < sz; ++ix) vec1.push_back(ix);
    
    vector<int> vec2 = vec1;
    
    for (auto x : vec2) cout << x << endl;
    
    return 0;
}
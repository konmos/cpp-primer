#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int arr[10];
    
    for (int *p = begin(arr); p != end(arr); ++p) *p = 0;
    for (auto x : arr) cout << x << endl;
    
    return 0;
}
#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::vector;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> vec(begin(arr), end(arr));
    
    for (auto x : vec) cout << x << " ";
    cout << endl;
    
    return 0;
}
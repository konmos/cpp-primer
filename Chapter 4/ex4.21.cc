#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    for (const auto &x : vec) {
        cout << ((x % 2) ? x * 2 : x) << " ";
    }
    
    cout << endl;
    
    return 0;
}
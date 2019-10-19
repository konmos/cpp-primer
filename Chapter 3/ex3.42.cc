#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::endl;

int main()
{
    vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr[10];
    
    for (size_t x = 0; x != vec.size(); ++x) arr[x] = vec[x];
    for (auto c : arr) cout << c << endl;
    
    return 0;
}
#include <iostream>
#include <iterator>
#include <vector>

using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::vector;


bool cmp_array(int *const pb1, int *const pe1, int *const pb2, int *const pe2)
{
    if ((pe1 - pb1) != (pe2 - pb2)) {
        return false;
    } else {
        for (int *i = pb1, *j = pb2; i != pe1 && j != pe2; ++i, ++j) {
            if (*i != *j) {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[10] = {};
    
    cout << cmp_array(begin(arr), end(arr), begin(arr2), end(arr2)) << endl;
    
    vector<int> vec1 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> vec2(vec1);
    
    cout << (vec1 == vec2) << endl;
    
    return 0;
}
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

/*
bool prefix(vector<int> vec1, vector<int> vec2)
{
    // If they have equal lengths, this code does not matter.
    if (vec1.size() < vec2.size()) {
        vector<int> small = vec1;
        vector<int> large = vec2;
    } else {
        vector<int> small = vec2;
        vector<int> large = vec1;
    }
    
    for (decltype(small.size()) i = 0, end = small.size(); i != end; ++i) {
        if (small[i] != large[i]) {
            return false;
        } else {
            continue;
        }
    }
    
    return true;
}
*/

int main()
{
    vector<int> v1 = {0, 1, 1, 2};
    vector<int> v2 = {0, 1, 1, 2, 3, 5, 8};
    vector<int> small, large;
    
    if (v1.size() < v2.size()) {
        small = v1;
        large = v2;
    } else {
        small = v2;
        large = v1;
    }
    
    for (size_t i = 0, end = small.size(); i != end; ++i) {
        if (small[i] != large[i]) {
            cout << "false" << endl;
            return 1;
        } else {
            continue;
        }
    }
    
    cout << "true" << endl;
    return 0;
}
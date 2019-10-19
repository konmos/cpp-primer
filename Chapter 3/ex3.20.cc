#include <iostream>
#include <vector>

using std::vector;
using std::endl;
using std::cout;
using std::cin;


// THIS IS AWFUL AND WRONG CODE!!!

/*

something like this is probably want we want, but with iterators replaced by subscripts...

int main()
{
    vector<int> ivec;
    for (int val; cin >> val; ivec.push_back(val));
    
    for (auto it = ivec.cbegin(); it + 1 != ivec.cend(); ++it) {
        cout << *it + *(it + 1) << "{ " << *it << ", " << *(it + 1) << " }" << endl;
    }
    
    if (ivec.size() % 2 != 0){
        int last = *(ivec.cend() - 1);
        cout << last << "{ " << last << " }" << endl;
    }
    
    for (auto lhs = ivec.cbegin(), rhs = ivec.cend() - 1; lhs < rhs; ++lhs, --rhs) {
        cout << *lhs + *rhs << "{ " << *lhs << ", " << *rhs << " }" << endl;
    }
    
    if (ivec.size() % 2 != 0){
        int mid = *(ivec.cbegin() + ((ivec.cend() - ivec.cbegin()) / 2));
        cout << mid << "{ " << mid << " }" << endl;
    }
    
    return 0;
}
*/

int main()
{
    vector<int> ivec;
    
    for (int val; cin >> val; ivec.push_back(val));
    
    for (vector<int>::size_type i = 0; i < ivec.size(); ++i) {
        unsigned x = i, y = i + 1;
        if (y < ivec.size()) {
            cout << ivec[x] + ivec[y] << "{ " << ivec[x] << ", " << ivec[y] << " }";
            ++i;
        } else {
            cout << ivec[x] << "{ " << ivec[x] << " }";
        }
        
        cout << endl;
    }
    
    for (vector<int>::size_type i = 0; i < ivec.size(); ++i) {
        unsigned x = i, y = ivec.size() - i - 1;
        
        if (x < y) {
            cout << ivec[x] + ivec[y] << "{ " << ivec[x] << ", " << ivec[y] << " }";
        } else {
            cout << ivec[x] << "{ " << ivec[x] << " }";
        }
        
        cout << endl;
        
        if (y == ivec.size() / 2) break;
    }
    
    return 0;
}

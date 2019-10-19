#include <iostream>
#include <vector>

using std::vector;
using std::endl;
using std::cout;
using std::cin;

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
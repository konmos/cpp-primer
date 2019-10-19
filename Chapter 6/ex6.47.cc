#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::cerr;
using std::vector;


void print_vec(vector<int> &vi, size_t index) {
    #ifndef NDEBUG
    cout << "\tvector index: " << index << " -> ";
    #endif
    if (index != vi.size()) {
        cout << vi[index] << endl;
        print_vec(vi, index + 1);
    } else {
        cout << endl;
    }
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    print_vec(vec, 0);
}
#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
    constexpr size_t rows = 3, cols = 4;
    
    int ia[rows][cols] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    
    for (int (&row)[4] : ia) {
        for (int &col : row) {
            cout << col << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    for (int i = 0; i != rows; ++i) {
        for (int j = 0; j != cols; ++ j) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    for (int (*row)[4] = begin(ia); row != end(ia); ++row) {
        for (int *col = begin(*row); col != end(*row); ++col) {
            cout << *col << " ";
        }
        cout << endl;
    }
    
    return 0;
}
#include <iostream>
#include <stdexcept>

using std::runtime_error;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned x, y;
    cin >> x >> y;
    
    cout << x << " / " << y << " = " << static_cast<double>(x) / y << endl;
    
    return 0;
}
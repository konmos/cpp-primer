#include <iostream>
#include <stdexcept>

using std::runtime_error;
using std::cin;
using std::cout;
using std::endl;


double divide(const double x, const double y) {
    if (y == 0) {
        throw runtime_error("Cannot divide by zero.");
    }
    
    return x / y;
}

int main()
{
    unsigned x, y;
    
    // try to run until valid division or eof
    while (cin >> x >> y) {
        try {
            cout << x << " / " << y << " = " << divide(x, y) << endl;
            break;
        } catch (runtime_error err) {
            cout << err.what() << endl;
            cout << "continuing... " << endl;
            continue;
        }
    }
    
    return 0;
}
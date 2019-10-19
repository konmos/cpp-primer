#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    const vector<string> grades = {"F", "D", "C", "B", "A", "A++"};
    
    for (unsigned int x; cin >> x;) {
        string letter = (x < 60) ? grades[0] : (x >= 60 && x <= 100) ? grades[(x - 50) / 10] : "";
        letter += (x != 100 && x >= 60) ? ( (x % 10 < 3) ? "-" : (x % 10 > 7) ? "+" : "" ) : "";
        cout << letter << endl;
    }
    
    return 0;
}
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str;
    cin >> str;
    
    for (auto &c : str) {
        c = 'X';
    }
    
    cout << str << endl;
}
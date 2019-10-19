#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    for (string s; getline(cin, s); cout << endl)
        for (auto c : s)
            if (!ispunct(c)) cout << c;
    
    return 0;
}

#include <iostream>
#include <string>

using std::endl;
using std::cout;
using std::cin;
using std::string;

int main()
{
    string resp;
    
    do {
        string s1, s2;
        
        cout << "Enter two strings: ";
        cin >> s1 >> s2;
        
        cout << "The longer string is: "
             << ((s1.size() > s2.size()) ? s1 : s2)
             << endl;
        
        cout << "Go again? " << endl;
        cin >> resp;
    } while (!resp.empty() && resp[0] != 'n');
    
    return 0;
}
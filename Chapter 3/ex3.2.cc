#include <iostream>
#include <string>

using std::string; using std::cin; using std::cout; using std::endl;

int read_lines()
{
    string s;
    
    while (getline(cin, s)) {
        cout << s << endl;
    }
    
    return 0;
}

int read_words()
{
    string s;
    
    while (cin >> s) {
        cout << s << endl;
    }
    
    return 0;
}

int main()
{
    return read_words();
}
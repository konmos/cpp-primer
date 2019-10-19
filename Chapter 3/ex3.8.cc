#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

// while
int part_a()
{
    string s;
    decltype(s.size()) index = 0;
    
    cin >> s;
    
    while (index < s.size()){
        s[index] = 'X';
        ++index;
    }
    
    cout << s << endl;
    
    return 0;
}

// for
int part_b()
{
    string s;
    cin >> s;
    
    for (string::size_type index = 0; index < s.size(); ++index)
        s[index] = 'X';
    
    cout << s << endl;
    
    return 0;
}

int main()
{
    // I like range-for.
    
    return part_b();
}

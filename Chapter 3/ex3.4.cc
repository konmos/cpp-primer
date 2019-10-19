#include <iostream>
#include <string>

using std::string; using std::cin; using std::cout; using std::endl;

bool equal_strings(string s1, string s2)
{
    return s1 == s2;
}

bool equal_len(string s1, string s2)
{
    return s1.size() == s2.size();
}

string longer_strings(string s1, string s2)
{
    if (s1.size() > s2.size()){
        return s1;
    } else {
        return s2;
    }
}

string larger_strings(string s1, string s2)
{
    if (s1 > s2){
        return s1;
    } else {
        return s2;
    }
}


int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    
    if (equal_strings(s1, s2)) {
        cout << "Equal strings!" << endl;
    } else {
        cout << "Not equal strings!" << endl;
        cout << larger_strings(s1, s2) << " is larger" << endl;
    }
    
    if (equal_len(s1, s2)) {
        cout << "Equal length strings!" << endl;
    } else {
        cout << "Not equal length strings!" << endl;
        cout << longer_strings(s1, s2) << " is longer" << endl;
    }
    
    return 0;
}

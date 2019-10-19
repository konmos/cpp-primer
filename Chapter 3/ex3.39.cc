#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

bool cmp_c_string(const char *const s1, const char *const s2)
{
    return strcmp(s1, s2) == 0;
}

bool cmp_string(const string s1, const string s2)
{
    return s1 == s2;
}

int main()
{
    char cs1[] = "hello";
    char cs2[] = "hello";
    
    string s1 = "hello";
    string s2 = "helloa";
    
    cout << cmp_c_string(cs1, cs2) << endl;
    cout << cmp_string(s1, s2) << endl;
    
    return 0;
}
#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::isupper;
using std::tolower;

bool contains_upper(string const &s) {
    for (auto const &c : s) {
        if (isupper(c)) return true;
    }
    
    return false;
}

void to_lower(string &s) {
    for (auto &c : s) {
        c = tolower(c);
    }
}

int main() {
    string s = "Hello, World!";
    
    std::cout << contains_upper(s) << std::endl;
    to_lower(s);
    std::cout << s << std::endl;
}
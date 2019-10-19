#include <iostream>
#include <string>
#include <cctype>

using std::isupper;


int main()
{
    std::string s, prev;
    bool found;
    
    if (std::cin >> s) {
        prev = s;
        
        while (std::cin >> s) {
            if (!isupper(s[0])) continue;
            
            if (s == prev) {
                std::cout << s << " occured twice." << std::endl; found = true;
                break;
            } else {
                prev = s;
            }
        }
    }
    
    if (!found) {
        std::cout << "No words were repeated." << std::endl;
    }
    
    return 0;
}
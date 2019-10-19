#include <iostream>
#include <cctype>
#include <string>

using std::tolower;
using std::getline;

int main()
{
    unsigned vowelCnt = 0, spaceCnt = 0;
    std::string line;
    
    while (getline(std::cin, line)) {
        for (char c : line) {
            switch (tolower(c)) {
                case 'a': case 'e': case 'i': case 'o': case'u':
                    ++vowelCnt;
                    break;
                
                case ' ': case '\t':
                    ++spaceCnt;
                    break;
            }
        }
        
        // New line read.
        ++spaceCnt;
    }
    
    
    std::cout << "Number of vowels: " << vowelCnt << std::endl;
    std::cout << "Number of spaces, tabs, and newlines: " << spaceCnt << std::endl;
    
    return 0;
}
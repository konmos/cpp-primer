#include <iostream>
#include <cctype>
#include <string>

using std::tolower;
using std::getline;

int main()
{
    unsigned vowelCnt = 0, spaceCnt = 0, fxCnt = 0;
    std::string line;
    
    while (getline(std::cin, line)) {
        for (auto beg = line.cbegin(), end = line.cend(); beg != end; ++beg) {
            switch (tolower(*beg)) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    ++vowelCnt;
                    break;
                
                case ' ': case '\t':
                    ++spaceCnt;
                    break;
                
                case 'f':
                    {
                        if (beg + 1 != end) {
                            switch (*(beg + 1)) {
                                case 'f': case 'l': case 'i':
                                    ++fxCnt, ++beg;
                                    break;
                            }
                        }
                    }
                    break;
            }
        }
        
        // New line...
        ++spaceCnt;
    }
    
    std::cout << "Number of vowels: " << vowelCnt << std::endl;
    std::cout << "Number of spaces, tabs, and newlines: " << spaceCnt << std::endl;
    std::cout << "Number of f[f], f[l], f[i]: " << fxCnt << std::endl;
    
    return 0;
}
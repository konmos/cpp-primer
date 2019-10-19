#include <iostream>
#include <cctype>

using std::tolower;

int main()
{
    unsigned vowelCnt = 0;
    char ch;
    
    while (std::cin >> ch) {
        switch (tolower(ch)) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                ++vowelCnt;
                break;
        }
    }
    
    std::cout << "Number of vowels: " << vowelCnt << std::endl;
    
    return 0;
}
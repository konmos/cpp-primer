#include <iostream>

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    
    while (std::cin >> ch) {
        if (ch == 'a') ++aCnt;
        else if (ch == 'e') ++eCnt;
        else if (ch == 'i') ++iCnt;
        else if (ch == 'o') ++ oCnt;
        else if (ch == 'u') ++uCnt;
    }
    
    std::cout << aCnt << " "
              << eCnt << " "
              << iCnt << " "
              << oCnt << " "
              << uCnt << " ";
    
    std::cout << std::endl;
    return 0;
}
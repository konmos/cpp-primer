#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int main()
{
    const char s1[] = "Hello,";
    const char s2[] = "World!";

    char s3[13];
    
    std::strcpy(s3, s1);
    std::strcat(s3, " ");
    std::strcat(s3, s2);
    
    cout << s3 << endl;
    
    return 0;
}

#include <iostream>

int main()
{
    std::cout << "/*";  // legal
    std:: cout << "*/";  // legal
    // std::cout << /* "*/" */;
    std::cout << /* "*/" /* "/*" */;  // legal
    return 0;
}

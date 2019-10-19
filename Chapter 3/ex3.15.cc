#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> store;
    for (std::string val; std::cin >> val; store.push_back(val));
    return 0;
}
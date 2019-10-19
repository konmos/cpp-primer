#include <iostream>
#include <vector>

int main()
{
    std::vector<int> store;
    for (int val; std::cin >> val; store.push_back(val));
    return 0;
}
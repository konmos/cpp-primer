#include <iostream>

int book()
{
    int sum = 0, val = 0;
    
    std::cout << "enter some numbers" << std::endl;
    
    while (std::cin >> val){
        sum += val;
    }
    
    std::cout << "sum: " << sum << std::endl;
    
    return 0;
}

int custom()
{
    int sum = 0;
    
    std::cout << "enter some numbers" << std::endl;
    
    for (int val; std::cin >> val; sum += val);
    std::cout << "sum: " << sum << std::endl;
    
    return 0;
}

int main()
{
    return custom();
}

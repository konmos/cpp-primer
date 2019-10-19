#include <iostream>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b, *b = temp;
}

int main()
{
    int x = 5, y = 10;
    
    std::cout << "x = " << x << " y = " << y << std::endl;
    std::cout << "swapping" << std::endl;
    swap(&x, &y);
    std::cout << "x = " << x << " y = " << y << std::endl;
    
    return 0;
}
#include <iostream>

using std::cout; using std::endl; using std::cin;

int ex19()
{
    int start = 50, end = 100, sum = 0;
    
    while (start <= end) {
        sum += start;
        ++start;
    }
    
    cout << sum << endl;
    
    return 0;
}

int ex110()
{
    int start = 10, end = 0;
    
    while (start >= end) {
        cout << start << endl;
        --start;
    }
    
    return 0;
}

int ex111()
{
    int start, end;
    cin >> start >> end;
    
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }
    
    while (start <= end) {
        cout << start << " ";
        ++start;
    }
    
    return 0;
}

int main()
{
    return ex111();
}
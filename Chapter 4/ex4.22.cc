#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int grade;
    cin >> grade;
    
    string finalgrade = (grade >= 90) ? "high pass"
                                      : (grade >= 75) ? "pass"
                                      : (grade < 75 && grade >= 60) ? "low pass" : "fail";
    
    cout << finalgrade << endl;
    
    if (grade >= 90)
        cout << "high pass" << endl;
    else if (grade >= 75)
        cout << "pass" << endl;
    else if (grade < 75 && grade >= 60)
        cout << "low pass" << endl;
    else
        cout << "fail" << endl;
    
    return 0;
}
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    const vector<string> grades = {"F", "D", "C", "B", "A", "A++"};
    
    for (unsigned int x; cin >> x;) {
        string letter;
        
        if (x < 60) {
            letter = grades[0];
        } else if (x >= 60 && x <= 100) {
            letter = grades[(x - 50) / 10];
            
            if (x != 100) {
                if (x % 10 < 3) {
                    letter += '-';
                } else if (x % 10 > 7){
                    letter += '+';
                }
            }
        }
        
        cout << letter << endl;
    }
    
    return 0;
}
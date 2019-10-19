#include <iostream>
#include <vector>

using std::vector;
using std::endl;
using std::cout;
using std::cin;

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    
    while (cin >> grade) {
       if (grade <= 100) {
           *(scores.begin() + (grade / 10)) += 1;
       }
   }
   
   for (auto it = scores.cbegin(); it != scores.cend(); ++it) cout << *it << " "; cout << endl;
   
   return 0;
}
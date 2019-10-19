#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

int main()
{
    string s, prev, max_s;
    unsigned cnt = 0, max_cnt = 0;
    
    if (cin >> s) {
        prev = s, max_s = s; ++cnt;
        
        while (cin >> s) {
            if (s == prev) {
                ++cnt;
            } else {
                // New word...
                if (cnt > max_cnt) {
                    max_cnt = cnt;
                    max_s = prev;
                }
                
                cnt = 1;
                prev = s;
            }
        }
    }
    
    cout << max_s << endl;
    return 0;
}
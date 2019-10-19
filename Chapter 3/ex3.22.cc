#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::endl;
using std::cout;
using std::cin;

int main()
{
    vector<string> text;
    
    // Read text into the vector.
    for (string line; getline(cin, line); text.push_back(line));
    
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it){
        for (auto &c : *it) {
            c = toupper(c);
        }
    }
    
    for (auto it = text.cbegin(); it != text.cend(); ++it) cout << *it << endl;
    
    return 0;
}
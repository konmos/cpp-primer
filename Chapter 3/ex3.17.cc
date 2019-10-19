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
    vector<string> words;
    for (string word; cin >> word; words.push_back(word));
    
    for (decltype(words.size()) index = 0; index < words.size(); ++index) {
        for (auto &c : words[index]) c = toupper(c);
    }
    
    int counter = 0;
    for (auto word : words) {
        cout << word << " ";
        ++counter;
        if (counter == 8) cout << endl;
    }
    
    return 0;
}

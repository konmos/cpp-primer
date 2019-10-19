#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;


string make_plural(size_t ctr, string const &word, string const &ending = "s") {
    return (ctr > 1) ? word + ending : word;
}

int main() {
    string s = "success", f = "failure";
    
    cout << make_plural(1, s, "es") << endl;
    cout << make_plural(2, s, "es") << endl;
    cout << make_plural(1, f) << endl;
    cout << make_plural(2, f) << endl;
}
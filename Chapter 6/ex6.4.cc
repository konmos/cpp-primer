#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


void interactive_fact() {
    string const prompt = "Enter a number between 1 & 13: ";
    string const error  = "Error. Try again? ";
    string const again  = "Try again? ";
    string resp;
    
    do {
        int x, ret = 1;
        
        cout << prompt;
        cin >> x;
        
        if (x < 1 || x > 13) {
            cout << error;
            cin >> resp;
            continue;
        }
        
        while (x > 1) {
            ret *= x--;
        }
        
        cout << "!" << x << " = " << ret << endl;
        cout << again;
        cin >> resp;
    } while (!resp.empty() && resp[0] != 'n');
}

int main()
{
    interactive_fact();
    return 0;
}

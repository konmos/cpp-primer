#include "Sales_data.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;


int process_transactions() {
    Sales_data sd;
    
    if (read(cin, sd)) {
        Sales_data trans;
        
        while (read(cin, trans)) {
            if (trans.isbn() == sd.isbn()) {
                sd.combine(trans);
            } else {
                print(cout, sd) << endl;
                sd = trans;
            }
        }
        print(cout, sd) << endl;;
        return 0;
    } else {
        cerr << "Error! No data?!" << endl;
        return -1;
    }
}

int main() {
    process_transactions();
}
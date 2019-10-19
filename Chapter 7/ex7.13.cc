#include "Sales_data.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

void process_transactions() {
    Sales_data total(cin);
    
    if (!total.isbn().empty()) {
        while (cin) {
            Sales_data trans(cin);
            
            if (trans.isbn() == total.isbn()) {
                total.combine(trans);
            } else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    } else {
        cerr << "No data?!" << endl;
    }
}

int main() {
    process_transactions();
}
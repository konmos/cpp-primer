#include <string>
#include <iostream>

using std::cin; using std::cout; using std::endl;

struct Sales_data {
    std::string isbn;
    unsigned units_sold = 0;
    double price = 0;
    double revenue = 0;
};

int ex120()
{
    // Produce sum of two Sales_data items with the same ISBN.
    
    Sales_data sd1, sd2;
    
    // Read inputs.
    cin >> sd1.isbn >> sd1.units_sold >> sd1.price;
    cin >> sd2.isbn >> sd2.units_sold >> sd2.price;
    
    // Calculate revenues.
    sd1.revenue = sd1.units_sold * sd1.price;
    sd2.revenue = sd2.units_sold * sd2.price;
    
    if (sd1.isbn == sd2.isbn){
        double total = sd1.revenue + sd2.revenue;
        cout << "Total revenue for " << sd1.isbn << ": " << total << endl;
        return 0;
    } else {
        cout << "Error! ISBN numbers do not match." << endl;
        return -1;
    }
}

int ex122()
{
    // Read several transactions for the same ISBN and calculate sum.
    
    Sales_data total;
    
    if (cin >> total.isbn >> total.units_sold >> total.price){
        total.revenue = total.units_sold * total.price;
        // Store running transactions.
        Sales_data trans;
        
        while (cin >> trans.isbn >> trans.units_sold >> trans.price){
            trans.revenue = trans.units_sold * trans.price;
            
            if (trans.isbn == total.isbn){
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            } else {
                // We'll just skip any entries we don't want, rather than failing.
                continue;
            }
        }
        
        cout << "Sold " << total.units_sold << " book(s) for " << total.isbn << endl;
        cout << "Total revenue: " << total.revenue << endl;
        cout << "Average price: " << total.revenue / total.units_sold << endl;
        return 0;
    } else {
        cout << "ERROR! No data!" << endl;
        return -1;
    }
}

int ex123()
{
    // Count how many transactions occur for an ISBN.
    
    Sales_data sd;
    
    if (cin >> sd.isbn >> sd.units_sold >> sd.price){
        Sales_data trans;
        unsigned total_sold = sd.units_sold;
        
        while (cin >> trans.isbn >> trans.units_sold >> trans.price){
            if (trans.isbn == sd.isbn) {
                total_sold += trans.units_sold;
            } else {
                cout << total_sold << " book(s) sold for " << sd.isbn << endl;
                sd.isbn = trans.isbn; sd.units_sold = trans.units_sold; sd.price = trans.price;
                total_sold = sd.units_sold;
            }
        }
        // Output last transaction info.
        cout << total_sold << " book(s) sold for " << sd.isbn << endl;
        return 0;
    } else {
        cout << "ERROR! No data!" << endl;
        return -1;
    }
}

int ex125()
{
    // Read several transactions and calculate total revenues for each ISBN.
    
    Sales_data sd;
    
    if (cin >> sd.isbn >> sd.units_sold >> sd.price){
        Sales_data trans;
        sd.revenue = sd.price * sd.units_sold;
        double total_revenue = sd.revenue;
        
        while (cin >> trans.isbn >> trans.units_sold >> trans.price){
            trans.revenue = trans.price * trans.units_sold;
            
            if (trans.isbn == sd.isbn) {
                total_revenue += trans.revenue;
            } else {
                cout << total_revenue << " total revenue for " << sd.isbn << endl;
                sd.isbn = trans.isbn; sd.units_sold = trans.units_sold; sd.price = trans.price;
                total_revenue = trans.revenue;
            }
        }
        // Output last transaction info.
        cout << total_revenue << " total revenue for " << sd.isbn << endl;
        return 0;
    } else {
        cout << "ERROR! No data!" << endl;
        return -1;
    }
}

int main()
{
    return 0;
}

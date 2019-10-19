#include <iostream>
#include <string>

struct Sales_data {
    std::string isbn;
    unsigned units_sold = 0;
    double price = 0;
    double revenue = 0;
};

int process_transactions()
{
    // Read several transactions and calculate total revenues for each ISBN.
    
    Sales_data sd;
    
    if (std::cin >> sd.isbn >> sd.units_sold >> sd.price){
        Sales_data trans;
        sd.revenue = sd.price * sd.units_sold;
        double total_revenue = sd.revenue;
        
        while (std::cin >> trans.isbn >> trans.units_sold >> trans.price){
            trans.revenue = trans.price * trans.units_sold;
            
            if (trans.isbn == sd.isbn) {
                total_revenue += trans.revenue;
            } else {
                std::cout << total_revenue << " total revenue for " << sd.isbn << std::endl;
                sd.isbn = trans.isbn; sd.units_sold = trans.units_sold; sd.price = trans.price;
                total_revenue = trans.revenue;
            }
        }
        // Output last transaction info.
        std::cout << total_revenue << " total revenue for " << sd.isbn << std::endl;
        return 0;
    } else {
        std::cout << "ERROR! No data!" << std::endl;
        return -1;
    }
}

int main()
{
    process_transactions();
}
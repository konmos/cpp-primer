#include <string>
#include <iostream>

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
    std::cin >> sd1.isbn >> sd1.units_sold >> sd1.price;
    std::cin >> sd2.isbn >> sd2.units_sold >> sd2.price;
    
    // Calculate revenues.
    sd1.revenue = sd1.units_sold * sd1.price;
    sd2.revenue = sd2.units_sold * sd2.price;
    
    if (sd1.isbn == sd2.isbn){
        double total = sd1.revenue + sd2.revenue;
        std::cout << "Total revenue for " << sd1.isbn << ": " << total << std::endl;
        return 0;
    } else {
        std::cout << "Error! ISBN numbers do not match." << std::endl;
        return -1;
    }
}

int ex122()
{
    // Read several transactions for the same ISBN and calculate sum.
    
    Sales_data total;
    
    if (std::cin >> total.isbn >> total.units_sold >> total.price){
        total.revenue = total.units_sold * total.price;
        // Store running transactions.
        Sales_data trans;
        
        while (std::cin >> trans.isbn >> trans.units_sold >> trans.price){
            trans.revenue = trans.units_sold * trans.price;
            
            if (trans.isbn == total.isbn){
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            } else {
                // We'll just skip any entries we don't want, rather than failing.
                continue;
            }
        }
        
        std::cout << "Sold " << total.units_sold << " book(s) for " << total.isbn << std::endl;
        std::cout << "Total revenue: " << total.revenue << std::endl;
        std::cout << "Average price: " << total.revenue / total.units_sold << std::endl;
        return 0;
    } else {
        std::cout << "ERROR! No data!" << std::endl;
        return -1;
    }
}

int ex123()
{
    // Count how many transactions occur for an ISBN.
    
    Sales_data sd;
    
    if (std::cin >> sd.isbn >> sd.units_sold >> sd.price){
        Sales_data trans;
        unsigned total_sold = sd.units_sold;
        
        while (std::cin >> trans.isbn >> trans.units_sold >> trans.price){
            if (trans.isbn == sd.isbn) {
                total_sold += trans.units_sold;
            } else {
                std::cout << total_sold << " book(s) sold for " << sd.isbn << std::endl;
                sd.isbn = trans.isbn; sd.units_sold = trans.units_sold; sd.price = trans.price;
                total_sold = sd.units_sold;
            }
        }
        // Output last transaction info.
        std::cout << total_sold << " book(s) sold for " << sd.isbn << std::endl;
        return 0;
    } else {
        std::cout << "ERROR! No data!" << std::endl;
        return -1;
    }
}

int ex125()
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
    return 0;
}

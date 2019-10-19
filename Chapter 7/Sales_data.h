#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

class Sales_data;

Sales_data add(Sales_data const&, Sales_data const&);
std::ostream& print(std::ostream&, Sales_data const&);
std::istream& read(std::istream&, Sales_data&);

class Sales_data {
    friend Sales_data add(Sales_data const&, Sales_data const&);
    friend std::ostream& print(std::ostream&, Sales_data const&);
    friend std::istream& read(std::istream&, Sales_data&);
    
    public:
        Sales_data() = default;
        // Sales_data() : bookNo(""), units_sold(0), revenue(0) {}
        Sales_data(std::string const &s): bookNo(s) {}
        Sales_data(std::string const &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(p*n) {}
            
        Sales_data(std::istream &is) {
            read(is, *this);
        }
    
        std::string isbn() const { return bookNo; }
        Sales_data& combine(Sales_data const&);
        double avg_price() const;
    
    private:
        std::string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;
};


Sales_data add(Sales_data const &lhs, Sales_data const &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::ostream& print(std::ostream &os, Sales_data const &sd) {
    os << sd.isbn() << " " << sd.units_sold << " "
       << sd.revenue << " " << sd.avg_price();
    
    return os;
}

std::istream& read(std::istream &is, Sales_data &sd) {
    double price = 0;
    is >> sd.bookNo >> sd.units_sold >> price;
    sd.revenue = price * sd.units_sold;
    return is;
}


/*
Sales_data::Sales_data(std::istream &is) {
    read(is, *this);
}
*/

Sales_data& Sales_data::combine(Sales_data const &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

inline double Sales_data::avg_price() const {
    return units_sold ? revenue / units_sold : 0;
}
#endif
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

constexpr double latest_rate = 42.0;

class Account {
    public:
        void calculate() { amount += amount * interest_rate; }
        static double rate() { return interest_rate; }
        static void rate(double);
    
    private:
        std::string owner;
        double amount;
        static double interest_rate;
        static double init_rate() { return latest_rate; }
};


double Account::interest_rate = init_rate();

void Account::rate(double new_rate) {
    interest_rate = new_rate;
}
#endif
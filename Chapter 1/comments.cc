#include <iostream>

/*
 *  Simple main function:
 *  Read two numbers and write their sum.
 */
 int main()
 {
     // prompt user to enter two numbers
     std::cout << "Enter two numbers: " << std::endl;
     int v1, v2; // variables to hold user input
     std::cin >> v1 >> v2; // read input
     std::cout << "The sum of " << v1 << " and " << v2
               << " is " << v1 + v2 << std::endl;
    
    // success
    return 0;
 }
 
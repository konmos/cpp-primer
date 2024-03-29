#include <iostream>

int main()
{
    // currVal is thje number we're counting; we'll read new values into val
    int currVal = 0, val = 0;
    
    // Read first number and ensure that we have data to process.
    if (std::cin >> currVal){
        int cnt = 1; // stire the count for the current value we're processing
        while (std::cin >> val){  // read the remaining numbers
            if (val == currVal){  // if the values are the same
                ++cnt;            // add 1 to cnt
            } else {  // otherwise, print the count for the previous value
                std::cout << currVal << " occurs " << cnt
                          << " times " << std::endl;
                currVal = val;      // remember new value
                cnt = 1;            // reset the counter
            }
        }
        // remember to print the count for the last value in the file
        std::cout << currVal << " occurs " << cnt
                  << " times " << std::endl;
    }
    return 0;
}

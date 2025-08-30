#include <iostream>

int main()
{
    int x;
    /*
     * This is an interesting behavior of C++. Uninitialized variables contain
     * whatever garbage value was in the memory address of the variable. So this line prints
     * out a number, and it changes each time the program runs (as it claims a new memory address).
     * I can print out the memory address of the variable by changing it to a reference.
     */
    std::cout << x << '\n';

    double pi { 3.14159 };
    /* 
        Using "\n" is technically more efficient than std::endl
        as endl adds a new line and flushes the buffer for cout. \n simply 
        adds a new line and lets c++ output system flush the buffer manually.
        https://www.learncpp.com/cpp-tutorial/introduction-to-iostream-cout-cin-and-endl/
    */
    std::cout << pi << '\n'; 
    return 0;
}
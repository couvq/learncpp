#include <iostream>

int main() {
    std::cout << "Hello, world!";
    int x;
    /*
     * This is an interesting behavior of C++. Uninitialized variables contain
     * whatever garbage value was in the memory address of the variable. So this line prints
     * out a number and it changes each time the program runs (as it claims a new memory address).
     * I can print out the memory address of the variable by changing it to a reference.
     */
    std::cout << x;
    return 0;
}
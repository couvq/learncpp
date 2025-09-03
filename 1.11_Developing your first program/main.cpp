#include <iostream>

int getInputFromUser()
{
    int input{};
    std::cout << "Enter a number: ";
    std::cin >> input;
    return input;
}

void printSum(int x, int y)
{
    std::cout << "printSum's x and y in memory: " << &x << " " << &y << "\n";
    std::cout << x << " + " << y << " is " << x + y << "\n";
}

void printDifference(int x, int y)
{
    std::cout << x << " - " << y << " is " << x - y << "\n";
}

void sum_and_difference()
{
    int x{getInputFromUser()};
    int y{getInputFromUser()};
    std::cout << "initial x and y in memory: " << &x << " " << &y << "\n";
    printSum(x, y);        // pass by value, value is copied to make local function variables x & y
    printDifference(x, y); // pass by value, value is copied to make local function variables x & y
}

int main()
{
    sum_and_difference();
    return 0;
}
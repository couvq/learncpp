#include <iostream>

void multiply_by_two()
{
    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "Double " << x << " is: " << x * 2 << "\n";
    std::cout << "Triple " << x << " is: " << x * 3 << "\n";
}

void sum_and_difference()
{
    int x{};
    int y{};
    std::cout << "Enter two numbers, separated by spaces: ";
    std::cin >> x >> y;
    std::cout << x << " + " << y << " is " << x + y << "\n";
    std::cout << x << " - " << y << " is " << x - y << "\n";
}

int main()
{
    // multiply_by_two();
    sum_and_difference();
    return 0;
}
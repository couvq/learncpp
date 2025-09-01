#include <iostream>

void multiply_by_two()
{
    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "Double " << x << " is: " << x * 2 << "\n";
    std::cout << "Triple " << x << " is: " << x * 3 << "\n";
}

int main()
{
    multiply_by_two();
}
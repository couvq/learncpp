#include <iostream>

void multiply_by_two()
{
    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "Double that number is: " << x * 2 << "\n";
}

int main()
{
    multiply_by_two();
}
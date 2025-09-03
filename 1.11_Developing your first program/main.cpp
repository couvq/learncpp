#include <iostream>

int getInputFromUser()
{
    int input{};
    std::cout << "Enter a number: ";
    std::cin >> input;
    return input;
}

void sum_and_difference()
{
    int x{getInputFromUser()};
    int y{getInputFromUser()};
    std::cout << x << " + " << y << " is " << x + y << "\n";
    std::cout << x << " - " << y << " is " << x - y << "\n";
}

int main()
{
    sum_and_difference();
    return 0;
}
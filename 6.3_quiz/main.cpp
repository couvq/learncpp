#include <iostream>

int getUserInput()
{
    std::cout << "Please enter a number: ";
    int input{};
    std::cin >> input;
    return input;
}

constexpr bool isEven(int num)
{
    return num % 2 == 0;
}

int main()
{
    int input{getUserInput()};

    if (isEven(input))
    {
        std::cout << input << " is even.\n";
    }
    else
    {
        std::cout << input << " is odd.\n";
    }
    return 0;
}
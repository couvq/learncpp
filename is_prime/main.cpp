#include <iostream>

// determines whether a number is prime or not, assumes that number is a value between 1 and 10
bool isPrime(int number)
{
    return number == 2 || number == 3 || number == 5 || number == 7;
}

int main()
{
    int inputNum{};
    std::cout << "Please enter a number between 1 and 10: ";
    std::cin >> inputNum;
    if (inputNum < 0 || inputNum > 10)
        std::cout << "The number must be between 1 and 10."
                  << "\n";
    else if (isPrime(inputNum))
        std::cout << "The number " << inputNum << " is prime."
                  << "\n";
    else
        std::cout << "The number " << inputNum << " is not prime."
                  << "\n";

    return 0;
}
#include <iostream>
#include <string>

int main()
{
    std::string fullName {};
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, fullName);

    int age {};
    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Your age + length of name is: " << age + std::ssize(fullName) << "\n";
    return 0;
}
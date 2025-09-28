#include <iostream>
#include <string>

int main()
{
    // person1
    std::string person1Name{};
    int person1Age{};
    std::cout << "Enter the name of person #1: ";
    std::getline(std::cin >> std::ws, person1Name);
    std::cout << "Enter the age of " << person1Name << ": ";
    std::cin >> person1Age;

    // person2
    std::string person2Name{};
    int person2Age{};
    std::cout << "Enter the name of person #2: ";
    std::getline(std::cin >> std::ws, person2Name);
    std::cout << "Enter the age of " << person2Name << ": ";
    std::cin >> person2Age;

    if (person1Age > person2Age)
    {
        std::cout << person1Name << " (age " << person1Age << ")"
                  << " is older than " << person2Name << " (age " << person2Age << ").\n";
    }
    else if (person1Age < person2Age)
    {
        std::cout << person2Name << " (age " << person2Age << ")"
                  << " is older than " << person1Name << " (age " << person1Age << ").\n";
    } else {
        std::cout << person1Name << " and " << person2Name << " are the same age (" << person1Age << ").\n";
    }

    return 0;
}
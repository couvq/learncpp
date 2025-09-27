#include <iostream>

int main() {
    char input {};
    std::cout << "Please enter a single character: ";
    std::cin >> input;
    std::cout << "The ascii value of " << input << " is: " << static_cast<int>(input) << "\n";
    return 0;
}
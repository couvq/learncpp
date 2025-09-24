#include <iostream>

int readNumber()
{
    int userInput{};
    std::cout << "Please enter a number: ";
    std::cin >> userInput;
    return userInput;
}

void writeAnswer(int answer) {
    std::cout << "Answer was: " << answer << "\n";
}
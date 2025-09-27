#include <iostream>

double getUserInput()
{
    std::cout << "Enter a double value: ";
    double input{};
    std::cin >> input;
    return input;
}

char getUserOperand()
{
    std::cout << "Enter +, -, *, or /: ";
    char input{};
    std::cin >> input;
    return input;
}

void printResult(double x, double y, char operand)
{
    switch (operand)
    {
    case '+':
        std::cout << x << " + " << y << " is " << x + y << "\n";
        break;
    case '-':
        std::cout << x << " - " << y << " is " << x - y << "\n";
        break;
    case '*':
        std::cout << x << " * " << y << " is " << x * y << "\n";
        break;
    case '/':
        std::cout << x << " / " << y << " is " << x / y << "\n";
        break;
    default:
        break;
    }
}

int main()
{
    double x{getUserInput()};
    double y{getUserInput()};
    char operand{getUserOperand()};
    printResult(x, y, operand);
    return 0;
}
#include <iostream>

double getDouble()
{
    std::cout << "Enter a double value: ";
    double input{};
    std::cin >> input;
    return input;
}

char getOperator()
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
    double x{getDouble()};
    double y{getDouble()};
    char operand{getOperator()};
    printResult(x, y, operand);
    return 0;
}
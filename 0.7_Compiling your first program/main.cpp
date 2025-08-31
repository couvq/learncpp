#include <iostream>

int main()
{
    int x{};
    int y{};
    int z{};

    std::cout << "Enter three numbers: ";
    std::cin >> x >> y >> z;
    std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";
    /* 
        Called a ternary operator because it has three operands.
        1. condition
        2. result if condition is true
        3. result if condition is false
    */
    int res { true == false ? 5 : 10};
    std::cout << res << "\n";
    return 0;
}
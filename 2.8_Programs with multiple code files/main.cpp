#include <iostream>

int add(int x, int y); // forward definition needed so main.cpp knows that add() is a function defined elsewhere

int main()
{
    std::cout << "3 + 4 = " << add(3, 4) << "\n";
    return 0;
}
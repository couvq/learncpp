#include <iostream>

int getNumberFromUser()
{
    int input{};
    std::cin >> input;
    return input;
}

int main()
{
    std::cout << "Enter an integer: ";
    int smaller {getNumberFromUser()};
    std::cout << "Enter a larger integer: ";
    int larger {getNumberFromUser()};

    if(smaller > larger) {
        std::cout << "Swapping the values\n";
        int temp {smaller};
        smaller = larger;
        larger = temp;
    } // temp is destroyed here as it goes out of scope

    std::cout << "The smaller value is " << smaller << "\n";
    std::cout << "The larger value is " << larger << "\n";
    return 0;
} // smaller and larger go out of scope here and are destroyed
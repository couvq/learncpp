#include <iostream>

std::string getQuantityPhrase(int quantity)
{
    if (quantity < 0)
    {
        return "negative";
    }
    else if (quantity == 0)
    {
        return "no";
    }
    else if (quantity == 1)
    {
        return "a single";
    }
    else if (quantity == 2)
    {
        return "a couple of";
    }
    else if (quantity == 3)
    {
        return "a few";
    }
    else
    {
        return "many";
    }
}

std::string getApplesPluralized(int numApples)
{
    return (numApples == 1) ? "apple" : "apples";
}

int main()
{
    constexpr int maryApples{3};
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
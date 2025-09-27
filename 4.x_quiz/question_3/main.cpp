#include <iostream>
#include <vector>

int getHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    int height{}; // m
    std::cin >> height;
    return height;
}

void printDistanceFallen(int initialHeight, int deltaTime)
{
    double gravityConstant{9.8};                                        // m/s^2
    double distanceFallen{gravityConstant * deltaTime * deltaTime / 2}; // m
    double heightRemaining{initialHeight - distanceFallen};             // m
    if (distanceFallen >= initialHeight)
    {
        std::cout << "At " << deltaTime << " seconds, the ball is on the ground.\n";
    }
    else
    {
        std::cout << "At " << deltaTime << " seconds, the ball is at height: " << heightRemaining << " meters.\n";
    }
}

int main()
{
    int initialHeight{getHeight()};
    std::vector<int> deltaTimes = {0, 1, 2, 3, 4, 5};
    for (int deltaTime : deltaTimes)
    {
        printDistanceFallen(initialHeight, deltaTime);
    }
    return 0;
}
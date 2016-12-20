#include <iostream>

int main()
{
    while (std::cin)
    {
        std::cout << "How many pennies do you have?" << std::endl;
        int pennies = 0;
        std::cin >> pennies;
        std::cout << "How many nickels do you have?" << std::endl;
        int nickels = 0;
        std::cin >> nickels;
        std::cout << "How many dimes do you have?" << std::endl;
        int dimes = 0;
        std::cin >> dimes;
        std::cout << "How many quarters do you have?" << std::endl;
        int quarters = 0;
        std::cin >> quarters;
        std::cout << "How many half dollars do you have?" << std::endl;
        int half_dollars = 0;
        std::cin >> half_dollars;
        std::cout << "How many one-dollar coins do you have?" << std::endl;
        int one_dollars = 0;
        std::cin >> one_dollars;

        if (0 != pennies)
            std::cout << "You have " << pennies << " penn"
                << (pennies > 1 ? "ies." : "y.") << std::endl;
        if (0 != nickels)
            std::cout << "You have " << nickels << " nickel" 
                << (nickels > 1 ? "s." : ".") << std::endl;
        if (0 != dimes)
            std::cout << "You have " << dimes << " dime" 
                << (dimes > 1 ? "s." : ".") << std::endl;
        if (0 != quarters)
            std::cout << "You have " << quarters << " quarter"
                << (quarters > 1 ? "s." : ".") << std::endl;
        if (0 != half_dollars)
            std::cout << "You have " << half_dollars << " half dollar"
                << (half_dollars > 1 ? "s." : ".") << std::endl;
        if (0 != one_dollars)
            std::cout << "You have " << one_dollars << " one dollar"
                << (one_dollars > 1 ? "s." : ".") << std::endl;

        int value = pennies
            + 5 * nickels
            + 10 * dimes
            + 25 * quarters
            + 50 * half_dollars
            + 100 * one_dollars;
        std::cout << "The value of all of your coins is $" << value / 100.0
            << " (" << value << " cents)." << std::endl;
    }
}
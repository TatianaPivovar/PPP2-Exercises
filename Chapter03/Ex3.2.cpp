#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter a number of miles:" << std::endl;
    double miles = 0;
    while (std::cin >> miles) {
        std::cout << "There are " << 1.609*miles << " kilometers in "
            << miles << " miles." << std::endl;
    }
}
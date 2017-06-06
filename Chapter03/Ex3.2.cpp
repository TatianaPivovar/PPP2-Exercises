/*
Write a program in C++ that converts from miles to kilometers. Your program
should have a reasonable prompt for the user to enter a number of miles.
Hint: There are 1.609 kilometers to the mile
*/

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

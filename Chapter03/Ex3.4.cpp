/*
Write a program that prompts the user to enter two integer values. Store these
values in int variables named val1 and val2. Write your program to determine
the smaller, larger, sum, difference, product, and ratio of these values and
report them to the user.
*/

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter two integer values:" << std::endl;
    int val1 = 0, val2 = 0;
    std::cin >> val1 >> val2;
    if (val1 < val2) {
        std::cout << "Min: " << val1 << std::endl;
        std::cout << "Max: " << val2 << std::endl;
    }
    else {
        std::cout << "Min: " << val2 << std::endl;
        std::cout << "Max: " << val1 << std::endl;
    }
    std::cout << "Sum: " << val1 + val2 << std::endl;
    std::cout << "Dif: " << val2 - val1 << std::endl;
    std::cout << "Mul: " << val1 * val2 << std::endl;
    if (val2 == 0)
        std::cerr << "Division by zero is not allowed" << std::endl;
    else
        std::cout << "Div: " << val1 / val2 << std::endl;
}

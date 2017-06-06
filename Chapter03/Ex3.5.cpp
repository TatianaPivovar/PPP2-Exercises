/*
Modify the program 3.4 to ask the user to enter floating-point values and store
them in double variables. Compare the outputs of the two programs for some
inputs of your choice. Are the results the same? Should they be?
What’s the difference?
*/

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter two double values:" << std::endl;
    double val1 = 0, val2 = 0;
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

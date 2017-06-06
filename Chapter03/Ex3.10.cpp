/*
Write a program that takes an operation followed by two operands and outputs
the result. For example:
    + 100 3.14
    * 4 5
Read the operation into a string called "operation" and use an "if"-statement
to figure out which operation the user wants, for example, if (operation=="+").
Read the operands into variables of type double. Implement this for operations
called +, –, *, /, plus, minus, mul, and div with their obvious meanings.
*/

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter an operation followed by two operands:" << std::endl;
    std::string operation;
    double op1 = 0, op2 = 0;
    while (std::cin) {
        std::cin >> operation;
        if ("q" == operation || "qiut" == operation)
            return 0;

        std::cin >> op1 >> op2;
        if ("+" == operation || "plus" == operation)
            std::cout << op1 + op2 << std::endl;
        else if ("-" == operation || "minus" == operation)
            std::cout << op1 - op2 << std::endl;
        else if ("*" == operation || "mul" == operation)
            std::cout << op1 * op2 << std::endl;
        else if ("/" == operation || "div" == operation) {
            if (op2 == 0)
                std::cerr << "division by zero" << std::endl;
            else
                std::cout << op1 / op2 << std::endl;
        }
        else
            std::cout << "unknown operation." << std::endl;
    }
}

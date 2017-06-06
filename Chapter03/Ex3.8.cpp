/*
Write a program to test an integer value to determine if it is odd or even.
As always, make sure your output is clear and complete. In other words,
don’t just output yes or no. Your output should stand alone, like "The value 4
is an even number". Hint: See the remainder (modulo) operator in §3.4
*/

#include <iostream>

int main()
{
    while (std::cin)
    {
        std::cout << "Enter an integer value:" << std::endl;
        int val = 0;
        std::cin >> val;
        std::cout << "The value " << val << " is an " 
            << (val & 1 ? "odd " : "even ") << "number." << std::endl;
    }
    return 0;
}

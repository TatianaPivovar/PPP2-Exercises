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

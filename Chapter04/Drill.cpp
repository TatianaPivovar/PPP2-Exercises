#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "Please enter two integer values (enter '|' to exit):" << std::endl;
    std::cout << ">";
    while ((std::cin >> v1) && (std::cin >> v2)) {
        std::cout << v1 << " " << v2 << std::endl;
        std::cout << ">";
    }
    return 0;
} 

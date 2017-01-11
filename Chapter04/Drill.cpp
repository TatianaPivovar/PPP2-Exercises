#include <iostream>

int main()
{
    double v1 = 0, v2 = 0;
    std::cout << "Please enter two integer values (enter '|' to exit):" << std::endl;
    std::cout << ">";
    while ((std::cin >> v1) && (std::cin >> v2)) {
		if (v1 < v2) {
			std::cout << "the smaller value is: " << v1 << std::endl;
			std::cout << "the  larger value is: " << v2 << std::endl;
		}
		else if (v2 < v1) {
			std::cout << "the smaller value is: " << v2 << std::endl;
			std::cout << "the  larger value is: " << v1 << std::endl;
		}
		else {
			std::cout << "the numbers are equal" << std::endl;
		}
        std::cout << ">";
    }
    return 0;
} 

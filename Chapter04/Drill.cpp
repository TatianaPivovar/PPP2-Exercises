#include <iostream>

void print_ordered(double v1, double v2)
{
	std::cout << "the smaller value is: " << v1 << std::endl;
	std::cout << "the  larger value is: " << v2 << std::endl;
}

int main()
{
    double v1 = 0, v2 = 0;
    std::cout << "Please enter two integer values (enter '|' to exit):" << std::endl;
    std::cout << ">";
    while ((std::cin >> v1) && (std::cin >> v2)) {
		if (v1 < v2) {
			print_ordered(v1, v2);
		}
		else if (v2 < v1) {
			print_ordered(v2, v1);
		}
		else {
			std::cout << "the numbers are equal" << std::endl;
		}
        std::cout << ">";
    }
    return 0;
} 

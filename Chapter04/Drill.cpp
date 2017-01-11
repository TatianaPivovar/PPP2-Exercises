#include <iostream>
#include <limits>

int main()
{
    std::cout << "Please enter two integer values (enter '|' to exit):" << std::endl;
    std::cout << ">";
	double input = 0;
	double smallest = std::numeric_limits<double>::max();
	double largest = std::numeric_limits<double>::min();
    while ((std::cin >> input)) {
		std::cout << "Entered: " << input;
		if (input < smallest) {
			std::cout << " the smallest so far";
			smallest = input;
		}
		if (input > largest) {
			std::cout << " the largest so far";
			largest = input;
		}
        std::cout << std::endl << ">";
    }
    return 0;
} 

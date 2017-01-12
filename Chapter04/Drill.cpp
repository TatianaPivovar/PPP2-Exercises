#include <iostream>
#include <limits>
#include <string>

int main()
{
    std::cout << "Please enter a length followed by a unit (cm, m, in, ft or  '|' to exit):" << std::endl;
    std::cout << ">";
	double input = 0;
	double smallest = std::numeric_limits<double>::max();
	double largest = std::numeric_limits<double>::min();
	std::string unit;
    while ((std::cin >> input) && (std::cin >> unit)) {
		std::cout << "Entered: " << input << unit;

		if (unit == "cm") {
			;
		}
		else if (unit == "m") {
			std::cout << " = " << 100 * input << "cm";
		}
		else if (unit == "in") {
			std::cout << " = " << 2.54 * input << "cm";
		}
		else if (unit == "ft") {
			std::cout << " = " << 12 * input << "in";
		}
		else {}

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

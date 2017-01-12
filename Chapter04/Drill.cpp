#include <iostream>
#include <limits>
#include <string>

int main()
{
    std::cout << "Please enter a length followed by a unit (cm, m, in, ft or  '|' to exit):" << std::endl;
    std::cout << ">";
	double value = 0;
	double smallest = std::numeric_limits<double>::max();
	double largest = std::numeric_limits<double>::min();
	std::string unit;
    while ((std::cin >> value) && (std::cin >> unit)) {
		std::cout << "Entered: " << value << unit;

		if (unit == "cm") {
			;
		}
		else if (unit == "m") {
			std::cout << " = " << 100 * value << "cm";
		}
		else if (unit == "in") {
			std::cout << " = " << 2.54 * value << "cm";
		}
		else if (unit == "ft") {
			std::cout << " = " << 12 * value << "in";
		}
		else {
			std::cout << std::endl;
			std::cout << "Sorry, I don't know a unit called '" << unit << '\'';
			std::cout << std::endl << ">";
			continue;
		}

		if (value < smallest) {
			std::cout << " the smallest so far";
			smallest = value;
		}
		if (value > largest) {
			std::cout << " the largest so far";
			largest = value;
		}
        std::cout << std::endl << ">";
    }
    return 0;
} 

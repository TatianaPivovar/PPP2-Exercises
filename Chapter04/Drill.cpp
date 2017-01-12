#include <iostream>
#include <limits>
#include <string>

int main()
{
    std::cout << "Please enter a length followed by a unit (cm, m, in, ft or  '|' to exit):" << std::endl;
    std::cout << ">";
	double value = 0;
	double sum = 0;
	int count = 0;
	double smallest = std::numeric_limits<double>::max();
	double largest = std::numeric_limits<double>::min();
	std::string unit;
    while ((std::cin >> value) && (std::cin >> unit)) {
		std::cout << "Entered: " << value << unit;

		if (unit == "cm") {
			value *= 0.01;
		}
		else if (unit == "m") {
		}
		else if (unit == "in") {
			value *= 0.0254;
		}
		else if (unit == "ft") {
			value *= (12 * 2.54 * 0.01);
		}
		else {
			std::cout << std::endl;
			std::cout << "Sorry, I don't know a unit called '" << unit << '\'';
			std::cout << std::endl << ">";
			continue;
		}
		std::cout << " = " << value << "m";
		sum += value;
		++count;

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
	std::cout << "The smallest: " << smallest << 'm' << std::endl;
	std::cout << "The largest:  " << largest << 'm' << std::endl;
	std::cout << "The number of values: " << count << std::endl;
	std::cout << "The sum: " << sum << 'm' << std::endl;
    return 0;
} 

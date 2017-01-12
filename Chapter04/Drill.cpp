#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

int main()
{
	std::cout << "Please enter a length followed by a unit (cm, m, in, ft or  '|' to exit):" << std::endl;
	std::cout << ">";
	std::vector<double> values;
	double value = 0;
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
		values.push_back(value);
		std::cout << std::endl << ">";
	}
	std::cout << "The smallest: " << *std::min_element(values.begin(), values.end()) << 'm' << std::endl;
	std::cout << "The largest:  " << *std::max_element(values.begin(), values.end()) << 'm' << std::endl;
	std::cout << "The number of values: " << values.size() << std::endl;
	std::cout << "The sum: " << std::accumulate(values.begin(), values.end(), 0.0) << 'm' << std::endl;
	return 0;
}

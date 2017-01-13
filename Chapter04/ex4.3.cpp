#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main()
{
	std::cout << "Please enter a sequence of distances between two cities along a given route" << std::endl
              << "(double value or '|' to exit):" << std::endl;
	std::cout << ">";

	std::vector<double> values;

	double value = 0;
	while (std::cin >> value)
		values.push_back(value);

	std::sort(values.begin(), values.end());

	std::cout << "The smallest distance between two cities: "
              << *std::min_element(values.begin(), values.end()) << std::endl;
	std::cout << "The largest distance between two cities: "
              << *std::max_element(values.begin(), values.end()) << std::endl;
	std::cout << "The mean distance between two cities: "
              << std::accumulate(values.begin(), values.end(), 0.0) / values.size() << std::endl;
	return 0;
}

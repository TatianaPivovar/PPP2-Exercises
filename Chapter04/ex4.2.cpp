/*
If we define the median of a sequence as “a number so that exactly as many
elements come before it in the sequence as come after it,” fix the program
in §4.6.3 so that it always prints out a median. Hint: A median need not be
an element of the sequence.
*/

#include <algorithm>
#include <iostream>
#include <vector>
// compute mean and median temperatures
int main()
{
    std::vector<double> temps;        // temperatures
    double temp;
    while (std::cin >> temp)            // read 
        temps.push_back(temp);   // put into vector

    // compute mean temperature:
    double sum = 0;
    for (int i = 0; i< temps.size(); ++i) sum += temps[i];
    std::cout << "Average temperature: " << sum/temps.size() << std::endl;

    // compute median temperature:
    std::sort(temps.begin(),temps.end()); // sort temps
    // "from the beginning to the end."
	int middle = temps.size() / 2;
	double median = temps.size() & 1
					? temps[middle]
					: (temps[middle - 1] + temps[middle]) / 2;
    std::cout << "Median temperature: " << median << std::endl;
}

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>>

int main()
{
    // as expected in exercise
    std::cout << "Enter three string values:" << std::endl;
    std::string val1, val2, val3;
    std::cin >> val1 >> val2 >> val3;
    std::string min, mid, max;
    if (val1 <= val2 && val1 <= val3) {
        min = val1;
        if (val2 <= val3) {
            mid = val2;
            max = val3;
        }
        else {
            mid = val3;
            max = val2;
        }
    }
    else if (val2 <= val1 && val2 <= val3) {
        min = val2;
        if (val1 <= val3) {
            mid = val1;
            max = val3;
        }
        else {
            mid = val3;
            max = val1;
        }
    }
    else {
        min = val3;
        if (val1 <= val2) {
            mid = val1;
            max = val2;
        }
        else {
            mid = val2;
            max = val1;
        }
    }
    std::cout << min << ", " << mid << ", " << max << std::endl;
}

void another_variant()
{
    std::cout << "Enter three string values:" << std::endl;
    std::string buf;
    std::vector<std::string> values;
    while (std::cin && values.size() < 3) {
        std::cin >> buf;
        values.push_back(buf);
    }
    std::sort(values.begin(), values.end());
    for (auto &val : values) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

#include <iostream>
#include <vector>
#include <algorithm>>

int main()
{
    // as expected in exercise
    std::cout << "Enter three integer values:" << std::endl;
    int val1 = 0, val2 = 0, val3 = 0;
    std::cin >> val1 >> val2 >> val3;
    int min = 0, mid = 0, max = 0;
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
    std::cout << "Enter three integer values:" << std::endl;
    int buf = 0;
    std::vector<int> values;
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

/*
Write a program that converts spelled-out numbers such as "zero" and "two" into
digits, such as 0 and 2. When the user inputs a number, the program should
print out the corresponding digit. Do it for the values 0, 1, 2, 3, and 4 and
write out "not a number I know" if the user enters something that
doesn’t correspond, such as "stupid computer!".
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::cout << "Enter the digit in writing ('zero' or 'two'):" << std::endl;

    std::string repr;
    while (std::cin >> repr)
    {
        if (repr == "zero") std::cout << 0;
        else if (repr == "one") std::cout << 1;
        else if (repr == "two") std::cout << 2;
        else if (repr == "three") std::cout << 3;
        else if (repr == "four") std::cout << 4;
        else if (repr == "five") std::cout << 5;
        else if (repr == "six") std::cout << 6;
        else if (repr == "seven") std::cout << 7;
        else if (repr == "eight") std::cout << 8;
        else if (repr == "nine") std::cout << 9;
        else std::cout << "not a number I know";
        std::cout << std::endl;
    }
}

void another_variant()
{
    std::cout << "Enter the digit in writing ('zero' or 'two'):" << std::endl;
    std::vector<std::string> digits { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    while (std::cin) {
        std::string repr;
        std::cin >> repr;
        int i = 0;
        while (i < digits.size() && digits[i] != repr) ++i;
        if (i >= digits.size()) std::cout << "not a number I know" << std::endl;
        else std::cout << i << std::endl;
    }
}

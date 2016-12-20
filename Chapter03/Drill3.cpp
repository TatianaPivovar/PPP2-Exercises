#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter the name of the person you want to write to:" << std::endl;
    std::string first_name;
    std::cin >> first_name;
    std::cout << "Dear " << first_name << ',' << std::endl;
    std::cout << "How are you? I an fine. I miss you." << std::endl;
    std::cout << "I am reading the book about programming. It's pretty good."
        << " And I will try to execute all exercises in this book." << std::endl;
}

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter the name of the person you want to write to:" << std::endl;
    std::string first_name;
    std::cin >> first_name;

    std::cout << "Enter the age of the recipient:" << std::endl;
    int age = 0;
    std::cin >> age;
    if (age <= 0 || age >= 110) {
        std::cerr << "You're kidding!" << std::endl;
        exit(1);
    }

    std::cout << "Enter the name of another person:" << std::endl;
    std::string friend_name;
    std::cin >> friend_name;

    std::cout << "Is your friend is male or female? (enter 'm' or 'f'):" << std::endl;
    char friend_sex = 0;
    std::cin >> friend_sex;


    std::cout << "Dear " << first_name << ',' << std::endl;
    std::cout << "How are you? I an fine. I miss you." << std::endl;
    std::cout << "I am reading the book about programming. It's pretty good."
        << " And I will try to execute all exercises in this book." << std::endl;
    std::cout << "Have you seen " << friend_name << " lately?" << std::endl;
    std::cout << "If you see " << friend_name << " please ask ";
    if (friend_sex == 'm')
        std::cout << "him ";
    else if (friend_sex == 'f')
        std::cout << "her ";
    else
        std::cout << "it ";
    std::cout << "to call me." << std::endl;
    std::cout << "I hear you just had a birthday and you are "
        << age << " years old." << std::endl;
    if (age < 12)
        std::cout << "Next year you will be " << age + 1 << '.' << std::endl;
    else if (age == 17)
        std::cout << "Next year you will be able to vote." << std::endl;
    else if (age > 70)
        std::cout << "I hope you are enjoying retirement." << std::endl;

    std::cout << "Yours sincerely," << std::endl
        << std::endl << std::endl
        << "Tatiana" << std::endl;
}

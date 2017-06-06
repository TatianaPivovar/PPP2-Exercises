/*
Write a program to play a numbers guessing game. The user thinks of a number
between 1 and 100 and your program asks questions to figure out what the number
is (e.g., "Is the number you are thinking of less than 50?"). Your program
should be able to identify the number after asking no more than seven questions.
Hint: Use the < and <= operators and the if-else construct
*/

#include <iostream>
int main()
{
    int min = 1, max = 100, guess = min + (max - min) / 2;
	std::cout << "Think of a number between " << min << " and " << max << ":" << std::endl;
    char choice = ' ';
    int count = 1;
    while (max - min > 0) {
        guess = min + (max - min) / 2;
        std::cout << count++ << ". ";
        std::cout << "Is your number less than " << guess << "? ('l'(less), 'g'(great) or 'e'(equal)" << std::endl;
        std::cin >> choice;
        switch(choice){
        case 'l':
            max = guess;
            break;
        case 'g':
            min = guess;
            break;
        case 'e':
            std::cout << "Yipee! I guessed!" << std::endl;
            std::cout << "Your number is " << guess << std::endl;
            return 0;
        default:
            std::cout << "Sorry I don't understand your choice '" << choice << '\'' << std::endl;
            std::cout << "Please repeate your choice." << std::endl;
            break;
        }
        std::cout << min << ' ' << guess << ' ' << max << std::endl;
    }
    std::cout << "Your number is " << guess << std::endl;
}

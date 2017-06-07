/*
Make a vector holding the ten string values "zero", "one", .. "nine". Use that
in a program that converts a digit to its corresponding spelled out value;
e.g., the input 7 gives the output "seven". Have the same program, using
the same input loop, convert spelled out numbers into their digit form; e.g.,
the input "seven" gives the output 7.
*/

#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>

using namespace std;

int main()
try
{
    vector<string> numbers;
    
    numbers.push_back("zero");
    numbers.push_back("one");
    numbers.push_back("two");
    numbers.push_back("three");
    numbers.push_back("four");
    numbers.push_back("five");
    numbers.push_back("six");
    numbers.push_back("seven");
    numbers.push_back("eight");
    numbers.push_back("nine");
    numbers.push_back("ten");    // why not? :-)

    const int not_a_symbol = numbers.size();    // not_a_symbol is a value that does not correspond
                                                // to a string in the numbers vector
    cout << "Please enter a digit or q/quit/exit to exit:" << endl;
    
    while (true) {    // "forever"; that is until we give an unacceptable input or make a computations error
        int val = not_a_symbol;
        if (cin >> val) { // try to read an integer composed of digits
            if (val < not_a_symbol) {
                cout << numbers[val] << endl;
            }
            else {
                throw runtime_error("unexpected number " + to_string(val));
            }
        }
        else {
            cin.clear();    // clear string after failed attempt to read an integer
            string s;
            cin >> s;
            if ("quit" == s || "exit" == s || "q" == s)
                return 0;
            val = not_a_symbol;
            for (int i = 0; i < numbers.size(); ++i)    // see if the string is in numbers
                if (numbers[i] == s) val = i;
            if (val == not_a_symbol) {
                throw runtime_error("unexpected number string: " + s);
            }
            else {
                cout << val << endl;
            }
        }

        cout << "Try again: ";
    }
}
catch (runtime_error e) {    // this code is to produce error messages; it will be described in Chapter 5
    cout << e.what() << '\n';
}
catch (...) {    // this code is to produce error messages; it will be described in Chapter 5
    cout << "exiting\n";
}

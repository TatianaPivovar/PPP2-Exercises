/*
Modify the "mini calculator" from exercise 4.5 to accept (just) single-digit
numbers written as either digits or spelled out.
*/

#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

/*
    the problem here is to handle numbers written out using letters as well as numbers written using digits, e.g.
        2 + two
        two + 2
        two + five
        2 + 5
    The basic idea for a solution is to try to read integers (as in exercise 5)
    and if that doesn't work (the input operation fails) try reading a string
    and see if that string represents a number (e.g. "nine").

    You will note that a space after a number expressed as a letter is essential:
        two+ 3
    will not work because the string read will also read the +

    The solution uses two functions (in addition to main():
        initialize_numbers() to initialize the vector of number string representations
        get_number() to read a number that is either a string or a sequence of digits
*/

vector<string> numbers;    // representation of numbers as strings
                        // numbers[i] is the string representation for i
                        // for numbers[0] to numbers[numbers.size()-1]

void initialize_numbers()
{
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
}

int get_number()
/*
    An apology: To use cin again after a failed read, you need to use a function call "cin.clear();" to "clear" it.
    That isn't explained in the book until chapter 10. Sorry.

    Solutions that do not use this technique can get very complicated.
*/
{
    const int not_a_symbol = numbers.size();    // not_a_symbol is a value that does not correspond
                                                // to a string in the numbers vector
    int val = not_a_symbol;
    if (cin >> val) return val; // try to read an integer composed of digits

    val = not_a_symbol;
    cin.clear();    // clear string after failed attempt to read an integer
    string s;
    cin >> s;
    //if ("quit" == s || "exit" == s || "q" == s)
    //    return -1;
    for (int i = 0; i < numbers.size(); ++i)    // see if the string is in numbers
        if (numbers[i] == s) val = i;
    if (val == not_a_symbol) throw runtime_error("unexpected number string: " + s);
    return val;
}

int main()
try
{
    initialize_numbers();

    cout << "please enter two digits separated by an operator\n The operator can be + - * / % : ";
    
    while (true) {    // "forever"; that is until we give an unacceptable input or make a computations error
        int val1 = get_number();

        char op = 0;
        cin >> op; // get the operator
        
        int val2 = get_number();

        string oper;    // text appropriate for an operator
        double result;

        switch (op) {
        case '+':
            oper = "The sum of ";
            result = val1 + val2; 
            break;
        case '-':
            oper = "The difference between ";
            result = val1 - val2; 
            break;
        case '*':
            oper = "The product of ";
            result = val1 * val2; 
            break;
        case '/':
            oper = "The ratio of ";
            if (val2 == 0) throw runtime_error("Trying to divide by zero");
            result = val1 / val2; 
            break;
        case '%':
            oper = "The remainder of ";
            if (val2 == 0) throw runtime_error("Trying to divide by zero (%)");
            result = val1 % val2;
            break;
        default:
            throw runtime_error("Bad operator");
        }
        cout << oper << val1 << " and " << val2 << " is " << result << '\n';
        cout << "Try again: ";
    }
}
catch (runtime_error e) {    // this code is to produce error messages; it will be described in Chapter 5
    cout << e.what() << endl;
}
catch (...) {    // this code is to produce error messages; it will be described in Chapter 5
    cout << "exiting" << endl;
}

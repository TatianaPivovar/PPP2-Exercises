/*
Write a program that performs as a very simple calculator. Your calculator
should be able to handle the four basic math operations — add, subtract,
multiply, and divide — on two input values. Your program should prompt the user
to enter three arguments: two double values and a character to represent
an operation. If the entry arguments are 35.6, 24.1, and '+', the program
output should be "The sum of 35.6 and 24.1 is 59.7". In Chapter 6 we look at
a much more sophisticated simple calculator.
*/

#include <iostream>
#include <stdexcept>

using namespace std;

int main()
try
{
    cout << "Please enter two floating-point values separated by an operator" << endl;
	cout << "The operator can be + - * or / : " << endl;
    double val1 = 0;
    double val2 = 0;
    char op = 0;
    while (cin >> val1 >> op >> val2) {    // read number operation number
        string oper;
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
            if (val2 == 0) throw runtime_error("Trying to divide by zero");
            oper = "The ratio of ";
            result = val1 / val2; 
            break;
        //case '%':
        //    oper = "The remainder of ";
        //    result = val1 % val2; 
        //    break;
        default:
            throw runtime_error("Bad operator");
        }
        cout << oper << val1 << " and " << val2 << " is " << result << endl;
        cout << "Try again: ";
    }
}
catch (runtime_error e) {    // this code is to produce error messages
    cout << e.what() << endl;
}
catch (...) {    // this code is to produce error messages
    cout << "Exiting" << endl;
}

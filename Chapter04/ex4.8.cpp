/*
There is an old story that the emperor wanted to thank the inventor of the game
of chess and asked the inventor to name his reward. The inventor asked for one
grain of rice for the first square, 2 for the second, 4 for the third, and so on,
doubling for each of the 64 squares. That may sound modest, but there wasn’t that
much rice in the empire! Write a program to calculate how many squares are required
to give the inventor at least 1000 grains of rice, at least 1,000,000 grains,
and at least 1,000,000,000 grains.
You’ll need a loop, of course, and probably an int to keep track of which square
you are at, an int to keep the number of grains on the current square, and
an int to keep track of the grains on all previous squares. We suggest that you
write out the value of all your variables for each iteration of the loop so
that you can see what’s going on.
*/

#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

int main()
try
{
    long double desired; // to be able to input big numbers
    while (true) {
        cout << "Please enter the desired amount of grains : ";
        if (!(cin >> desired)) { 
            cin.clear();
            string input;
            cin >> input;
            if ("q" == input || "quit" == input || "exit" == input)
                return 0;
            cout << "Unknown input: " << input << endl;
            cout << "Please try again" << endl;
        }
        else if (desired < 0) { // amount of grains cannot be negative (my assumption)
            cout << "Incorrect input: " << desired << endl;
            cout << "Please try again" << endl;
        }
        else {
            // number of grains == sum(2^i), i = 0 to n (by the story n = 1 to 64)
            // sum(2^i), i = 0 to n == 2^(n+1) - 1
            // number of grains must be great or equal desired number of grains
            // number of grains >= desired
            // 2^(n+1) - 1 >= desired
            // 2^(n+1) >= desired + 1
            // log2(2^(n+1)) >= log2(desired + 1)
            // log2(2*2^n) >= log2(desired + 1)
            // 1 + log2(2^n) >= log2(desired + 1)
            // log2(2^n) >= log2(desired + 1) - 1
            // n >= log2(desired + 1) - 1
            // and final: we just calculated power of 2. On the first ceil number of grains is 1 == 2^0
            // on the second 2 == 2^1, third 4 == 2^2, etc. so we must increase n by 1
            // n >= log2(desired + 1)
            int number_of_cells = ceil(log2(desired + 1));
            cout << "You need at least " << number_of_cells << " squares to fill" << endl;
        }
    }
}
catch (runtime_error e) {    // this code is to produce error messages; it will be described in Chapter 5
    cout << e.what() << endl;
}
catch (...) {    // this code is to produce error messages; it will be described in Chapter 5
    cout << "exiting" << endl;
}

#include <iostream>
#include <stdexcept>
#include <string>
#include "finder.h"

using namespace std;

int main()
{
    cout << "Factorial base number: ";
    int baseNumber;
    string input;
    cin >> input;
    try {
        baseNumber = stoi(input);
        if(baseNumber < 0) {
            throw invalid_argument("Negative integer");
        }
    }
    catch (invalid_argument& ia) {
        cout << input << " is not a positive integer number"  << endl;
        return -1;
    }
    cout << "Number read from input stream: " << baseNumber << endl;
    cout << "Factorial of number above is: " << factorialByLoop(baseNumber) << endl;

    return 0;
}

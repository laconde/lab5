// This program has the user input a number n and then finds the
// mean of the first n positive integers

// Alberto Conde
// September 20, 2020

#include <iostream>
using namespace std;

int main()
{
    int value;        // value is some positive number n
    int total = 0;    // total holds the sum of the first n positive numbers
    int number;        // the amount of numbers
    float mean;        // the average of the first n positive numbers

    cout << "Please enter a positive integer" << endl;
    cin >> value;

    if (value > 0)
    {
        for (number = 1; number <= value; number++)
        {
            total = total + number;
        }    // curly braces are optional since there is only one statement

        mean = static_cast<float>(total) / value;    // note the use of the typecast
                                                    // operator here
        cout << "The mean average of the first " << value
             << " positive integers is " << mean << endl;
    }

    else
        cout << "Invalid input - integer must be positive" << endl;

    return 0;
}

// If you enter a float such as 2.99, the input will take it as a 2. It will sum 1+2 and divide it by 2. Getting 1.5 as the result and output.


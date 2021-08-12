// This program has the user input a number n and then finds the
// mean of the first n positive integers

// Alberto Conde
// September 20, 2020

#include <iostream>
using namespace std;

int main()
{
    int value;        // value is some positive number n
    int value2;
    int total = 0;    // total holds the sum of the first n positive numbers
    float mean;        // the average of the first n positive numbers
    int x;
    int y;

    cout << "Please enter a two positive integer to compute the mean of the consecutive positive integer" << endl;
    cin >> value;
    cout << "";
    cin >> value2;

    if (value > 0 && value2 > 0)
    {
        for (x = value, y = value2; value <= value2; value++)
        {
            total = value + total
            ;
        }    // curly braces are optional since there is only one statement

        
        mean = static_cast<float>(total) / (y-x+1);    // note the use of the typecast
                                                    // operator here
        cout << "The mean of the consecutive positive integers from " << x
             << " to " << y << " is " << mean << endl;
    }

    else
        cout << "Invalid input - integer must be positive" << endl;

    return 0;
}

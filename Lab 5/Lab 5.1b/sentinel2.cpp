// This program illustrates the use of a sentinel in a while loop.
// The user is asked for monthly rainfall totals until a sentinel
// value of -1 is entered. Then the total rainfall is displayed.

// Alberto Conde
// September 18, 2020

#include <iostream>
using namespace std;

int main()
{
    // Fill in the code to define and initialize to 1 the variable month

    float total = 0, rain;
    int month = 1;

    cout << "Enter the total rainfall for month " << month << endl;
    cout << "Enter -1 when you are finished" << endl;
    cin >> rain;

    while(rain != -1)
    {
        total+=rain;
        month++;
        
        cout << "Enter the total rainfall in inches for month "
             << month << endl;
        cout << "Enter -1 when you are finished" << endl;
        cin >> rain;

    }

    if (month == 1)
        cout << "No data has been entered" << endl;

    else
        cout << "The total rainfall for the " << month - 1
             << " months is " << total << " inches." << endl;

    return 0;
}


// If I enter -1 first, the program will tell me "No data has been entered." If I enter values of 0, nothing will go wrong in the program. My total rainfall will just not go up. The input can be either positive or negative (although you should not input negative rainfall). You can also input floating numbers. 

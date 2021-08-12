// Alberto Conde
// September 16, 2020

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char letter;
    do
    {
        cout << "Please enter a letter\n";
        cout << "Enter 'y' to exit the program\n";
        cin >> letter;
    
        cout << "The letter you entered is " << letter << endl;
    } while (letter != 'y');
    return 0;
}

// When you replace it with a do-while loop, the do-while performs the first iteration even when the expression is false.


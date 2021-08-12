// Alberto Conde
// September 16, 2020

#include <iostream>
using namespace std;

int main()
{
    char letter = 'a';
    
    while (letter != 'z')
    {
        cout << "Please enter a letter, to end the program enter 'z'" << endl;
        cin >> letter;

        cout << "The letter you entered is " << letter << endl;
    }

    return 0;
}

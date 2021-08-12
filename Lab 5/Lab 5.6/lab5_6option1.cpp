// Write a program that performs a survey tally on beverages.

// Alberto Conde
// September 24, 2020

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "1. Coffee\n2. Tea\n3. Coke\n4. Orange Juice\n ";
    
    float number = 0.0;
    int people = 1;
    int total1 = 0,total2 = 0,total3 = 0,total4 = 0;
    
    while(number != -1)
    {
        cout << "Please input the favorite beverage of person #"
        << people << ": Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program\n";
        cin >> number;
        people++;
        if (number==1)
            total1 += 1;
        else if (number == 2)
            total2 += 1;
        else if (number == 3)
            total3 += 1;
        else if (number == 4)
            total4 += 1;
        else
            cout << "Enter a valid number\n";
    }
    cout << "Beverage\t\t" << "Number of votes\n";
    cout << "********************************\n";
    cout << "Coffee\t\t\t" << total1;
    cout << "\nTea\t\t\t\t" << total2;
    cout << "\nCoke\t\t\t" << total3;
    cout << "\nOrange Juice\t" << total4 << endl;
    
    return 0;
}

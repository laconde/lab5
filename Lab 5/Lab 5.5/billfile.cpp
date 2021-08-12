// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from a data file and the output will go to
// an output file.

// Alberto Conde
// September 20, 2020

#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream dataIn;    // defines an input stream for a data file
    ofstream dataOut;    // defines an output stream for an output file
    int quantity;        // contains the amount of items purchased
    float itemPrice;    // contains the price of each item
    float    totalBill;    // contains the total bill, i.e. the price of all items

    dataIn.open("transaction.dat");    // This opens the file.
    dataOut.open("bill.out");

    // Fill in the appropriate code in the blank below

    cout << setprecision(2) << fixed << showpoint;    // formatted output

    
    cout << "Enter a quantity.\n";
    cin >> quantity;
    cout << "Enter the price.\n";
    cin >> itemPrice;
    totalBill = itemPrice * quantity;
    
    dataOut << quantity << endl;
    dataOut << itemPrice << endl;
    dataOut << totalBill << endl;
    
    
    cout << "Reading data from the file.\n";
    dataIn >> itemPrice;
    dataIn >> quantity;
    dataIn >> totalBill;
    cout << "The total bill is $" << totalBill << endl;
    dataIn.close();
    

    return 0;
}

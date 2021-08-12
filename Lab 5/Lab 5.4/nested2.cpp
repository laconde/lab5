// This program finds the average time spent programming by a student
// each day over a three day period. And also average time studying biology by other students.

// Alberto Conde
// September 20, 2020

#include <iostream>
using namespace std;

int main()
{
    int numStudents;
    int numDays = 0;
    float numHours, total, average;
    int student, day = 0;    // these are the counters for the loops

    cout << "This program will find the average number of hours a day"
         << " that a student spent programming over a long weekend\n\n";
    cout << "How many students are there ?" << endl << endl;
    // This program finds the average time spent programming by a student
// each day over a three day period. And also average time studying biology by other students.

// Alberto Conde
// September 20, 2020

#include <iostream>
using namespace std;

int main()
{
    int numStudents;
    int numDays = 0;
    float numHours, total, average = 0.0, average1 = 0.0;
    int student, day = 0;    // these are the counters for the loops
    

    cout << "This program will find the average number of hours a day"
         << " that a student spent programming over a long weekend\n\n";
    cout << "Enter the number of days in the long weekend\n\n";
    cin >> numDays;
    
    numStudents = 1;
    for (student = 1; student <= numStudents; student++)
    {
        total = 0;

        for (day = 1; day <= numDays; day++)
        {
            cout << "Please enter the number of hours worked by student "
                 << student << " on day " << day << "." << endl;
            cin >> numHours;

            total = total + numHours;
        
        }

        average = total / numDays;

        cout << endl;
        cout << "The average number of hours per day spent programming by "
             << "student " << student << " is " << average
             << endl << endl << endl;
    }
    cout << "This program will find the average number of hours a day"
         << " that a student spent studying biology over a long weekend\n\n";
    cout << "Enter the number of days in the long weekend\n\n";
    cin >> numDays;
    
    numStudents = 1;
    for (student = 1; student <= numStudents; student++)
    {
        total = 0;

        for (day = 1; day <= numDays; day++)
        {
            cout << "Please enter the number of hours worked by student "
                 << student << " on day " << day << "." << endl;
            cin >> numHours;

            total = total + numHours;
        
        }
        
        float average1;
        average1 = total / numDays;

        cout << endl;
        cout << "The average number of hours per day spent studying biology by "
             << "student " << student << " is " << average1
             << endl << endl << endl;
        if (average > average1)
        {
            cout << "The student spent on average more time doing programming\n";
        }
        else
        {
            cout << "The student spent on average more time studying biology\n";
        }
    }
    
    return 0;
}

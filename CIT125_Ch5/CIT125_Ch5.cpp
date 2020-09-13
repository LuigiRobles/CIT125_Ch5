// CIT126 Adv. C++ By Luigi Robles
// 9/12/2020 Fall Term 
// Ch.5 Pg.275 Example 5-3 
// "Counter-Controlled Loop"  
// This program computes and outputs the total number of boxes of
// cookies sold, the total revenue, and the average number of 
// boxes sold by each volunteer.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    //declare variables
    string name;
    int numOfVolunteers;
    int numOfBoxesSold;
    int totalNumOfBoxesSold;
    int counter;
    double costOfOneBox;

    cout << fixed << showpoint << setprecision(2);

    cout << "Line 14: Enter the number of "
        << "volunteers: ";
    cin >> numOfVolunteers; //user input for number of volunteers
    cout << endl;

    //declare and initialize variable and counter
    totalNumOfBoxesSold = 0;
    counter = 0;

    while (counter < numOfVolunteers) //start while loop
    {
        cout << "Line 21: Enter the volunteer's name"
            << " and the number of boxes sold: ";
        cin >> name >> numOfBoxesSold;
        cout << endl;
        totalNumOfBoxesSold = totalNumOfBoxesSold
            + numOfBoxesSold;
        counter++;
    } //end while loop

    cout << "Line 27: The total number of boxes sold: "
        << totalNumOfBoxesSold << endl; //output number of boxes sold

    cout << "Line 28: Enter the cost of one box: ";
    cin >> costOfOneBox; //user input for cost of one box
    cout << endl;

    cout << "Line 31: The total money made by selling "
        << "cookies: $"
        << totalNumOfBoxesSold * costOfOneBox << endl; //calculate total sales

    if (counter != 0)
        cout << "Line 33: The average number of "
        << "boxes sold by each volunteer: "
        << totalNumOfBoxesSold / counter << endl;
    else
        cout << "Line 35: No input." << endl; //end if

    return 0;
} //end of main function
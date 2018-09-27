/*
	WaterBill.cpp
	WaterBill

	Created by Selena Chen on 10/20/17.
	Copyright © 2017 Selena Chen. All rights reserved.
*/


// Prompts user for their quarterly water bills over the last four quarters, then calculates and displays the average


#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    // Declares float variables for to hold the quarterly water bills and the average
    
    float quarter1, quarter2, quarter3, quarter4, average;
    
    // Asks for the quarterly water bills and stores them in the appropriate variables
    
    cout << "Please input your water bill for the first quarter: ";
    cin >> quarter1;
    
    cout << "Please input your water bill for the second quarter: ";
    cin >> quarter2;
    
    cout << "Please input your water bill for the third quarter: ";
    cin >> quarter3;
    
    cout << "Please input your water bill for the fourth quarter: ";
    cin >> quarter4;
    
    // Formula for the average water bill
    
    average = (quarter1 + quarter2 + quarter3 + quarter4) / 4;
    
    // Sets the average to 2 decimal places
    
    cout << fixed << setprecision(2);
    
    // Shows the average monthly bill
    
    cout << "Your average monthly bill is $" << average << "." << endl;
    
    /*
         Shows a message saying whether the user is:
         - conserving water
         - using a typical amount of water
         - using an excessive amount of water
     */
    
    if (average < 25)   // If the average is less than $25, they're conserving water
        cout << "Great job! You are conserving water." << endl;
    
    else if (average >= 25 && average <= 75)    // If the average is $25-$75, they're using a typical amount of water
        cout << "Not bad! You are using a typical amount of water." << endl;
    
    else if (average >= 75)     // If the average is greater than $75, they're using an excessive amount of water
        cout << "Yikes! You are using an excessive amount of water." << endl;
        
    return 0;
}

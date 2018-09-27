/*
    TravelingSpeed.cpp
    TravelingSpeed

    Created by Selena Chen on 11/17/17.
    Copyright © 2017 Selena Chen. All rights reserved.
*/


// Calculates speed in miles per hour


#include <iostream>
#include <iomanip>


using namespace std;

// Prototype for the milesPerHour function

void milesPerHour(double, double , double &);

int main() {
    /*
        Declares double variables to hold the:
        - number of miles traveled
        - the number of hours traveled
        - traveling speed in miles per hour
    */
    
    double milesTraveled, hoursTraveled, speed;
    
    // Asks the user for the number of miles traveled and stores it in the variable milesTraveled
    
    cout << "Please input the miles traveled." << endl;
    
    cin >> milesTraveled;
    
    // Asks the user for the number of hours traveled and stores it in the variable hoursTraveled
    
    cout << "Please input the hours traveled." << endl;
    
    cin >> hoursTraveled;
    
    // Runs the milesPerHour function using the user-inputted values above to get the traveling speed in miles per hour
    
    milesPerHour(milesTraveled, hoursTraveled, speed);
    
    // Sets the speed to 2 decimal places
    
    cout << fixed << showpoint << setprecision(2);
    
    // Displays the speed in miles per hour.
    
    cout << "Your speed is " << speed << " miles per hour." << endl;
    
    return 0;
}

// Calculates the traveling speed in miles per hour

void milesPerHour(double miles, double hours, double &speed) {
    speed = miles / hours;
}

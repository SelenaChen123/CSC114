/*
    AngleCalculator.cpp
    AngleCalculator

    Created by Selena Chen on 9/22/17.
    Copyright © 2017 Selena Chen. All rights reserved.
*/


// Acts as an angle calculator by taking any angle and showing the sine, cosine, and tangent of that angle


#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;


int main() {
    // Variables to store the angle in radians, along with the calculated trig functions
    
    double angle, sine, cosine, tangent;
    
    // Asks for an angle input in terms of radians
    
    cout << "Enter an angle x, in radians." << endl;
    
    cout << "x = ";
    
    // Stores the input in the angle variable
    
    cin >> angle;
    
    // Calculates the trig functions and stores them in the corresponding variables
    
    sine = sin(angle);
    
    cosine = cos(angle);
    
    tangent = tan(angle);
    
    // Prints out in fixed-point notation and with 4 decimal places
    
    cout << setprecision(4) << fixed;
    
    // Prints out the answers to the trig functions
    
    cout << "sin(x) = " << sine << endl;
    
    cout << "cos(x) = " << cosine << endl;
    
    cout << "tan(x) = " << tangent << endl;
    
    return 0;
}

/*
	GeometryCalculator.cpp
	GeometryCalculator

	Created by Selena Chen on 10/20/17.
	Copyright © 2017 Selena Chen. All rights reserved.
*/


/*
     Geometry Calculator
 
     1. Calculate the area of a circle
     2. Calculate the area of a rectangle
     3. Calculate the area of a triangle
     4. Quit
*/


#include <iostream>
#include <cmath>


using namespace std;


int main() {
    // Declares variables to hold the user's menu choice and the calculated area of the shape
    
    char choice;
    
    double area;
    
    /*
         Shows the menu:
         Geometry Calculator
         1. Calculate the area of a circle
         2. Calculate the area of a rectangle
         3. Calculate the area of a triangle
         4. Quit
     */
    
    cout << "\tGeometry Calculator" << endl;
    
    cout << "1. Calculate the area of a circle" << endl;
    
    cout << "2. Calculate the area of a rectangle" << endl;
    
    cout << "3. Calculate the area of a triangle" << endl;
    
    cout << "4. Quit" << endl;
    
    // Asks the user for a choice between 1 and 4 and stores the user input in the variable choice
    
    cout << "Enter your choice (1-4): ";
    
    cin >> choice;
    
    // If the user input isn't 1-4, it asks for another choice and stores the new user input in the variable choice
    
    if ((choice < '1') || (choice > '4')) {
        cout << "You did not choose a number 1-4." << endl;
        cout << "Enter another choice (1-4): ";
        cin >> choice;
    }
    
    // Menu options
    
    switch (choice) {
        case '1': {     // Case 1 calculates the area of a circle given the radius
            
            const double PI = 3.14159;      // Declares PI as a constant double
            
            double radius;      // Declares a double variable names radius to hold the circle's radius
            
            // Asks the user for the radius and stores it in the variable radius
            
            cout << "What is the radius?" << endl;
            
            cin >> radius;
            
            // If the radius is negative, it asks for another radius and stores it in the variable radius
            
            if (radius < 0) {
                cout << "The radius can't be negative. Enter another radius." << endl;
                
                cin >> radius;
            }
            
            // If the radius is positive, it calculates the area and displays it
            
            else if (radius >= 0) {
                area = PI * pow(radius, 2);     // Formula for the area of a circle
                
                cout << "The area of a circle with a radius of " << radius << " is " << area << "." << endl;    // Displays the area of the circle
            }
            break;
        }
        case '2': {     // Case 2 calculates the area of a rectangle given the length and width
            double length, width; // Declares double variables to hold the rectangle's length and width
            
            // Asks the user for the length and stores it in the variable length
            
            cout << "What is the length?" << endl;
            
            cin >> length;
            
            // Asks the user for the width and stores it in the variable width
            
            cout << "What is the width?" << endl;
            
            cin >> width;
            
            // If the length or width are negative, it asks for another length and width
            
            if (length < 0 || width < 0) {
                cout << "The length and width can't be negative. Enter another length and width." << endl;
                
                cout << "What is the length?" << endl;
                
                cin >> length;
                
                cout << "What is the width?" << endl;
                
                cin >> width;
            }
            
            // If the length and width are positive, it calculates the area and displays it
            
            else if (length >= 0 && width >= 0) {
                area = length * width;      // Formula for the area of a rectangle
                
                cout << "The area of a rectangle with a length of " << length;      // Displays the area of the rectangle
                
                cout << " and a width of " << width << " is " << area << "." << endl;
            }
            break;
        }
        case '3': {     // Case 3 calculates the area of a triangle given the base and height
            double base, height;        // Declares double variables to hold the triangle's base and height

            // Asks the user for for the base and stores it in the variable base
            
            cout << "What is the length of the base?" << endl;
            
            cin >> base;
            
            // Asks the user for the height and stores it in the variable heigtht
            
            cout << "What is the height?" << endl;
            
            cin >> height;
            
            // If the base or height are negative, it asks for another base and height
            
            if (base < 0 || height < 0) {
                cout << "The base and height can't be negative. Enter another base and height." << endl;
                
                cout << "What is the length of the base?" << endl;
                
                cin >> base;
                
                cout << "What is the height?" << endl;
                
                cin >> height;
            }
            
            // If the base and height are positive, it calculates the area and displays it
            
            else if (base >= 0 && height >= 0) {
                area = .5 * (base * height);    // Formula for the area of a triangle
                
                cout << "The area of a triangle with a base length of " << base;        // Displays the area of the triangle
                
                cout << " and a height of " << height << " is " << area << "." << endl;
            }
            break;
        }
        case '4': {
            cout << "Quitting..." << endl;  // Shows a quitting message
            
            break;
        }
    }
    
    return 0;
}

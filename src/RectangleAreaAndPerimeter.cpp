/*	
    RectangleAreaAndPerimeter.cpp
	RectangleAreaAndPerimeter
 
	Created by Selena Chen on 9/6/17.
    Copyright © 2017 Selena Chen. All rights reserved.
 */


//	Prints out the area and perimeter of a  8 x 3 rectangle


#include <iostream>
using namespace std;


int main()
{
    // Declares the length and width of the rectangle
    
    const int LENGTH = 8, WIDTH = 3;
    
    // Declares the variables for area and perimeter
    
    int area, perimeter;
    
    // Area of a rectangle (A = L * W)
    
    area = LENGTH * WIDTH;
    
    // Prints out "The area of the rectangle is 24."
    
    cout << "The area of the rectangle is " << area << "." << endl;
    
    // Perimeter of a rectangle (P = 2L + 2W)
    
    perimeter = (2 * LENGTH) + (2 * WIDTH);
    
    // Prints out "The perimeter of the rectangle is 22."
    
    cout << "The perimeter of the rectangle is " << perimeter << "." << endl;
    
    return 0;
}

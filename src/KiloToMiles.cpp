/*
    KiloToMiles.cpp
    KiloToMiles

    Created by Selena Chen on 8/24/17.
    Copyright © 2017 Selena Chen. All rights reserved.
*/


//  Converts kilometers to miles


#include <iostream>
using namespace std;


int main() {
    
    /*
        Defines variables
        km = kilometers
        mi = miles
     */
    
    double km, mi;
    
    // Asks for kilometer input
    
    cout << "How many kilometers have you traveled?" << endl;
    
    cin >> km;
    
    // Converts kilometers to miles
    
    mi = km * .621;
    
    // Writes out "You've traveled ___ miles."
    
    cout << "You've traveled " << mi << " miles." << endl;
    
    return 0;
    
}

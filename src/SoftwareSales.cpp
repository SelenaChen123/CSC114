/*
     SoftwareSales.cpp
     SoftwareSales

     Created by Selena Chen on 10/20/17.
     Copyright © 2017 Selena Chen. All rights reserved.
*/


// Asks for the number of units sold and computes the total cost of the purchase


#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    // Declaring a constant float variable for the cost of each package
    
    const float PACKAGE_COST = 99;
    
    // Declaring float variables for the number of packages sold and the total cost of the purchase
    
    float quantity, totalCost;
    
    // Asks for the number of packages sold and sets the variable quantity to the user input
    
    cout << "How many packages were sold?" << endl;
    
    cin >> quantity;
    
    /*
         Calculates and displays the total cost according to
         the number of packages sold after applying the correct discount
     */
    
    cout << fixed << setprecision(2);       // Displays the total cost with 2 decimal points
    
    if (quantity >= 0 && quantity <= 9) {       // If 0-9 packages were bought, there's no discount
        totalCost = quantity * PACKAGE_COST;        // Formula for the total cost without a discount
        
        cout << "Total cost: $" << totalCost << "." << endl;        // Displays the total cost
    }
    else if (quantity >= 10 && quantity <= 19) {        // If 10-19 packages were bought, there's a 20% discount
        totalCost = .8 * (quantity * PACKAGE_COST);        // Formula for the total cost with a 20% discount
        
        cout << "Total cost: $" << totalCost << "." << endl;        // Displays the total cost
    }
    else if (quantity >=20 && quantity <= 49) {        // If 20-49 packages were bought, there's a 30% discount
        totalCost = .7 * (quantity * PACKAGE_COST);        // Formula for the total cost with a 30% discount
        
        cout << "Total cost: $" << totalCost << "." << endl;        // Displays the total cost
    }
    else if (quantity >=50 && quantity <= 99) {        // If 50-99 packages were bought, there's a 40% discount
        totalCost = .6 * (quantity * PACKAGE_COST);        // Formula for the total cost with a 40% discount
        
        cout << "Total cost: $" << totalCost << "." << endl;        // Displays the total cost
    }
    else if (quantity >= 100) {        // If 100 or more packages were bought, there's a 50% discount
        totalCost = .5 * (quantity * PACKAGE_COST);        // Formula for the total cost with a 50% discount
        
        cout << "Total cost: $" << totalCost << "." << endl;        // Displays the total cost
    }
    else
        cout << "The number of packages sold should be greater than 0." << endl;    // Units sold can't be negative
        
    return 0;
}

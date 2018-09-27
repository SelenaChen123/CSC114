/*
    OrderStatus.cpp
    OrderStatus

    Created by Selena Chen on 11/17/17.
    Copyright © 2017 Selena Chen. All rights reserved.
*/


//  Displays the status of an order from The Middletown Wholesale Copper Wire Company


#include <iostream>
#include <iomanip>


using namespace std;


// Prototype for the getSata function

void getData(int &, int &, double &);

// Prototype for the orderStatus function

void orderStatus(int, int, double);

int main() {
    // Declares integer variables to hold the number of spools ordered and the number of spools in stock
    
    int spoolsOrdered, spoolsInStock;
    
    // Declares a double variable to hold the special shipping and handling charges, if there are any
    
    double specialCharges;
    
    /*
        Runs the getData function to get the:
        - number of spools ordered
        - number of spools in stock
        - special shipping and handling charges, if any
     */
    
    getData(spoolsOrdered, spoolsInStock, specialCharges);
    
    /*
        Runs the orderStatus function using the user-inputted data retrieved from the getData function to display the:
        - number of spools ready to ship from current stock
        - number of spools on backorder
        - subtotal of the portion ready to ship
        - total shipping and handling charges on the portion ready to ship
        - total of the order ready to ship
     */
    
    orderStatus(spoolsOrdered, spoolsInStock, specialCharges);
    
    return 0;
}

/*
    Asks the user for the:
    - number of spools ordered
    - number of spools in stock
    - special shipping and handling charges, if any
 */

void getData(int &spoolsOrdered, int &spoolsInStock, double &specialCharges) {
    // Asks for the number of spools ordered and stores the input in the variable spoolsOrdered
    
    cout << "How many copper spools were ordered?" << endl;
        
    cin  >> spoolsOrdered;
    
    // If the number of spools ordered is less than 1, ask again until it isn't less than 1
        
    while(spoolsOrdered < 1) {
        cout << "Sorry, the number of spools ordered shouldn't be less than 1." << endl;
            
        cout << "How many copper spools were ordered?" << endl;
            
        cin >> spoolsOrdered;
    }
    
    // Asks for the number of spools in stock and stores the input in the variable spoolsInStock
    
    cout << "How many copper spools are in stock?" << endl;
        
    cin  >> spoolsInStock;
    
    // If the number of spools in stock is less than 0, ask again until it isn't less than 0
        
    while(spoolsInStock < 0) {
            cout << "Sorry, the number of spools in stock shouldn't be less than 0." << endl;
            
            cout << "How many copper spools are in stock?" << endl;
            
            cin >> spoolsInStock;
    }
    
    // Asks for the special shipping and handling charges, if any, and stores the input in the variable specialCharges
    
    cout << "How much are the special shipping and handling charges?" << endl;
    
    cout << "If there aren't any special shipping and handling charges, enter '0'." << endl;
        
    cin  >> specialCharges;
    
    // If the special shipping and handling charges are less than 0, ask again until it isn't less than 0
        
    while(specialCharges < 0) {
        cout << "Sorry, the special shipping and handling charges shouldn't be less than 0." << endl;
            
        cout << "How much are the special shipping and handling charges?" << endl;
        
        cout << "If there aren't any special shipping and handling charges, enter '0'." << endl;
            
        cin >> specialCharges;
    }
}

/*
    Calculates and displays the:
    - number of spools ready to ship from current stock
    - number of spools on backorder
    - subtotal of the portion ready to ship
    - total shipping and handling charges on the portion ready to ship
    - total of the order ready to ship
 */

void orderStatus(int spoolsOrdered, int spoolsInStock, double specialCharges = 10.0) {
    // Declares integer variables to hold the number of spools ready to ship and the number of spools on backorder
    
    int ready, backorder;
    
    // Declares a constant double variable to hold the normal shipping and handling price
    
    const double NORMAL_SHIPPING = 10.0;
    
    /*
        Declares double variables to hold the:
        - subtotal
        - total shipping and handling charges
        - total of the order
     */
    
    double subtotal, shippingTotal, total;
    
    if (spoolsOrdered > spoolsInStock) {    // If more spools were ordered than were in stock
        // The number of spools ready is the number currently in stock
        
        ready = spoolsInStock;
        
        // Calculates the number of spools on backorder
        
        backorder = spoolsOrdered - ready;
        
        // Displays the number of spools ready to ship and the number of spools on backorder
        
        cout << ready << " of " << spoolsOrdered << " spools are ready to ship." << endl;
        
        cout << "Therefore, " << backorder << " spools are on backorder." << endl;
    } else {    // If there are enough spools in stock for the order
        // The number of spools ready is the number of spools ordered
        
        ready = spoolsOrdered;
        
        // Displays the number of spools ready to ship
        
        cout << ready << " spools are ready to ship." << endl;
    }
    
    // Calculates the subtotal of the portion ready to ship
    
    subtotal = 100.0 * ready;
    
    // Calculates the total shipping cost of the portion ready to ship
    
    shippingTotal = ready * (NORMAL_SHIPPING + specialCharges);
    
    // Calculates the total of the order
    
    total = subtotal + shippingTotal;
    
    // Sets the totals to 2 decimal places
    
    cout << fixed << showpoint << setprecision(2);
    
    // Displays the subtotal, total shipping cost, and total
    
    cout << "The subtotal of the portion ready to ship is " << subtotal << "." << endl;
    
    cout << "The total shipping and handling on the portion ready to ship is " << shippingTotal << "." << endl;
    
    cout << "The total of the order ready to ship is " << total << "." << endl;
}

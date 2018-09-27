/*
    TotalSalesAndTax.cpp
    TotalSalesAndTax

    Created by Selena Chen on 9/22/17.
    Copyright © 2017 Selena Chen. All rights reserved.
*/


// Shows the total sales, local taxes, and state taxes for a month


#include <iostream>
#include <iomanip>


using namespace std;


int main() {
    // Variables to store inputs in
    
    double  totalSales,     // Total sales for the month
            localTax,       // Local tax percentage
            stateTax;       // State tax percentage
    
    // Varaibles to store the total calculated taxes in
    
    double localTaxOnSales, stateTaxOnSales;
    
    // Asks for the total sales for the month
    
    cout << "What are the total sales for the month?" << endl;
    
    cin >> totalSales;
    
    // Asks for the local tax percentage in decimal form
    
    cout << "What is the local tax percentage in decimal form?" << endl;
    
    cin >> localTax;
    
    // Asks for the state tax percentage in decimal form
    
    cout << "What is the state tax percentage in decimal form?" << endl;
    
    cin >> stateTax;
    
    // Formula for the total local and state taxes for the month
    
    localTaxOnSales = totalSales * localTax;        // Local tax for the month
    
    stateTaxOnSales = totalSales * stateTax;        // State tax for the month
    
    // Prints out values with fixed-point notation and with 2 decimal places
    
    cout << setprecision(2) << fixed;
    
    // Prints out "The total sales for the month is $_____."
    
    cout << "The total sales for the month is $" << totalSales << "." << endl;
    
    // Prints out "The local tax for the month is $_____."
    
    cout << "The local tax for the month is $" << localTaxOnSales << "." << endl;
    
    // Prints out "The state tax for the month is $_____."
    
    cout << "The state tax for the month is $" << stateTaxOnSales << "." << endl;
    
    return 0;
}

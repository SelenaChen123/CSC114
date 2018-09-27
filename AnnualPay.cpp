/*
    AnnualPay.cpp
    Annual Pay
 
    Created by Selena Chen on 8/31/17.
    Copyright © 2017 Selena Chen. All rights reserved.
*/


//  Writes out "Your annual pay is $57200."


#include <iostream>
using namespace std;


int main()
{
    // Declares variables
    
    double  payAmount = 2200.0,     // Amount earned each pay period
    payPeriods = 26,        // Number of pay periods
    annualPay;              // Total annual pay
    
    // Calculates the total annual pay
    
    annualPay = payAmount * payPeriods;
    
    // Writes "Your annual pay is $____."
    
    cout << "Your annual pay is $" << annualPay << "." << endl;
    
    return 0;
}

/*
	CandySales.cpp
	CandySales

	Created by Selena Chen on 10/5/17.
	Copyright © 2017 Selena Chen. All rights reserved.
 */


/*
     Assignment:
 
     Write a program that computes the amount of money the Cross Country team will receive
     from the proceeds of their candy sales project given the following information:
 
     -   They sold 82 cases, which had 12 bars per case.
 
     -   The candy was sold for $1.25 per bar.
 
     -   Each case cost $7.00
 
     -   They are required to give the student government association 10% of their earnings.
 
     Your program should calculate and display the SGA proceed's AND the Cross Country Club’s proceeds.
 
     The proceeds should be displayed in fixed-point notation with two decimal places.
 
     Review the setprecision and fixed manipulator on pg. 114 - 116 of your textbook to display your proceeds.
 
     You must include the #include <iomanip> preprocessor directive.
 */


/*
     Tips:
 
     -   All information given will be used!
 
     -   The cost of the candy IS NOT apart of the Cross Country Club's proceeds!
 
     -   Therefore, you must deduct what you paid for the candy (Cost of Goods Sold)
         before calculating what you give to SGA and what will be left as the track club's proceeds!
 
     -   Be sure to display the SGA and Cross Country Club's proceeds!!
 */


#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    /*
         Declares the constant variables for:
         - the sale price per candy bar
         - the cost per case of candy
     */
    
    const double    PRICE_PER_BAR = 1.25,   // Each candy bar sells for $1.25
                    COST_PER_CASE = 7.00;   // Each case of candy costs $7.00
    
    /*
         Declares the integer variables for:
         - the number of cases sold
         - the number of candy bars per case
         - the total number of candy bars sold
     */
    
    int casesSold = 82,     // 82 cases of candy were sold
        barsPerCase = 12,   // Each case has 12 candy bars
        totalBarsSold;      // Holds the total number of candy bars sold
    
    // Calculates the total number of candy bars sold
    
    totalBarsSold = casesSold * barsPerCase;
    
    /*
         Declares the variables for:
         - the total cost
         - the total sales
         - the total profit
    */
    
    double  totalCost,      // Total cost of the cases of candy
            totalSales,     // Total amount of money made from candy sales
            totalProfit;    // Total profit made
    
    // Calculates the total cost of the cases of candy
    
    totalCost = casesSold * COST_PER_CASE;
    
    // Calculates the total amount of money made from candy sales
    
    totalSales = totalBarsSold * PRICE_PER_BAR;
    
    // Calculates the total profit made
    
    totalProfit = totalSales - totalCost;
    
    /*
         Declares variables for:
         - the SGA's proceeds
         - the CCC's proceeds
     */
    
    double  sgaProceeds,    // The SGA gets 10% of the money earned
            cccProceeds;    // The CCC gets the remaining 90% of the money earned
    
    sgaProceeds = totalProfit * .1;
    
    cccProceeds = totalProfit * .9;
    
    // Displays the total amount of money earned, SGA proceeds, and CCC proceeds
    
    cout << fixed << setprecision(2);
    cout << "The Cross Country Club earned a total of $" << totalProfit << " after candy sales." << endl;
    cout << "Since the Student Government Association gets 10% of their earnings, " << endl;
    cout << "the Student Government Association gets $" << sgaProceeds << endl;
    cout << "and the Cross Country Cub gets $" << cccProceeds << "." << endl;
    
    return 0;
}

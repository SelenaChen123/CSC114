/*
	BeverageSurveyTally.cpp
	BeverageSurveyTally

	Created by Selena Chen on 11/3/17.
	Copyright © 2017 Selena Chen. All rights reserved.
*/


// Performs a survey tally on beverages


#include <iostream>

using namespace std;


int main() {
    // Declares integer variables to hold each person's beverage choice and the person count
    
    int beverage, person = 0;
    
    // Declares integer variables to hold the number of votes for each beverage
    
    int coffeeCount = 0, teaCount = 0, cokeCount = 0, orangeJuiceCount = 0;
    
    // Declares constants to hold the beverage choices
    
    const int COFFEE = 1, TEA = 2, COKE = 3, ORANGE_JUICE = 4;
    
    // Displays a menu of beverage choices
    
    cout << "Beverage List:" << endl;
    cout << "1. Coffee" << endl;
    cout << "2. Tea" << endl;
    cout << "3. Coke" << endl;
    cout << "4. Orange Juice" << endl;
    
    // Asks for the favorite beverages of each person until -1 is typed to terminate the program
    
    do {
        // Asks for the favorite beverage of each person or -1 to exit, then stores it in the variable beverage
        
        cout << "Please input the favorite beverage of person " << person + 1 << "." << endl;
        
        cout << "Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program." << endl;
        
        cin >> beverage;
        
        // Menu for the different beverage choices
        
        switch (beverage) {
            // If user entered 1
                
            case COFFEE:
                // Increments the coffee count
                
                coffeeCount++;
                
                break;
                
            // If user entered 2
                
            case TEA:
                // Increments the tea count
                
                teaCount++;
                
                break;
            
            // If user entered 3
                
            case COKE:
                // Increments the coke count
                
                cokeCount++;
                
                break;
                
            // If user entered 4
                
            case ORANGE_JUICE:
                // Increments the orange juice count
                
                orangeJuiceCount++;
                
                break;
        }
        // Increments the person count
        
        person++;
        
    } while(beverage != -1);    // Loops as long as -1 was not entered
    
    // Displays the total number of people surveyed
    
    cout << "The total number of people surveyed is " << person - 1 << "." << endl;
    
    // Displays the results of the survey in a table
    
    cout << "The results are as follows:" << endl;
    
    cout << "Beverage" << "\t" << "Number of Votes" << endl;
    
    cout << "***************************" << endl;
    
    cout << "Coffee" << "\t\t\t\t" << coffeeCount << endl;          // Displays the total number of votes for coffee
    
    cout << "Tea" << "\t\t\t\t\t" << teaCount << endl;              // Displays the total number of votes for tea
    
    cout << "Coke" << "\t\t\t\t" << cokeCount << endl;              // Displays the total number of votes for coke
    
    cout << "Orange Juice" << "\t\t" << orangeJuiceCount << endl;   // Displays the total number of votes for orange juice
    
    return 0;
}

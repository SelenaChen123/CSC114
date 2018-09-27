/*
    BaseballWinsAndLosses.cpp
    BaseballWinsAndLosses

    Created by Selena Chen on 11/17/17.
    Copyright © 2017 Selena Chen. All rights reserved.
*/


// Displays the percentage of wins of a baseball team during a complete season


#include <iostream>
#include <iomanip>


using namespace std;

// Creates a function called getWins that returns a user-inputted number of wins

int getWins() {
    // Declares an integer variable to hold the number of wins
    
    int wins;
    
    // Asks the user for the number of wins and stores it in the variable wins
    
    cout << "Please input the number of wins." << endl;
    
    cin >> wins;
    
    // Returns the value of wins
    
    return wins;
}

// Creates a function called getLosses that returns a user-inputted number of losses

int getLosses() {
    // Declares an integer variable to hold the number of losses
    
    int losses;
    
    // Asks the user for the number of losses and stores it in the variable losses
    
    cout << "Please input the number of losses." << endl;
    
    cin >> losses;
    
    // Returns the value of losses
    
    return losses;
}

// Creates a function called calcWinRate that uses the user-inputted wins and losses to calculate the percentage of wins

double calcWinRate(double wins, double losses) {
    // Calculates the percentage of wins and returns the value of winPercentage
    
    double winPercentage = 100.0 * (wins / (wins + losses));
    
    return winPercentage;
}

int main() {
    // Declares an integer variable called wins that runs the function getWins to get the number of wins
    
    int wins = getWins();
    
    // Declares an integer variable called losses that runs the function getLosses to get the number of losses
    
    int losses = getLosses();
    
    // Declares a double variable winPercentage that runs the function calcWinRate to get the percentage of wins
    
    double winPercentage = calcWinRate(wins, losses);
    
    // Displays the percentage of wins
    
    cout << "The percentage of wins is " << winPercentage << "%." << endl;
    
    return 0;
}
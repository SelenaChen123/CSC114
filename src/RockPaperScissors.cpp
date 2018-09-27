/*
    RockPaperScissors.cpp
    RockPaperScissors

    Created by Selena Chen on 12/5/17.
    Copyright © 2017 Selena Chen. All rights reserved.
*/


//  Lets the user play rock, paper, scissors against the computer


#include <iostream>
#include <cstdlib>      // Needed for the random functions
#include <ctime>        // Needed for the time


using namespace std;

const int MIN = 1, MAX = 3;         // Constant integers to hold the limits for the randomly generated computer choices
int computerChoice, userChoice;     // Integers to hold the random computer choices and the user-inputted choices

// Function that sets the computer's choice to a random number between 1 and 3 and returns that value
int getComputerChoice() {
    unsigned int seed = time(0);    // Gets the system time
    srand(seed);                // Seed the random number generator
    
    computerChoice = rand() % MAX + MIN;    // Sets the computer's choice to a random number between 1 and 3
    
    return computerChoice;      // Returns the computer's choice
}

// Function that displays the choices menu, then gets the user's choice and returns that value
int getUserChoice() {
    // Choices menu
    cout << "Rock, Paper, Scissors Game\n";
    cout << "___________________________\n\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "4. Quit\n\n";
    
    cout << "Let's play rock, paper, scissors!\n";
    cout << "Enter '1' for rock, '2' for paper, '3' for scissors, or '4' to quit.\n\n";
    
    // Asks for the user's choice and stores it in the variable userChoice
    cout << "Enter your choice: ";
    cin >> userChoice;
    
    // A number between 1 and 4 must be entered, or else it'll keep asking until a valid choice is entered
    while (userChoice < 1 || userChoice > 4) {
        cout << "Sorry, please enter a valid choice." << endl;
        cout << "Enter your choice: ";
        cin >> userChoice;
    }
    
    return userChoice;  // Returns the user's choice
}

// Function that displays the user's inputted choice, the computer's random choice, and whether there was a tie or a win
void determineWinner() {
    // Displays the user's choice
    switch (userChoice) {
        case 1: cout << "You've selected rock.\n";
                break;
            
        case 2: cout << "You've selected paper.\n";
                break;
            
        case 3: cout << "You've selected scissors.\n";
                break;
        case 4: return;     // Program stops once 4 is entered
    }
    
    // Displays the computer's choice
    switch (computerChoice) {
        case 1:     cout << "The computer selected rock.\n";
                    break;
        case 2:     cout << "The computer selected paper.\n";
                    break;
        case 3:     cout << "The computer selected scissors.\n";
                    break;
    }
    
    // Displays whether there was a tie or a win, and if there is a win, it explains who won and why they won
    if(userChoice == computerChoice) {
        cout << "Tie. No winner!\n";
        cout << "Play again to find a winner.\n\n";
    } else if(userChoice == 1 && computerChoice == 2) {
        cout << "Computer wins! Paper wraps rock!\n\n";
    } else if(userChoice == 2 && computerChoice == 3) {
        cout << "Computer wins! Scissors cuts paper!\\nn";
    } else if(userChoice == 3 && computerChoice == 1) {
        cout << "Computer wins! Rock smashes scissors!\\nn";
    } else if(computerChoice == 1 && userChoice == 2) {
        cout << "You win! Paper wraps rock!\n\n";
    } else if(computerChoice == 2 && userChoice == 3) {
        cout << "You win! Scissors cuts paper!\n\n";
    } else if(computerChoice == 3 && userChoice == 1) {
        cout << "You win! Rock smashes scissors!\n\n";
    }
}

int main() {
    // Runs once, and then only runs as long as the user hasn't selected 4 to quit
    do {
        // Displays the choices menu, then gets the user's choice and returns that value
        getUserChoice();
    
        // Sets the computer's choice to a random number between 1 and 3 and returns that value
        getComputerChoice();
        
        // Displays the user's inputted choice, the computer's random choice, and whether there was a tie or a win
        determineWinner();
        
        // If there is a tie, the user has to keep playing until a winner is found
        while(userChoice == computerChoice) {
            // Displays the choices menu, gets the user's choice, and returns that value again
            getUserChoice();
            
            // The user can no longer enter 4 to quit, so it'll keep asking until a valid choice is entered
            while (userChoice < 1 || userChoice > 3) {
                cout << "Sorry, you can't quit until a winner is found." << endl;
                cout << "Enter your choice: ";
                cin >> userChoice;
            }
            
            // Sets the computer's choice to a random number between 1 and 3 and returns that value again
            getComputerChoice();
            
            // Displays the user's inputted choice, the computer's random choice, and whether there was a tie or a win again
            determineWinner();
        }
    
        cout << "___________________________\n\n";
    } while(userChoice != 4);
    
    // If the user enters 4 to quit, the program will quit
    if(userChoice == 4) {
        cout << "Quitting program...\n";
    }
    
    return 0;
}

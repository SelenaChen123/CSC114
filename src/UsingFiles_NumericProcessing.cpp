/*
	UsingFiles_NumericProcessing.cpp
	UsingFiles_NumericProcessing

	Created by Selena Chen on 11/3/17.
	Copyright © 2017 Selena Chen. All rights reserved.
*/


// Calculates the sum and average of numbers from a text file


#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;


int main() {
    // Declares integer variables to hold each of the numbers from the file and the total number of numbers in the file
    
    int number, numberCount = 0;
    
    // Declares double variables to the sum and average of all of the numbers in the file
    
    double sum = 0, average;
    
    // Defines the file stream object numbersFile and opens the file Random.txt
    
    ifstream numbersFile("//Users//selena//Documents//schen931//C++ Programming//Chapter 5//UsingFiles_NumericProcessing//UsingFiles_NumericProcessing//Random.txt");
    
    // Loop to show the numbers in the file, add all of the numbers together, and counts the number of numbers in the file
    
    while(numbersFile >> number) {  // As long as there is inputfrom numbersFile to be read into the variable number
        // Displays the number
        
        cout << number << endl;
        
        // Adds the numbers to the sum
        
        sum += number;
        
        // Increments the number count
        
        numberCount++;
    }
    
    // Closes numbersFile
    
    numbersFile.close();
    
    // Displays the number of numbers in the file
    
    cout << "There are a total of " << numberCount << " numbers in the file." << endl;
    
    // Displays the sum of all of the numbers in the file
    
    cout << "The sum of all of the numbers in the file is " << sum << "." << endl;
    
    // Displays the output to 2 decimal places
    
    cout << fixed << setprecision(2);
    
    // Calculates the average
    
    average = sum / numberCount;
    
    // Displays the average
    
    cout << "The average of all of the numbers in the file is " << average << "." << endl;
    
    return 0;
}

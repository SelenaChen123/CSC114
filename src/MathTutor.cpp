/*
    MathTutor.cpp
    MathTutor

    Created by Selena Chen on 9/22/17.
    Copyright © 2017 Selena Chen. All rights reserved.
 */


// Acts like a math tutor and adds two random numbers together


#include <iostream>
#include <cstdlib>
#include <cmath>


using namespace std;


int main() {
    
    // Allows randomizer
    
    unsigned seed=time(0);
    
    // Integers to hold the two random numbers and sum of the two numbers
    int num1, num2, sum;
    
    // Seeds the random number generator
    
    srand(seed);
    
    // Sets each of the two numbers to an integer value less than 1000
    
    num1 = 1 + rand() % 999;
    
    num2 = 1 + rand() % 999;
    
    // Adds the two random numbers
    
    sum = num1 + num2;
    
    // Prints out a message instructing the student to work it out before pressing enter for the answer
    
    cout << "Try and solve this problem." << endl;
    
    cout << "Once you think you've figured out the sum," << endl;
    
    cout << "press any key to show the correct answer." << endl;
    
    cout << num1 << " + " << num2 << " = ";
    
    cin.get();
    
    // Shows sum
    
    cout << sum << endl;
    
    return 0;
}

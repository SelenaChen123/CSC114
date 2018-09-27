/*
 OverloadedHospital.cpp
 OverloadedHospital
 
 Created by Selena Chen on 11/17/17.
 Copyright © 2017 Selena Chen. All rights reserved.
 */


//  Displays the charges for a patient’s hospital stay


#include <iostream>
# include <iomanip>


using namespace std;


// Creates a function called totalCharges that calculates an in-patient's charges

double totalCharges(int days, double rate, double medicationCharges, double hospitalServiceCharges) {
    return (days * rate) + medicationCharges + hospitalServiceCharges;
}

// Creates a function called totalCharges that calculates an out-patient's charges

double totalCharges(double medicationCharges, double hospitalServiceCharges) {
    return medicationCharges + hospitalServiceCharges;
}

int main() {
    // Declares a character variable to hold the user-inputted choice of in-patient or out-patient
    
    char patientType;
    
    // Declares an integer variable to hold the number of days the in-patient stayed at the hospital
    
    int days;
    
    /*
        Declares double variables to hold the:
        - daily rate for an in-patient's hospital stay
        - medication charges
        - hospital service charges (lab tests, etc.)
     */
    
    double rate, medicationCharges, hospitalServiceCharges;
    
    // Asks the user if they are an in-patient ('I' or 'i') or an out-patient ('O' or 'o')
    
    cout << "Were you an in-patient or an out-patient?" << endl;
    
    cout << "Enter 'I' if you were an in-patient or 'O' if you were an out-patient." << endl;
    
    // Stores the input in the variable patientType
    
    cin >> patientType;
    
    // If neither 'I' nor 'O' is entered, keep asking until one of them is
    
    while (patientType != 'I' && patientType != 'i' && patientType != 'O' && patientType != 'o') {
        cout << "Sorry, please enter 'I' if you were an in-patient or 'O' if you were an out-patient." << endl;
        
        cin >> patientType;
    }
    
    // Cases for in-patients and out-patients
    
    switch (patientType) {
        // If the patient was an in-patient
        
        case 'I':
            
        case 'i':   // Asks for the number of day spent at the hospital and stores it in the variable days
            
                    cout << "How many days did you spend in the hospital?" << endl;
            
                    cin >> days;
            
                    // If the input is less than 0, keep asking until it isn't
            
                    while (days < 0) {
                        cout << "Sorry, the number of days can't be less than 0." << endl;
                        
                        cout << "How many days did you spend in the hospital?" << endl;
                        
                        cin >> days;
                    }
            
                    // Asks for the daily rate at the hospital and stores it in the variable rate
            
                    cout << "What is the daily rate?" << endl;
            
                    cin >> rate;
            
                    // If the input is less than 0, keep asking until it isn't
            
                    while (rate < 0) {
                        cout << "Sorry, the daily rate can't be less than 0." << endl;
                        
                        cout << "What is the daily rate?" << endl;
                        
                        cin >> rate;
                    }
            
                    // Asks for the total medication charges and stores it in the variable medicationCharges
            
                    cout << "How much are the total hospital medication charges?" << endl;
            
                    cin >> medicationCharges;
            
                    // If the input is less than 0, keep asking until it isn't
            
                    while (medicationCharges < 0) {
                        cout << "Sorry, the total hospital medication charges can't be less than 0." << endl;
                        
                        cout << "How much are the total hospital medication charges?" << endl;
                        
                        cin >> medicationCharges;
                    }
            
                    // Asks for the total service charges and stores it in the hospitalServiceCharges
            
                    cout << "How much are the total hospital service charges?" << endl;
            
                    cin >> hospitalServiceCharges;
            
                    // If the input is less than 0, keep asking until it isn't
            
                    while (hospitalServiceCharges < 0) {
                        cout << "Sorry, the total hospital service charges can't be less than 0." << endl;
                        
                        cout << "How much are the total hospital service charges?" << endl;
                        
                        cin >> hospitalServiceCharges;
                    }
            
                    // Sets the total charges to 2 decimal places
            
                    cout << fixed << setprecision(2);
            
                    // Displays the total charges for an in-patient using the first totalCharges function
            
                    cout << "Your total charges are $" << totalCharges(days, rate, medicationCharges, hospitalServiceCharges) << "." << endl;
            
                    break;
            
        // If the patient was an out-patient
            
        case 'O':
            
        case 'o':   // Asks for the total medication charges and stores it in the variable medicationCharges
            
                    cout << "How much are the total hospital medication charges?" << endl;
            
                    cin >> medicationCharges;
            
                    // If the input is less than 0, keep asking until it isn't
            
                    while (medicationCharges < 0) {
                        cout << "Sorry, the total hospital medication charges can't be less than 0." << endl;
                        
                        cout << "How much are the total hospital medication charges?" << endl;
                        
                        cin >> medicationCharges;
                    }
            
                    // Asks for the total service charges and stores it in the hospitalServiceCharges
            
                    cout << "How much are the total hospital service charges?" << endl;
            
                    cin >> hospitalServiceCharges;
            
                    // If the input is less than 0, keep asking until it isn't
            
                    while (hospitalServiceCharges < 0) {
                        cout << "Sorry, the total hospital service charges can't be less than 0." << endl;
                        
                        cout << "How much are the total hospital service charges?" << endl;
                        
                        cin >> hospitalServiceCharges;
                    }
            
                    // Sets the total charges to 2 decimal places
            
                    cout << fixed << setprecision(2);
            
                    // Displays the total charges for an out-patient using the second totalCharges function
            
                    cout << "Your total charges are $" << totalCharges(medicationCharges, hospitalServiceCharges) << "." << endl;
            
                    break;
    }
    
    return 0;
}

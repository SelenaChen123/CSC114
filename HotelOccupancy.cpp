/*
	HotelOccupancy.cpp
	HotelOccupancy
 
	Created by Selena Chen on 11/2/17.
	Copyright © 2017 Selena Chen. All rights reserved.
*/


// Calculates the occupancy rate for a hotel


#include <iostream>
#include <iomanip>


using namespace std;


int main() {
    /*
         Declares integer variables to hold:
         - the number of floors the hotel has
         - the current floor number in the loop
         - the number of rooms each floor has
         - the number of occupied rooms each floor has
    */
    
    int maxFloors, floor, rooms, occupied;
    
    /*
         Declares double variables to hold:
         - the total number of rooms in the hotel
         - the total number of occupied rooms in the hotel
         - the percentage of occupied rooms in the hotel
     */
    
    double totalRooms = 0, totalOccupied = 0, percentOccupied;
    
    // Asks how many floors the hotel has and stores the input into the variable maxFloors
    
    cout << "How many floors does the hotel have?" << endl;
    
    cin >> maxFloors;
    
    // If the user says there is less than 1 floor, it will ask for another value
    
    while(maxFloors < 1) {
        // Says that there has to be at least 1 floor, asks for another value, then stores it in the variable maxFloors
        
        cout << "There has to be at least 1 floor. How many floors does the hotel have?" << endl;
        
        cin >> maxFloors;
    }
    
    // If the number of floors is 12 or less, this if statement is run
    
    if (maxFloors <= 12) {      // If the number of floors is 12 or less
        for(floor = 1; floor <= maxFloors; floor++) {       // Loops 12 times with the floor number increasing by 1 each time
            // Asks how many rooms are on the floor and stores the input into the variable rooms
            
            cout << "How many rooms are on floor " << floor << "?" << endl;
            
            cin >> rooms;
            
            // If the user says there are less than 10 rooms, it will ask for another value
            
            while(rooms < 10) {
                // Says that there has to be at least 10 rooms, asks for another value, then stores it in the variable rooms
                
                cout << "There has to be at least 10 rooms. How many rooms does the floor have?" << endl;
                
                cin >> rooms;
            }
            
            // Adds the user-inputted number of rooms on the floor to the accumulated total number of rooms
            
            totalRooms += rooms;
            
            // Asks how many rooms on the floor are occupied and stores the input into the variable occupied
            
            cout << "How many of the rooms on floor " << floor << " are occupied?" << endl;
            
            cin >> occupied;
            
            // Adds the user-inputted number of occupied rooms on the floor to the accumulated total number of occupied rooms
            
            totalOccupied += occupied;
        }
    }
    
    // If the number of floors is 13 or greater, this if statement is run
    
    if(maxFloors >= 13) {       // If the number of floors is 13 or greater
        // Loop for the first 12 floors
        
        for(floor = 1; floor < 13; floor++) {       // Loops 12 times with the floor number increasing by 1 each time
            // Asks how many rooms are on the floor and stores the input into the variable rooms
            
            cout << "How many rooms are on floor " << floor << "?" << endl;
            
            cin >> rooms;
            
            // If the user says there are less than 10 rooms, it will ask for another value
            
            while(rooms < 10) {
                // Says that there has to be at least 10 rooms, asks for another value, then stores it in the variable rooms
                
                cout << "There has to be at least 10 rooms. How many rooms does the floor have?" << endl;
                
                cin >> rooms;
            }
            
            // Adds the user-inputted number of rooms on the floor to the accumulated total number of rooms
            
            totalRooms += rooms;
            
            // Asks how many rooms on the floor are occupied and stores the input into the variable occupied
            
            cout << "How many of the rooms on floor " << floor << " are occupied?" << endl;
            
            cin >> occupied;
            
            // Adds the user-inputted number of occupied rooms on the floor to the accumulated total number of occupied rooms
            
            totalOccupied += occupied;
        }
        
        // Loop for the remaining floors
        
        /*
             The 13th floor is skipped, so once the floor variable hits 13,
             the floor variable immediately increments by 1 to become floor 14
         */
        
        for(floor = 13; floor <= maxFloors + 1; floor++) {      // Loops until the floor number is the number of floors + 1
            if(floor == 13) {
                // Since floor 13 is skipped, it immediately increments to become floor 14
                
                floor++;
                
                // Asks how many rooms are on the floor and stores the input into the variable rooms
                
                cout << "How many rooms are on floor " << floor << "?" << endl;
                
                cin >> rooms;
                
                // If the user says there are less than 10 rooms, it will ask for another value
                
                while(rooms < 10) {
                    // Says that there has to be at least 10 rooms, asks for another value, then stores it in the variable rooms
                    
                    cout << "There has to be at least 10 rooms. How many rooms does the floor have?" << endl;
                    
                    cin >> rooms;
                }
                
                // Adds the user-inputted number of rooms on the floor to the accumulated total number of rooms
                
                totalRooms += rooms;
                
                // Asks how many rooms on the floor are occupied and stores the input into the variable occupied
                
                cout << "How many of the rooms on floor " << floor << " are occupied?" << endl;
                
                cin >> occupied;
                
                // Adds the user-inputted number of occupied rooms on the floor to the accumulated total number of occupied rooms
                
                totalOccupied += occupied;
            } else if(floor != 13) {        // After floor 13 becomes floor 14, the rest of the floors are done normally
                // Asks how many rooms are on the floor and stores the input into the variable rooms
                
                cout << "How many rooms are on floor " << floor << "?" << endl;
                
                cin >> rooms;
                
                // If the user says there are less than 10 rooms, it will ask for another value
                
                while(rooms < 10) {
                    // Says that there has to be at least 10 rooms, asks for another value, then stores it in the variable rooms
                    
                    cout << "There has to be at least 10 rooms. How many rooms does the floor have?" << endl;
                    
                    cin >> rooms;
                }
                
                // Adds the user-inputted number of rooms on the floor to the accumulated total number of rooms
                
                totalRooms += rooms;
                
                // Asks how many rooms on the floor are occupied and stores the input into the variable occupied
                
                cout << "How many of the rooms on floor " << floor << " are occupied?" << endl;
                
                cin >> occupied;
                
                // Adds the user-inputted number of occupied rooms on the floor to the accumulated total number of occupied rooms
                
                totalOccupied += occupied;
            }
        }
    }
    
    // Displays the number of floors and the total number of rooms
    
    cout << "The hotel has " << maxFloors << " floors and " << totalRooms << " rooms." << endl;
    
    // Displays the total number of occupied rooms and the total number of unoccupied rooms (calculated by subtracting)
    
    cout << totalOccupied << " of the rooms are occupied and " << totalRooms - totalOccupied << " are unoccupied." << endl;
    
    // Calculates the percentage of occupied rooms
    
    percentOccupied = 100 * (totalOccupied / totalRooms);
    
    // Sets the percentage to 1 decimal place
    
    cout << fixed << setprecision(1);
    
    // Displays the percentage of occupied rooms
    
    cout << "Therefore, " << percentOccupied << "% of the rooms are occupied." << endl;
    
    return 0;
}

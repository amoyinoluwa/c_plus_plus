//  main.cpp
//  Created by Joseph Ajayi on 4/10/20.
//  Copyright © 2020 Joseph Ajayi. All rights reserved.
//  This program calculates the volume of the rooms
//  This is the main program

#include <iostream>
#include "room.h" //import the room header file
using namespace std;

int main() {
    
    const int NUM_ROOMS = 2;
    
    //room objects with set length, width and height
    
    room room1(7, 4, 3);
    room room2(2, 5, 9);

    room1 = room2; //memberwise assignments of objects
    
    /* declare the dimensions for each room */
    
    double length;
    
    double width;
    
    double height;
    
    double volume1, volume = 0;
    
    /* for loop to get the length, width and height for each room */
    
    for (int i = 0; i<NUM_ROOMS; i++) {
        
        cout << "Enter the length of room "<<i+1<<endl;
        cin>>length;
        
        cout << "Enter the width of room "<<i+1<<endl;
        cin>>width;
        
        cout<< "Enter the height of room "<<i+1<<endl;
        cin>>height;
        
        room rooms[NUM_ROOMS] = {   room(length, width, height),
                                    room(length, width, height)
                                }; //array for values of each room
        
        volume1 = rooms[i].getlength()*rooms[i].getwidth()*rooms[i].getheight();
        
        cout<< "The volume of room "<<i+1<< " is "<< volume1 <<endl; //displays the volume of each room

        volume += rooms[i].getlength()*rooms[i].getwidth()*rooms[i].getheight(); //calculates the volume for each room and adds them up
        
    }
            cout<< "The total volume of the house is " <<volume<<endl; //outputs the volume of the house
    
    return 0;
}


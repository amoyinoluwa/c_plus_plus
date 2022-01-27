//  room.h
//  Created by Joseph Ajayi on 4/10/20.
//  Copyright © 2020 Joseph Ajayi. All rights reserved.
//This is the header file for the main program

#ifndef room_h

#define room_h

class room {    //declare a class called "room"
    
private:        //private variables
    
    static double roomCount; //static member variable to count number of objects

    char *type; //pointer to a character
    
    double width;
    
    double length;
    
    double height;
    
    friend class Hallway; //friend class
    
    
public: //public variables
    
    
    //constructor for room with length, width and height as 0
    
    room(char* k)
    {
        length = 0;
        width = 0;
        height = 0;
        type = k;

        roomCount++;
    }
    
    //constructor for room that takes all dimensions from user
    
    room(double l, double h, double w)
    {
        length = l;
        width = w;
        height = h;
    
        roomCount++;

    }
    
    //copy constructor
    
    room(const room &obj) {
        width = obj.width;
        length = obj.length;
        height = obj.height;
    };

//constructor for room with default width as 10 and height as 20 and get length from user
    
    room(double l)
    {
        length = l;
        width = 10;
        height = 20;
        
        roomCount++;
    }
    void setlength(double);
    
    void setwidth(double);
    
    void setheight(double);
    
    // public member functions to get the dimensions.
    
    double getlength() const;
    
    double getheight() const;
    
    double getwidth() const;
    
    double getVolume() const;
    
    // Accessor function for roomCount
    
    double getRoomCount() const;
};

#endif /* room_h */

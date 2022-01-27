//  player.h
//  Final Project
//  Created by Joseph Ajayi on 4/21/20.
//  Copyright © 2020 Joseph Ajayi. All rights reserved.

#ifndef player_h
#define player_h
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Player {
private:
    string name;
    string position;
    int pointArray[10];
    void addArray () {
        for (int i=0; i<10; i++) {
            this->pointArray[i] = 0;
        }
    }
public:     //default player constructor
 Player() {
      name = "";
      position = "";
      addArray();
  }
    Player(string pName, string pPosition) { //constructor that takes in values
        name = pName;
        position = pPosition;
        addArray();
    }
    Player (const Player &obj) { //copy constructor
        name = obj.name;
        position = obj.position;
        for (int i = 0; i<10; i++) {
            pointArray[i] = obj.pointArray[i];
        }
        
    }
    void setName(string);
    
    void setPosition(string);
    
    void setPoints(int[]);
    
    string getName() const;
    
    string getPosition() const;
    
    int* getPoints();
        };


#endif /* player_h */

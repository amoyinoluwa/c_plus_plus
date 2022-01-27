//  player.cpp
//  Final Project
//  Created by Joseph Ajayi on 4/21/20.
//  Copyright © 2020 Joseph Ajayi. All rights reserved.

#include <stdio.h>
#include "player.h"
using namespace std;

void Player::setName(string pName){
    name = pName;
}
void Player::setPosition(string pPosition){
    position = pPosition;
}

void Player::setPoints(int points[10]){
    for (int i=0; i<10; i++) {
        this->pointArray[i] = points[i];
    }
}

string Player::getName() const {
    return name;
}
string Player::getPosition() const{
    return position;
}
int* Player::getPoints() {
    return this->pointArray;
}

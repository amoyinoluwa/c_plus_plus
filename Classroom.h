/*
//  Classroom.h
//  LinkedList

//  Created by Joseph Ajayi on 1/20/21.
*/

#ifndef Classroom_h
#define Classroom_h
#include <iostream>
#include <string>
using namespace std;
class Student{
    string ID;
    string name;
    string major;
    Student* next;
    friend class Classroom;
};
class Classroom {
private:
    Student* head;
public:
    Classroom(){ //constructor
        head = NULL;
    }
    void addStudent(string, string, string);
    bool isEmpty() const;
    void removeStudent (string);
    void print();
    void print(string);
    Student at(int);
    int getSize() const;
};
#endif /* Classroom_h */

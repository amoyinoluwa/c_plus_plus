//  Classroom.cpp
//  LinkedList
//  Created by Joseph Ajayi on 1/20/21.

#include "Classroom.h"
using namespace std;
int Classroom::getSize() const {
    Student *current = head;
    int stdNum = 0;
    while (current != NULL) {
        stdNum++;
        current = current->next;
    }
    return stdNum;
}
bool Classroom::isEmpty() const {
    if (getSize() == 0) {
        return true;
    }
    else {
        return false;
}
}
void Classroom::addStudent(string ID, string name, string major) {
    Student *newStudent = new Student; //creates a new student
    newStudent->ID = ID;
    newStudent->name = name;
    newStudent->major = major;
    newStudent->next = NULL;
    if (head == NULL) {
        head = newStudent; /*if there is not student information, set the head to
                            the new student*/
    }
    else {
        Student *node = head;
        Student *current = NULL;
        while (node != NULL) {
            if (node->name > newStudent->name) { //this would print the names in                                       alphabetical order
                break;
            }
            current = node;
            node = node->next;
        }
                if (current == NULL) {
                    newStudent->next = head;
                    head = newStudent;
        }
                else {
                    current->next = newStudent;
                    newStudent->next = node;
                }
    }
}
void Classroom::removeStudent (string ID) { /*function to remove a student from list */
    Student *findStudent = head;
    Student *last = NULL;
    while (findStudent != NULL) {
        if (findStudent->ID == ID) {
            break;
        }
        last = findStudent;
        findStudent = findStudent->next;
    }
     if(findStudent == NULL) {
         cout<<"Student not found\n";
    }
    else {
        if (last == NULL) {
            head = head->next;
            delete last;
        }
        else {
            last->next = findStudent->next;
            delete findStudent;
        }
    }
}
void Classroom::print(){ /* prints all students in the list
                          */
    Student* current = head;
    while (current != NULL) {
        cout<<"Student name: "<<current->name<<endl;
        cout<<"ID: "<<current->ID<<endl;
        cout<<"Major: "<<current->major<<endl;
        cout<<endl;
        current = current->next;
    }
    if (isEmpty()) {
        cout<<"No student information available\n";
        return;
    }

}
void Classroom::print(string id) { /* prints students name by ID */
    Student *current = head;
    while (current != NULL) {
        if ((current->ID == id)) {
            cout<<"Student name: "<<current->name<<endl;
            cout<<"ID: "<<current->ID<<endl;
            cout<<"Major: "<<current->major<<endl;
        }
       else {
    cout<<"Student with ID "<<id<<" has either been removed or does not exist\n\n";
        }
        current = current->next;
        break;
}
}
Student Classroom::at(int index) { /* this returns student information at given index */
    Student *current = head;
    int indexNum = 0;
    while (current!= NULL) {
        if (indexNum == index) {
            break;
        }
        indexNum++;
        current = current->next;
    }
    return *current;
}

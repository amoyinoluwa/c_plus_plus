/* This program checks if the parentheses in a file is balanced */
 
#include <iostream>
#include <stack>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
bool IsBalanced(string input) {
    stack <char> stackBrace; //creates an empty stack
    
    for (char i = 0; i<input.length(); i++) { //for loop to iterate each character
        
        if (input.at(i) == '{' || input.at(i) == '(' || input.at(i) == '[') {
            stackBrace.push(input.at(i)); //pushes each opening brace into the stack
}
        /* ignores characters that are not braces */
        else if (isalpha(input.at(i))) {
            continue;
        }
        else if (isdigit(input.at(i))) {
            continue;
        }
        else if (isalnum(input.at(i))) {
            continue;
        }
else
       {

    /* return false if stack is empty since a closing brace would not have a matching opening brace */
           
           if (stackBrace.empty())
       {
           return false;
       }
  /* next, check if each closing brace have a corresponding opening brace in the stack; pop if corresponding braces are found */
           
    else if ((input.at(i) == '}' && stackBrace.top() == '{') || (input.at(i) ==']' && stackBrace.top() == '[')||(input.at(i) ==')' && stackBrace.top() == '(')) {
            stackBrace.pop();
     }
     else {
        
         return false;
    }
}
} /* finally, return true if stack is emptied, false if not */
    if (stackBrace.empty()) {
        return true;
    } else {
        return false;
    }
    return stackBrace.empty();
}
int main() {
   fstream infile("input.txt", ios::in); //reads from the file
    string file;
     if(!infile){ //check if file exists on user's computer
        cout << "Error reading file\n";
        }
        else {
            cout << "File read successfully!\n";
        }
          while (infile>>file) { //while loop to call the boolean function
              if(IsBalanced(file))
             cout<<file<<" is balanced\n";
              else cout<<file<<" is not balanced\n";
              }
        return 0;
}

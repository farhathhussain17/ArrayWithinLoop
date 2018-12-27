//
//  main.cpp
//  ArrayWithinLoop
//
//  Created by Farhath Hussain on 27/12/2018.
//  Copyright © 2018 Farhath Hussain. All rights reserved.
//

#include <iostream> //Access to input and output
#include <string> //Access to string variables
using namespace std; //Declare use of standard library

int main() { //Enter code in this area
    /*My Tutor had requested me to create an array within a loop to prepare for the next skills portfolio
     coming up in January. I thought that I could achieve that, but I couldn't find the correct
     condition to put in an 'if' statement or a loop. I tried to use a switch statement to link the array to instead.*/
    
    
    string kek[3] = {"Doge", "Pepe", "Trolol"}; /*I used a string variable (stores words/sentences)
    for a array that contains 3 values (dimensions)*/
    
    cout << "Pick a number from 0-2" << endl; //Output statement requesting user to pick a value
    /*Integer variable (stores whole numbers) for userInput. The user would have to type a number from 0-2*/
    int userInput;
    cin >> userInput;
    
    /*The switch statement is activated when the user types a number (0-2)*/
    switch (userInput){
        case 0: //Typing this key triggers the output statement
            cout << kek[0] << endl;
            break; //This ends the switch statement
        case 1: //Typing this key triggers the output statement
            cout << kek[1] << endl;
            break; //This ends the switch statement
        case 2: //Typing this key triggers the output statement
            cout << kek[2] << endl;
            break; //This ends the switch statement
            
    }
    
    system ("pause"); //Keeping the console window open
    return 0; //Successful completion
}

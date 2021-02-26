/*
    Author:  Danny McVey
    Date:    February 26, 2021, 2:35 PM
    Purpose: Asks the user to input how many cookies he or she actually ate,
             then reports how many total calories were consumed.
    Version: 1
 */

//System Libraries
#include <iostream>    //Input/Output Library
using namespace std; //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare variables
    unsigned short eaten, // cookies eaten
            cals; // calories consumed

    //Initialize variables
    cout<<"How many cookies did you eat? ";
    cin>>eaten; 
    
    //Process, map inputs to outputs
    cals=(eaten/3)*300;
    
    //Display initial conditions as well as outputs.
    cout<<cals<<" calories consumed";
    
    //Exit stage right
    return 0;
}


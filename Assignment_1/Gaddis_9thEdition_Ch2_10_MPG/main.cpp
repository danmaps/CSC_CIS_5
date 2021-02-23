/*
    Author:  Danny McVey
    Date:    Feb 23, 2021 
    Purpose: calculates the number of miles per gallon a car gets
    Version: 1
 */

//System Libraries
#include <iostream>    //Input/Output Library
using namespace std;   //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {  
    //Declare variables
    float tank,range,mpg;
    
    //Initialize variables
    tank=15; // car holds 15 gallons of gasoline
    range=375; // car can travel 375 miles before refueling
    
    //Process, map inputs to outputs
    mpg=range/tank;
    
    //Display initial conditions as well as outputs.
    cout<<mpg<<" miles per gallon";
    
    //Exit stage right
    return 0;
}


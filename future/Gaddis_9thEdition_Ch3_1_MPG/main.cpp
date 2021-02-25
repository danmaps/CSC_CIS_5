/*
    Author:  Danny McVey
    Date:    Feb 25, 2021 
    Purpose: calculates a car’s gas mileage
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
    cout<<"number of gallons of gas the car can hold: ";
    cin>>tank;
    
    cout<<"number of miles it can be driven on a full tank: ";
    cin>>range;
    
    //Process, map inputs to outputs
    mpg = range/tank;
    
    //Display initial conditions as well as outputs.
    cout<<mpg<<" miles/gallon";
    
    //Exit stage right
    return 0;
}


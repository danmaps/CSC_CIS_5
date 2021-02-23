/*
    Author:  Danny McVey
    Date:    Feb 23, 2021 
    Purpose: Displays the number of millimeters higher than the current level
             that the ocean’s level will be in 5, 7, and 10 years
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
    float rise,after5,after7,after10;
    
    //Initialize variables
    rise = 1.5; //1.5 millimeters per year
    
    //Process, map inputs to outputs
    after5 = rise * 5;
    after7 = rise * 7;
    after10 = rise * 10;
    
    //Display initial conditions as well as outputs.
    cout<<after5<<"mm higher after 5 years"<<endl;
    cout<<after7<<"mm higher after 7 years"<<endl;
    cout<<after10<<"mm higher after 10 years"<<endl;
    
    //Exit stage right
    return 0;
}


/*
    Author:  Danny McVey
    Date:    February 25, 2021, 12:57 PM
    Purpose: calculates the average rainfall for three months
    Version: 1
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <string>      //string library
using namespace std; //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare variables
    string month1, month2, month3;
    float rain1, rain2, rain3, avg;

    //Initialize variables
    
    cout<<"month 1: ";
    cin>>month1;
    cout<<"rain in month 1: ";
    cin>>rain1;
    cout<<"month 2: ";
    cin>>month2;
    cout<<"rain in month 2: ";
    cin>>rain2;
    cout<<"month 3: ";
    cin>>month3;
    cout<<"rain in month 3: ";
    cin>>rain3;

    //Process, map inputs to outputs
    avg=(rain1+rain2+rain3)/3;
    
    //Display initial conditions as well as outputs.
    std::cout.precision(2);
    cout<<"The average rainfall for "<<month1<<", "
        <<month2<<", and "<<month3<<" is "
        <<std::fixed<<avg<<" inches.";
            
    //Exit stage right
    return 0;
}


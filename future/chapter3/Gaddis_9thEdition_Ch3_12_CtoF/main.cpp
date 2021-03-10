/*
    Author:  Danny McVey
    Date:    February 26, 2021, 10:19 AM
    Purpose: converts Celsius temperatures to Fahrenheit temperatures
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
    float cels, fahr;

    cout<<"celsius:"; 
    cin>>cels; // get input temp
    fahr = ((9.0/5.0)*cels)+32; // do the math   
    cout<<"fahrenheit:"<<fahr; // display output
    
    //Exit stage right
    return 0;
}


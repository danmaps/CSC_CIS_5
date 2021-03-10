/*
    Author:  Danny McVey
    Date:    February 26, 2021, 10:19 AM
    Purpose: converts Celsius temperatures to Fahrenheit temperatures
             uses a function and for loop to show 5 results
    Version: 1
 */

//System Libraries
#include <iostream>    //Input/Output Library
using namespace std; //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes
float cToF(float);

//Execution Begins Here

int main(int argc, char** argv) {
    float cels, fahr;
    
    float temps[5]={20,25,30,35,40}; //array of input values
    
    for (int i=0;i<5;i++){ // loop through all 5 inputs
        fahr = cToF(temps[i]); // use the function to do the conversion
        
        cout<<temps[i]<<"c = "; // display the input temp
        cout<<fahr<<"f"<<endl; // display the converted output temp
    } // end for loop block

    return 0;
}

float cToF(float c){ // returns a float, takes a float
    float f = ((9.0/5.0)*c)+32; // do the math
    return f;
}
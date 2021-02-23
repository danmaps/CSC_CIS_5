/*
    Author:  Danny McVey
    Date:    Feb 23, 2021 
    Purpose: Average of Values 28, 32, 37, 24, and 33
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
    float a,b,c,d,e;
    float sum,avg;
    
    //Initialize variables
    a=28;
    b=32;
    c=37;
    d=24;
    e=33;
    
    //Process, map inputs to outputs
    sum = a+b+c+d+e;
    avg = sum/5;
    //Display initial conditions as well as outputs.
    cout<<"average: "<<avg;
    
    //Exit stage right
    return 0;
}


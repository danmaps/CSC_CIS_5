/*
    Author:  Danny McVey
    Date:    February 23th, 2021  11:58am
    Purpose: Sum of Two Numbers
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
    int fifty,
        hundred,
        total;
    
    //Initialize variables
    fifty = 50;
    hundred = 100;
    
    //Process, map inputs to outputs
    total = fifty + hundred;
    
    //Display initial conditions as well as outputs.
    cout<<fifty<<"+"<<hundred<<"="<<total;
    
    //Exit stage right
    return 0;
}


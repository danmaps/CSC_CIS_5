/*
    Author:  Danny McVey
    Date:    Feb 23, 2021  12:43pm
    Purpose: Computes the total sales tax on a $95 purchase. Assumes the state 
             sales tax is 4 percent, and the county sales tax is 2 percent.
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
    float purchase,
          stRate,
          coRate,
          tax;
    
    //Initialize variables
    purchase = 95.00;
    stRate = 0.04;
    coRate = 0.02;
            
    //Process, map inputs to outputs
    tax = purchase * (stRate+coRate);
    
    //Display initial conditions as well as outputs.
    cout<<"tax: ";
    std::cout.precision(2);
    cout<<"$"<<std::fixed<<tax;
    
    //Exit stage right
    return 0;
}


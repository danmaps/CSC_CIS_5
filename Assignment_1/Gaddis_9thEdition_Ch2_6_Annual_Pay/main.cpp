/*
    Author:  Danny McVey
    Date:    Feb 23, 2021 
    Purpose: calculate the employee’s total annual pay
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
    float payAmount; //the amount of pay the employee earns each pay period
    int  payPeriods; //the number of pay periods in a year
    float annualPay; //the employee’s total annual pay
    
    //Initialize variables
    payAmount=2200.0;
    payPeriods=26;
    
    //Process, map inputs to outputs
    annualPay=payAmount*payPeriods;
    
    //Display initial conditions as well as outputs.
    std::cout.precision(2);
    cout<<"$"<<std::fixed<<annualPay;
    
    //Exit stage right
    return 0;
}


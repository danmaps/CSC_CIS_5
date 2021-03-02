/*
    Author:  Danny McVey
    Date:    Feb 23, 2021  1:08pm
    Purpose: Computes the tax and tip on a restaurant bill for a patron with a
             $88.67 meal charge. The tax should be 6.75 percent of the meal
 *           cost. The tip should be 20 percent of the total after adding the tax. 
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
    float meal,taxRate,tipPrc; //inputs
    float taxAmt,tipAmt,total;
    
    //Initialize variables
    meal = 88.67;
    taxRate = 0.0675;
    tipPrc = 0.20;
    
    //Process, map inputs to outputs
    taxAmt = meal*taxRate;
    tipAmt = (meal + taxAmt)*tipPrc;
    total = meal + taxAmt + tipAmt;
    
    //Display initial conditions as well as outputs.
    std::cout.precision(2);
    
    cout<<"meal cost: ";
    cout<<"$"<<std::fixed<<meal<<endl;
    
    cout<<"tax amount: ";
    cout<<"$"<<taxAmt<<endl;
    
    cout<<"tip amount: ";
    cout<<"$"<<tipAmt<<endl;
    
    cout<<"total bill: ";
    cout<<"$"<<total<<endl;
    
    //Exit stage right
    return 0;
}


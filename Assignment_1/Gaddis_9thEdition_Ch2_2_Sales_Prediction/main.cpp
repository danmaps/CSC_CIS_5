/*
    Author:  Danny McVey
    Date:    February 23rd, 2021  12:09pm
    Purpose: Sales Prediction
        The East Coast sales division of a company generates 58 percent of total
        sales. Based on that percentage, this program predicts how much the East
        Coast division will generate if the company has $8.6 million in sales
        this year.
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
    float sales,
          ratio,
          eCoast;
    
    //Initialize variables
    sales = 8.6e6f;
    ratio = 0.58;
    
    //Process, map inputs to outputs
    eCoast = ratio * sales;
    
    //Display initial conditions as well as outputs.
    cout<<"East Coast division: ";
    std::cout.precision(2);
    cout<<"$"<<std::fixed<<eCoast;
    
    //Exit stage right
    return 0;
}


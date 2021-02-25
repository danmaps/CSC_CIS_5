/*
    Author:  Danny McVey
    Date:    February 25, 2021, 1:55 PM
    Purpose: displays the number of cups of each ingredient needed for the
             specified number of cookies
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
    
    //Declare variables
    float cookies,sugar,butter,flour;

    //Initialize variables
    cout<<"number of cookies: ";
    cin>>cookies;

    //Process, map inputs to outputs
    sugar=(cookies/48)*1.5;
    butter=(cookies/48)*1.0;
    flour=(cookies/48)*2.75;

    //Display initial conditions as well as outputs.
    cout<<sugar<<" cups of sugar"<<endl;
    cout<<butter<<" cups of butter"<<endl;
    cout<<flour<<" cups of flour"<<endl;
    
    //Exit stage right
    return 0;
}


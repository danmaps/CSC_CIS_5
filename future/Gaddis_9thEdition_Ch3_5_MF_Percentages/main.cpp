/*
    Author:  Danny McVey
    Date:    February 25, 2021, 1:48 PM
    Purpose: display the percentage of males and females in the class
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
    int males, females, total;
    float fper, mper;

    //Initialize variables
    cout<<"males: ";
    cin>>males;
    cout<<"females: ";
    cin>>females;
    
    //Process, map inputs to outputs
    total=males+females;
    fper=(static_cast<float>(females)/static_cast<float>(total))*100;
    mper=(static_cast<float>(males)/static_cast<float>(total))*100;
    
    //Display initial conditions as well as outputs.
    cout<<mper<<" percent male"<<endl;
    cout<<fper<<" percent female";

    //Exit stage right
    return 0;
}


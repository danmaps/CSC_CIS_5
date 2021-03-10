/*
    Author:  Danny McVey
    Date:    February 25, 2021, 12:08 PM
    Purpose: Averages test scores
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
    float t1,t2,t3,t4,t5;
    float avg;

    //Initialize variables
    cout<<"test score 1: ";
    cin>>t1;
    cout<<"test score 2: ";
    cin>>t2;
    cout<<"test score 3: ";
    cin>>t3;
    cout<<"test score 4: ";
    cin>>t4;
    cout<<"test score 5: ";
    cin>>t5;
    
    //Process, map inputs to outputs
    avg=(t1+t2+t3+t4+t5)/5;

    //Display initial conditions as well as outputs.
    std::cout.precision(1);
    cout<<"average score: ";
    cout<<std::fixed<<avg<<endl;
    
    //Exit stage right
    return 0;
}


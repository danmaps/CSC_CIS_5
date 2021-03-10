/*
    Author:  Danny McVey
    Date:    February 25, 2021, 12:01 PM
    Purpose: displays the amount of income generated from ticket sales
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
    int aSeat,bSeat,cSeat;
    float total;

    //Initialize variables
    cout<<"Class A seats: ";
    cin>>aSeat;
         
    cout<<"Class B seats: ";
    cin>>bSeat;
         
    cout<<"Class C seats: ";
    cin>>cSeat;
         
    //Process, map inputs to outputs
    total=(aSeat*15)+(bSeat*12)+(cSeat*9);
    
    //Display initial conditions as well as outputs.
    std::cout.precision(2);
    cout<<"total income: ";
    cout<<"$"<<std::fixed<<total<<endl;

    //Exit stage right
    return 0;
}


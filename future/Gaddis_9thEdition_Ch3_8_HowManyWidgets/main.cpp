/*
    Author:  Danny McVey
    Date:    February 25, 2021, 4:19 PM
    Purpose: calculates how many widgets are stacked on a pallet, based on the
             total weight of the pallet
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
    float pallet, //weight of the pallet empty
          loaded, //weight of the pallet loaded
          widget; //output number of widgets

    //Initialize variables
    cout<<"enter the weight of the pallet by itself: ";
    cin>>pallet;
    cout<<"enter the weight of the pallet with widgets: ";
    cin>>loaded;

    //Process, map inputs to outputs
    widget=(loaded-pallet)/12.5; //each widget weighs 12.5lbs each

    //Display initial conditions as well as outputs.
    cout<<widget<<" widgets on the pallet.";

    //Exit stage right
    return 0;
}


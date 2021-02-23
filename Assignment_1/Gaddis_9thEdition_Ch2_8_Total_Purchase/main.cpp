/*
    Author:  Danny McVey
    Date:    Feb 23, 2021 
    Purpose: A customer in a store is purchasing five items. Displays each 
             item’s price, the subtotal of the sale, the amount of sales tax,
             and the total.
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
    //Declare/Initialize variables
    float items[5] = {15.95,24.95,6.95,12.95,3.95};
    float subtotal,tax,total;
    
    //Process, map inputs to outputs
    subtotal = 0;
    for(int i = 0; i<5 ; i++){
       subtotal+=items[i];
    }
    tax = subtotal*0.07;
    total = subtotal + tax;
    
    //Display initial conditions as well as outputs.
    for(int i = 0; i < 5; i++) {
        cout << "item " << i+1 << ": $" << items[i] << "\n";
    }
    cout<<endl;
    
    std::cout.precision(2);

    cout<<"subtotal: "  <<"$"<<std::fixed<<subtotal<<endl;
    cout<<"sales tax: " <<"$"<<std::fixed<<tax<<endl;
    cout<<"total: "     <<"$"<<std::fixed<<total<<endl;
    
    //Exit stage right
    return 0;
}


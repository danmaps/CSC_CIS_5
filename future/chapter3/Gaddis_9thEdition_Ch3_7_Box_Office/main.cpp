/*
    Author:  Danny McVey
    Date:    February 25, 2021, 3:46 PM
    Purpose: calculates a theater’s gross and net box office profit for a night
    Version: 1
 */

//System Libraries
#include <iostream>   // Input/Output Library
#include <iomanip>    // IO Manipulators
#include <string>     // string library
using namespace std;  // Library Name-space


//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare variables
    string movie; //movie name
    int adult,child; //tickets sold
    float gross,net; //gross box office profit, net box office profit
    float paid; //amount paid to distributor
 
    //Initialize variables
    cout<<"movie name: ";
    getline(cin, movie); //this way, the string can include spaces
    cout<<"adult tickets sold: ";
    cin>>adult;
    cout<<"child tickets sold: ";
    cin>>child;
    
    //Process, map inputs to outputs
    gross=(10*adult)+(6*child);
    net=0.2*gross;
    paid=gross-net;
    
    //Display initial conditions as well as outputs.
    
    //setw for columnar formatting 
    using std::setw;
    cout<<"\n"<<setw(30)<<"movie name: \""<<movie<<"\""<<endl;
    cout<<setw(29)<<"adult tickets: "<<adult<<endl;
    cout<<setw(29)<<"child tickets: "<<child<<endl;
    std::cout.precision(2);
    cout<<setw(29)<<"gross box office profit: "<<"$"<<std::fixed<<gross<<endl;
    cout<<setw(29)<<"net box office profit: "<<"$"<<net<<endl;
    cout<<setw(29)<<"amount paid to distributor: "<<"$"<<paid<<endl;
    
    //Exit stage right
    return 0;
}


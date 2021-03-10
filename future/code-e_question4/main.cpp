/* 
 * Author:Danny McVey
 * Date:3/11/21 10:27
 * Purpose:More Test Output Format
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here
void output(int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    int i1,i2,i3,i4;
    
    //Initialize or input data here
    cin>>i1;
    cin>>i2;
    cin>>i3;
    cin>>i4;
    
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    
    //Format and display outputs here
    output(i1);cout<<endl;
    output(i2);cout<<endl;
    output(i3);cout<<endl;
    output(i4);
    
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}

void output(int i){
    cout<<setw(9)<<i;
    cout<<setprecision(1)<<fixed<<setw(10)<<static_cast<float>(i);
    cout<<setprecision(2)<<fixed<<setw(10)<<static_cast<float>(i);
}
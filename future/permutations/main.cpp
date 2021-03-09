/*
    Author:  Danny McVey
    Date:    March 9, 2021, 12:37 PM
    Purpose: https://www.youtube.com/watch?v=5Yy_unGaD-w
             - generate all images as arrays
    Version: 1
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <cmath> // needed for pow function
#include <stdlib.h>     // needed for rand
using namespace std; //Library Name-space

//User Libraries

//Global/Universal Constants -- No Global Variables
//Science, Math, Conversions, Higher Dimensioned constants only

//Function Prototypes

//Execution Begins Here



int main(int argc, char** argv) {
    //Declare variables
    unsigned short x,y; // size of the image in pixels
    int depth; // number of possible colors
    long double images; // output: number of possible images
   
    //Initialize variables
    x=10;
    y=10;
    depth=4;
    
    //Process, map inputs to outputs
    images = pow((x*y),depth);
    
    //Display initial conditions as well as outputs.
    cout<<images<<endl; 
    
    int arr[x][y];
    
    for (int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            arr[i][j]=rand()%depth;
        }
    }
    
    
    for(int i=0;i<x;i++){ 
        for(int j=0;j<y;j++){ 
            cout<<arr[i][j]<<" "; 
        } 
        cout<<endl;
    } 

    //Exit stage right
    return 0;
}


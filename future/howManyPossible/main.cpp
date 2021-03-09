/*
    Author:  Danny McVey
    Date:    March 5, 2021, 9:28 PM
    Purpose: https://www.youtube.com/watch?v=5Yy_unGaD-w
             other ideas: - generate a random image from the set
                          - calculate the size of the images on disk (total)
    Version: 1
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <cmath> // needed for pow function
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
    x=64;
    y=64;
    depth=64;
    
    //Process, map inputs to outputs
    images = pow((x*y),depth);
    
    //Display initial conditions as well as outputs.
    cout<<images; // 64,64,64 returns 1.55252e+231 which is huge?
    
    //Exit stage right
    return 0;
}


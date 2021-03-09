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


const int x=4;
const int y=4;
const int depth=4;

int * mkImg();
void display(int[x][y]);

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare variables
    long double images; // output: number of possible images
    
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
    
//    int *arr;
    
//    arr = mkImg();
    
    display(arr);
    
    // for each column (x) in the grid:
    // for each cell in the column:
    // set the value to 0
    
    
    //Exit stage right
    return 0;
}

void display(int arr[x][y]){ //returns nothing, takes an array of integers
    // output each array element's value 
    for(int i=0;i<x;i++){ 
        for(int j=0;j<y;j++){ 
            cout<<arr[i][j]<<" "; 
        } 
        cout<<endl;
    } 
    
}

int * mkImg(){
    
}
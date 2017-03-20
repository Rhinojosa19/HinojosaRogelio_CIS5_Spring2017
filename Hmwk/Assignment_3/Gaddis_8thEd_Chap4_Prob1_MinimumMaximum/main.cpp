/* 
 * File:   main.cpp
 * Author: Rogelio Hinojosa
 * Created on March 16, 2017, 05:40 PM
 * Purpose: Using conditional operators to determine 
 *          which number is smaller and bigger.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float Numb1; //X integer number 
    float Numb2; //Y integer number 
    
    //Input data
    cout<<"This program determines which numbers "<<
    cout<<" is greater using conditional operators"<<endl;
    cin>>Numb1>>Numb2;
    
    //Map inputs to outputs or process the data
        if (Numb1>Numb2)
            cout<<"The greatest number is = "<<Numb1<<endl;
        else
            cout<<"The greatest number is = "<<Numb2<<endl;

    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}


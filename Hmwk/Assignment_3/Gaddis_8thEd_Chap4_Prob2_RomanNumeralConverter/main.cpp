/* 
 * File:   main.cpp
 * Author: Rogelio Hinojosa
 * Created on March 16, 2017, 07:13 PM
 * Purpose:  Write a program that converts Numbers into Roman Numerals
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
    unsigned int Numbr; //Number
    
    //Input data
    cout<<"This program converts numbers on the interval [1-10] "<<
    cout<<"to Roman Numerals."<<endl;
    cout<<"Type any number between 1 through 10."<<endl;
    cin>>Numbr;
        
    //Map inputs to outputs or process the data
    switch (Numbr){
        case 1:
          cout<<"The Roman Number is = "<<" I "<<endl;break;
        case 2:
          cout<<"The Roman Number is = "<<" II "<<endl;break;
        case 3:
          cout<<"The Roman Number is = "<<" III "<<endl;break;
        case 4:
          cout<<"The Roman Number is = "<<" IV "<<endl;break;
        case 5:
          cout<<"The Roman Number is = "<<" V "<<endl;break;
        case 6:
          cout<<"The Roman Number is = "<<" VI "<<endl;break;
        case 7:
          cout<<"The Roman Number is = "<<" VII "<<endl;break;
        case 8:
          cout<<"The Roman Number is = "<<" VIII "<<endl;break;
        case 9:
          cout<<"The Roman Number is = "<<" IX "<<endl;break;
        case 10:
          cout<<"The Roman Number is = "<<" X "<<endl;break;  
                    
    }
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}


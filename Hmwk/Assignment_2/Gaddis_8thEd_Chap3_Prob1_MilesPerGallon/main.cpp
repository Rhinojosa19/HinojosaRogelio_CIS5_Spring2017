/* 
 * File:   main.cpp
 * Author: Rogelio Hinojosa 
 * Created on March 8, 2017, 11:49 AM
 * Purpose: Calculate Miles Per Gallon 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float NmGall; //Number of Gallons 
    float NmMlDrv; //Number of Miles Driven 
    float TotMil; //Total amount of Miles Driven per gallon of gas
 
    //Output Located Here
    cout<<"This program calculates Total Miles Driven per Gallon of Gas"<<endl;
    
    //ask users for miles driven
    
    //get input from user
    cin>>NmMlDrv;
    cin>>NmGall;
    //ask user for size of gas tank
    
    //get size of gas tank
    
    //once you have the values entered, do math with them
    //Process/Calculations Here
    TotMil =NmMlDrv/NmGall  ; //Total Miles driven per gallon of gas
    
    //output result stored in TotMil

    cout<<"Your car uses "<<TotMil<<" gallons per mile.";
    //Exit
    return 0;
}


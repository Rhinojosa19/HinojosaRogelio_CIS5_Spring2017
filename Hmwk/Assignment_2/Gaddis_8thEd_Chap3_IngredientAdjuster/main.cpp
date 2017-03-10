/* 
 * File:   main.cpp
 * Author: Rogelio Hinojosa
 * Created on March 9, 2016, 11:31 AM
 * Purpose: How many cookies to make
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
    
    //Ask user how many Cookies he or she wants to make
    
    //Declare all Variables Here
    float CpSugr=1.5; //Cups of Sugar 
    float CpButtr=1; //Cup of Butter
    float CpFlwr=2.75; //Cups of Flower
    char  x; //X Amount of Cookies
    float  R; //Ratio
    float AmnCook=48; //Amount of Cookies
    float TotSugr, TotBttr, TotFlwr; //Total amount of cups for each Ingredient
    
    //Input or initialize values Here
    cout<<"This program Calculates how many cookies will be produced"<<endl;
    cin >>x;
    
    //Process/Calculations Here
    R= x/AmnCook; 
    
    TotSugr=CpSugr*R;
    
    TotBttr=CpButtr*R;
    
    TotFlwr=CpFlwr*R;
           
    //Output Located Here
    cout<<"Ration Calculates How many Cookies the User wants to make = "<<
            R<<endl;
    cout<<"Total cups of Sugar = "<<TotSugr<<endl;
    cout<<"Total cup of Butter = "<<TotBttr<<endl;
    cout<<"Total cups of Flower = "<<TotFlwr<<endl;
    

    //Exit
    return 0;
}


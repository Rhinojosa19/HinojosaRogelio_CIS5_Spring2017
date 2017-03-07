/* 
 * File:   main.cpp
 * Author: Rogelio Hinojosa
 * Created on March 7, 2016, 12:05 PM
 * Purpose:  Calculate # of Candy Bars
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
    char sex;                   //M or F
    unsigned short ht,wt,age;  //height(in), weight(lbs), age(years)
    unsigned char cdyCals=230;//Candy bar calories 
    float bmr;//Basic Metabolic Rate (calories)
    int nCdyBrs;//Number of candy bars we can eat
    
    //Input data
    cout<<"This program calculates the number of ";
    cout<<"candy bars allowed per day based upon your BMR"<<endl;
    cout<<"Type in your Sex(M/F),WT(lbs),Ht(in),Age(yrs)"<<endl;
    cout<<"Inputs are integer based"<<endl;
    cin>>sex>>wt>>ht>>age;
    
  //Map inputs to outputs or process the data
    bmr=(sex=='M')?
         66 + 6.3f*wt + 12.9f*ht - 6.8f*age:
        655 + 4.3f*wt + 4.7f*ht  - 4.7f*age;
    nCdyBrs=static_cast<int>(bmr/cdyCals);
    
    //Output Located Here
    cout<<"The number of candy bars you can eat = "<<nCdyBrs<<endl;

    //Exit
    return 0;
}


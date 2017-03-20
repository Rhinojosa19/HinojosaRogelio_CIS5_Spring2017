/* 
 * File:   main.cpp
 * Author: Rogelio Hinojosa
 * Created on March 17, 2017, 10:45 AM
 * Purpose: Display Magic Dates
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
int Month,Day,Yr;

    //Input data
 cout<<"This program determines whether the month times ";
 cout<<"the day is equal to the year."<<endl;
 cout<<"Type the Month in numeric form."<<endl;
 cout<<"Type the day."<<endl;
 cout<<"Type the two digit Year."<<endl;
 cin>>Month;
 cin>>Day;
 cin>>Yr;
 
    //Map inputs to outputs or process the data
 if (Yr == Month*Day)
 cout<<"The date is Magic"<<endl;
 
 else 
  cout<<"The date is not Magic"<<endl;
 
    //Output the transformed data

    //Exit stage right!
    return 0;
}


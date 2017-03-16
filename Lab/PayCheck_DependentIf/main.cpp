/* 
 * File:   main.cpp
 * Author: Rogelio Hinojosa
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Calculating PayCheck using Dependent If 
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
    float HrsWrk; //Hours Worked 
    float PayRt=10; //Pay Rate
    float PayChck; //Total Pay Check
            
    //Input data
    cout<<"This program calculates your Paycheck from Pay Rate for input"<<endl;
    cout<<"The data type used is an integer [0-10]"<<endl;
    cout<<"Type in the Hours worked"<<endl;
    cin>>HrsWrk;    
   // if(!(PayRt>=0&&PayRt<10)) cout <<"Pay Rate cannot be less than 10";
    
  //Map inputs to outputs 
    if(HrsWrk<=40)
        PayChck=PayRt*HrsWrk;
    
    else      PayChck=PayRt*HrsWrk+PayRt;
    
 //Outputs
    cout<<"PayCheck Total Amount = "<<PayChck<<endl;
    
    //Exit
    return 0;
}


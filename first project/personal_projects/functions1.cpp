#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
    // PASSING VARIIABLES BY THE USER 
    int first_number,second_number;

    cout<<"ENTER YOUR FIRST NUMBER: "<<endl;
     cin>> first_number;
    
    cout<<"ENTER YOUR SECOND NUMBER: "<<endl;
     cin>> second_number;
    
    cout<<"Your answer is: "<< pow(first_number,second_number)<<endl;


 return 0;
}
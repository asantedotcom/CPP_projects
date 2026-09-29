#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    // CREATING A PROGRAM TO ADD ,MULTIPLY, SUBTRACT,DIVIDE AND FIND THE REMAINDER OF TWO NUMBERS
  
    int first_number;
    int second_number;

    cout<<"ENTER YOUR FIRST NUMBER: "<<endl;
    cin>>first_number;

    cout<<"ENTER YOUR SECOND NUMBER: "<<endl;
    cin>>second_number;


    cout<<"The sum of your two numbers are: "<<first_number+second_number<<endl;
    cout<<"The product of your two numbers are: "<<first_number*second_number<<endl;
    cout<<"The subtraction of your two numbers are: "<<first_number-second_number<<endl;
    cout<<"The division of your two numbers are: "<<first_number/second_number<<endl;
    cout<<"The remainder of these two numbers are: "<<first_number%second_number<<endl;
    cout<<"The highest number is:"<<fmax(first_number,second_number)<<endl;
    cout<<"The lowest number is: "<<fmin(first_number,second_number)<<endl;


    
    return 0;
}
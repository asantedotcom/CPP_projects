#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //FINDING THE LOWEST AGE OF THREE PEOPLE 

    int age1,age2,age3;

    cout<<"ENTER YOUR FIRST AGE: "<<endl;
    cin>>age1;

    cout<<"ENTER YOUR SECOND AGE: "<<endl;
    cin>>age2;

    cout<<"ENTER YOUR THIRD AGE: "<<endl;
    cin>>age3;

    cout<<"The lowest age is: "<<fmaxf(age1,age2,age3)<<endl;


    return 0;
}
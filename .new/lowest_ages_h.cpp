#include <iostream>
#include <string>
using namespace std;
int main ()
{
  // a program that finds the lowest ages 

  int first_age;
  int second_age;
  int third_age;
  int fourth_age;



    cout<<"\n--------LOWEST AGE--------"<<endl;

  cout<<"\nEnter yout first age: "<<endl;
   cin>>first_age;

   cout<<"\nEnter yout second age: "<<endl;
    cin>>second_age;

   cout<<"\nEnter yout third age: "<<endl;
    cin>>third_age;

   cout<<"\nEnter yout last age: "<<endl;
    cin>>fourth_age;



    if(first_age < second_age &&
        first_age < third_age &&
        first_age < fourth_age)
    {
         cout<<"\nYour age is: "<<first_age<<endl;
    }
    else if (second_age < third_age &&
             second_age < fourth_age &&
             second_age < first_age)
    {
         cout<<"\nYour answer is: "<<second_age<<endl;
    }
    else if (third_age < fourth_age &&
             third_age < first_age &&
             third_age < second_age)
    {
         cout<<"\nYour answer is: "<<third_age<<endl;
    }
    else if (fourth_age < third_age &&
             fourth_age < first_age &&
             fourth_age < second_age)
    {
         cout<<"\nYour answer is: "<<fourth_age<<endl;
    }
    else if (first_age == second_age &&
             first_age == third_age &&
             first_age == fourth_age)
    {
         cout<<"\nYour answer is: "<<first_age<<endl;
    }
    else 
    {
        cout<<"\nInvalid Input : Try Again :)"<<endl;
    }
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main ()
{
 //  create a program that calculates the highest age
 // first accept them form the user
    int first_age;
    int second_age;
    int third_age;
    int fourth_age;
    double average;

    cout<<"\n--------DIFFERENCE OF AGES--------"<<endl;

    
        cout<<"\nEnter your first age: "<<endl;
        cin>>first_age;

        cout<<"Enter your second age: "<<endl;
        cin>>second_age;

        cout<<"Enter your third age: "<<endl;
        cin>>third_age;

        cout<<"Enter your fourth age: "<<endl;
        cin>>fourth_age;

        average = first_age + second_age + third_age + fourth_age / 4.0 ;
         
        cout<<"Your average: "<<average<<endl;













        // if(first_age > second_age &&
        //      first_age > third_age &&
        //      first_age > fourth_age)
        //  {
        //      cout<<"Your answer is: "<<first_age<<endl;
        //  }
        // else if (second_age > third_age &&
        //   second_age > fourth_age &&
        //   second_age > first_age)
        // {
        //      cout<<"Your answer is: "<<second_age<<endl;
        // }
        // else if (third_age> fourth_age && 
        //     third_age > first_age &&
        //     third_age > second_age)
        // {
        //      cout<<"Your answer is: "<<third_age<<endl;
        // }
        // else if (fourth_age > first_age &&
        //     fourth_age > second_age && 
        //     fourth_age > third_age)
        // {
        //      cout<<"Your answer is: "<<fourth_age<<endl;
        // }
        // else if(first_age == second_age &&
        //       second_age == third_age &&
        //       third_age == fourth_age)
        // {
        //      cout<<"Your answer are equal"<<endl;
        // }
        // else 
        // {
        //     cout<<"Invalid Input"<<endl;
        // }

    return 0;
}
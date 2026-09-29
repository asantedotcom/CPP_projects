#include <iostream>

using namespace std;

int main()
{
    // Creating a program to determine if the user is eligible to vote

    int age ;



    cout<<"ENTER YOUR AGE? "<<endl;
    getline(cin,age);

    if (age >=18)
    {
        cout<<"YOU ARE ELIGIBLE TO VOTE."<<endl;
    }
    else 
    {
        cout<<"YOU ARE NOT ELIGIBLE TO VOTE.......TRY AGAIN WHEN YOU ARE OLDER."<<endl;
    }


    return 0;
}

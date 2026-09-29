#include <iostream>
#include <string>
using namespace std;
int main()
{
    //This program will guess my name if it is correct or wrong

    string answer = "geoffery"; 
    string guess;

    cout<<"GUESS THE NAME: "<<endl;
    cin>>guess;

    if (guess==answer)
    {
        cout<<"YOU GUESSED RIGHT!!"<<endl;
    }
    else 
    {
        cout<<"TRY AGAIN :)"<<endl;
    }




    return 0;
}
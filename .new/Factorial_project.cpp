#include <iostream>
using namespace std;
int main ()
{
 // getting a factorial of a number 

    int factorial;
    cout<<"ENTER THE NUMBER YOU WANT: "<<endl;
    cin>>factorial;

    for(int i = factorial - 1; i > 0; i--)
    {
        factorial = factorial * i;
    }
    cout<<factorial<<endl;





    return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main()
{
  // a program that opens a door if the user has the correct password
  int password;
  int pass;
  password = 22334455;

  cout<<"\nWhats the passowrd: "<<endl;
  cin>>pass;

  if (pass == password)
  {
    cout<<"\nDoor opened."<<endl;
  }
  else if(pass != password)
  {
    cout<<"\nDoor still closed"<<endl;
  }
  else 
  {
    cout<<"\nGet the fuck out"<<endl;
  }
  



    return 0;
}
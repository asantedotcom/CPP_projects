#include <iostream>
#include <string>
using namespace std;
int main()
{
 // To see if the person is eligible to vote.
 char citizen;
 int age;

 cout<<"\nEnter your age: "<<endl;
 cin>>age;

 cout<<"\nARE YOU A CITIZEN(Y/N): "<<endl;
 cin>>citizen;


 if (age >= 18 && (citizen == 'Y'|| citizen == 'y'))
 {
    cout<<"\nYOU ARE ELIGIBLE "<<endl;
 }
 else if (age < 18 && (citizen == 'N' || citizen == 'n'))
 {
    cout<<"\nTRY AGAIN WHEN YOU ARE A CITIZEN"<<endl;
 }
 else if (age >= 18 && (citizen == 'N' || citizen == 'n'))
 {
    cout<<"\nTRY AGAIN WHEN YOU BECOME A CITIZEN :)"<<endl;
 }
 else if ( age < 18 && (citizen =='Y' || citizen =='y'))
 {
     cout<<"\nTRY AGAIN WHEN YOURE OLD"<<endl;
 }
 else 
 {
    cout<<"\nINVALID ANSWER :)"<<endl;
 }




    return 0;
}
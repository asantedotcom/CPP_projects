#include <iostream>
#include <string>
using namespace std;
int main()
{
 // Access to a security clearance you need to be the admin or need a high level clearance.
 char admin;
 char clerance;
 char login;
 int password;
 int pass;
 pass = 12345;
 

    cout<<"\n--------SECURITY CLEARANCE--------"<<endl;


    cout<<"\nDO YOU WANT TO LOGIN(y/n): "<<endl;
    cin>>login;

    if(login == 'y' || login == 'Y')
    {
        cout<<"\nARE YOU AN ADMIN(y/n): "<<endl;
        cin>>admin;

        if(admin == 'y' || admin =='y')
        {
            cout<<"\nWhats the password: "<<endl;
            cin>>password;

              if (password == pass)
            {
                cout<<"\nACCESS GRANTED"<<endl;
            }
            else if( password != pass)
            {
                cout<<"\nACCESS DENIED"<<endl;
            }
            else 
            {
                cout<<"\nMOVE!!!"<<endl;
            }
        }
        else if(admin == 'n' || admin == 'N' )
        {
            cout<<"\nDO YOU HAVE SECURITY CLEARANCE(y/n): "<<endl;
            cin>>clerance;

            if(clerance == 'y' || clerance == 'Y')
            {
                cout<<"\nEnter the security clearance code: "<<endl;
                cin>>password;

                if (password == pass)
                {
                    cout<<"\nACCESS GRANTED"<<endl;
                }
                else if( password != pass)
                {
                    cout<<"\nACCESS DENIED"<<endl;
                }
                else 
                {
                    cout<<"\nMOVE!!!"<<endl;
                }
            }
            else if(clerance == 'n' || clerance == 'N')
            {
                cout<<"\nACCESS DENIED"<<endl;
            }
            else 
            {
                cout<<"\nMOVE!!!"<<endl;
            }
        }
        else 
        {
            cout<<"\nGET F OUT!!!"<<endl;
        }
    }
    else if (login == 'n' || login == 'N')
    {
        cout<<"\nOK. BYEEEE :)"<<endl;
    }
    else 
    {
        cout<<"\nGET OUT!!!"<<endl;
    }
     return 0;
}
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
 // creating a program for a restaurant menu that will allow the user to select a meal and calculate the total cost of the meal based on the quantity ordered.
 int choice;
 int quantity;
 double price;
 double total_cost;
 double vat;
 double total_bill;


 cout<<"\n-----RESTAURANT MENU-----"<<endl;

 cout<<"1. Rice              -ghc20"<<endl;
 cout<<"2. Pizza             -ghc30"<<endl;
 cout<<"3. Burger            -ghc230"<<endl;
 cout<<"4. Chicken           -ghc204"<<endl;
 cout<<"5. Stew              -ghc290"<<endl;
 cout<<"6. Banku             -ghc80"<<endl;
 cout<<"7. Shito             -ghc320"<<endl;
 cout<<"8. Okro              -ghc60"<<endl;
 cout<<"9. Assorted Rice     -ghc100"<<endl;
 cout<<"10. Jollof           -ghc200"<<endl;
 
    cout<<"\nCHOOSE THE NUMBER OF ITEMS ON THE MENU (1-10): "<<endl;
    cin>>choice;

    cout<<"ENTER THE NUMBER OF QUANTITY: "<<endl;
    cin>>quantity;

    if(choice ==1)
    {
        price = 20;
        cout<<"\nITEM 1 ORDERED ON THE LIST"<<endl;
    }
    else if(choice == 2)
    {
        price = 30;
        cout<<"\nITEM 2 ORDERED ON THE LIST"<<endl;
    }
    else if(choice == 3)
    {
        price = 230;
        cout<<"\nITEM 3 ORDERED ON THE LIST"<<endl;
    }
    else if(choice == 4)
    {
        price = 204;
        cout<<"\nITEM 4 ORDERED ON THE LIST"<<endl;
    }
    else if(choice == 5)
    {
        price = 290;
        cout<<"\nITEM 5 ORDERED ON THE LIST"<<endl;
    }
    else if(choice == 6)
    {
        price = 80;
        cout<<"\nITEM 6 ORDERED ON THE LIST"<<endl;
    }
    else if(choice == 7)
    {
        price = 320;
        cout<<"\nITEM 7 ORDERED ON THE LIST"<<endl;
    }
    else if(choice == 8)
    {
        price = 60;
        cout<<"\nITEM 8 ORDERED ON THE LIST"<<endl;
    }
    else if(choice == 9)
    {
        price = 100;
        cout<<"\nITEM 9 ORDERED ON THE LIST"<<endl;
    }
    else if(choice == 10)
    {
        price = 200;
        cout<<"\nITEM 10 ORDERED ON THE LIST"<<endl;
    }
    else
    {
        cout<<"\nINVALID CHOICE"<<endl;
        return 0;
    }    

    total_cost = price * quantity;
    vat = total_cost * 0.15;
    total_bill = total_cost + vat;

    cout<<"\nYour Total Cost is: "<<total_cost<<endl;
    cout<<"\nYour VAT is: "<<vat<<endl;
    cout<<"\nYour Total Bill is: "<<total_bill<<endl; 




    return 0;
}

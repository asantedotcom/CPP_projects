#include <iostream>
using namespace std;

double calculateDiscount(price)
{
    if (price >= 1000)
      {
        return 20;
      }
    else if (price >= 700)
     {
        return 15;
     }
    else if (price >= 500)
     {
        return 10;
     }
    else if (price >= 200)
     {
        return 5;
     }
    else
     {
        return 0;
     }
}


int main()
{

    cout <<"Enter the price of the item: ";
    double price;

    // calculateDiscount(price);


    cout<<"The discount percentage is: "<<calculateDiscount(price)<<"%"<<endl;

    return 0;
}
#include <iostream>
using namespace std;

  // fuunction prototype 
int areaOfRectangle (int &lenght , int &breadth);

int areaOfRectangle()
{

    return length*breadth;
}

int main()
{
    // accepting length and breadth as input frrom the user 

    int length;
    int breadth;

    cout<<"Enter your length: "<<endl;
    cin>>length;

    cout<<"Enter your breadth: "<<endl;
    cin>>breadth;

    // creating referencces 
    int &reflength = lenght;
    int &refbreadth = breadth;

    // creating pointers 
    int *ptrlength = &length;
    int *ptrbreadth = &breadth;

    cout<<"Address of the lenght: "<<ptrlength;
    cout<<"Address of the lenght: "<<ptrbreadth;



    // output 
    int area = areaOfRectangle (reflength, refbreadth);
    cout<<"AREA: "<<area;

    return 0;
}
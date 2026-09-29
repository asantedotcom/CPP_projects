#include <iostream>
using namespace std;

int biggest(int a, int b, int c)
{
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else
        return c;
}

int main()
{

  int a,b,c;

  cout<<"Enter three numbers: "<<endl;
    cin>>a>>b>>c;


   cout<<"The biggest number is: "<<biggest(a,b,c)<<endl;

    return 0;
}
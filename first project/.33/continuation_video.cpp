#include <iostream>
#include <cmath>
#include <climits> //if you want to know how much you can store in thr thesee different memory sizes  
#include <float.h> // if you want  to trust the significant digits use this pre-processor
using namespace std;
int main()
{
    // Finding the size of for int  
    // short a;
    // long b;
    // int c;
    // long long d; 
    // // short<= int <= long <= int <= long long 
    // unsigned short aa;
    // unsigned long bb;
    // unsigned int cc;
    // unsigned long long dd; 
    // unsigned allows only positive values 


    // To find the memory 
    // cout<<sizeof(short)<<endl;
    // cout<<sizeof(long)<<endl;
    // cout<<sizeof(int)<<endl;
    // cout<<sizeof(long long)<<endl;
   // NOTE : the answers are in byts, so you have to convert them into 8 bits


    // cout<<SHRT_MAX<<endl;    //Use these in addition to the include climits to find the positive and negative full bits
    // cout<<SHRT_MIN<<endl;
    // cout<<USHRT_MAX<<endl; // usigned version of max 


    // CHAR DATA TYPES - it uses single coats('') 
    // char x = 'B' ;
    // // cout<< sizeof(x) <<endl;  
    // cout << (int) x << endl; // Casted

    // char x = 78;
    // cout << x <<endl; // Casted



    // BOOLEAN - this talks about true or false 
    // bool i_like_what_i_do = -1;
    // cout<<i_like_what_i_do<<endl;

    // bool grade = 0 ;
    //  if (true) 
    //  {
    //     cout<<"Your grade is good"<<endl;
    //  }
    //  else 
    //  {
    //     cout<<"Your grade is bad"<<endl;
    //  }








    //     float a = 10.0 / 6;
    //     a = a * 10000000000; 
    //     double b;
    //     long double c;
    //     // to fix the scientific notation(E), put fixed there to remove the notation and make the numbers clear
    //     cout<<fixed << a <<endl;


    //    // the import above shows the number of digits you cant trust 
    //    cout<<FLT_DIG<<endl;


    




    // Numeric Functions 
    // sqrt= sqaure root
    // cout<<sqrt(-25)<<endl; // nan - Not A Number // inf - Infinity

    // remainder = its the remainder of a number or you can use the operator %
    // or you can use fmod instead of remainder 
    // cout<< remainder(10,4)<<endl;

    // ceil - it rounds up the number to the nearest digit 
    // cout<< ceil(fmin(12,6.8)))<<endl;
    
    // cout<< floor(fmin(12,6.8)))<<endl;
    //floor - rounds t down to the nearest digit

    //trunc-removes the decimal digits 
    // cout<< trunc(1.5)<<endl;
    











    return 0;
}
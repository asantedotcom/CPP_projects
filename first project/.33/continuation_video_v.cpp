#include <iostream>
#include <string> //its for string naming 
using namespace std;
int main()
{
    // we are continuing from strings 
    // To start the strings you need to import - #include <string>

    // string greeting ="Having";// " ";
    // cout<<greeting[0]<<endl;


    // string greeting;
    // cout<<"Enter any word you want"<<endl;
    // cin>>greeting;
    // cout<<greeting<<endl;


    // GETLINE - this takes the whole line including the spaces not like console in(cin)
    // NOTE- The cin comes before the variable name 
    //  string greeting;
    //  cout<<"Enter any word you want"<<endl;
    //  getline(cin,greeting);
    //  cout<<greeting<<endl;

    // There is a getline for numbers too -  cin.getline([INPUT THE VARIABLE NAME HERE])





    //METHODS 
    // string greeting = "How many people are there";
    // //  cout<<greeting.length()<<endl;
    //  cout<<greeting.size()<<endl; // size and length does the same thing- which is to find the numbers of words
    //  // its printing out 





    //Hexadecimal & Octal Output 

    //Octal
    // int number = 040;  // this is an octal number 
    // cout<<number<<endl;

    //Hexadecimal 
    // int number = 0*50; 
    // cout<<number<<endl;







    // switch statements 
    // swtich (variable)
    // {//cases will be in here 
    //     case 1 :
    //         code for the case 
    //  when done with the cases you break;
        //     case 2 :
        //      break;
        // default :       // it serves as else 
        //   break;
    // }
    






    //LOGICAL OPERATORS -
    // ==   This means equal to 
    // &&   This means and 
    // ||    This is the or operator - its when it requires one of the statement to be true 
    // !     This is the not operator 
    // !=    This means not equal to 

    // if ( !(guess==name)|| guess==name && guess==age )
    // {
    //     cout<<"YOU ARE ABSOLUTLY RIGHT!!"<<endl;
    // }









        // LOOPS 
        // int i = 0;
        // while (i < 10)
        //     {
        //         i++;
        //         cout<<i<<endl;
        //     }


        // use for the loops 
        // I-initialize a variable 
        // C-conditions
        // U-update(increament) (i++/i--    its like the steps for the condition)

        // Do-while loop - its when the code executes before checking the condition.
        // while loop- it checks the condition before executing.      and it mostly run at least once 


        // For loop - use it when you know the number of times the program is going to be executed.
        // for (int i = 0; i < 10; i++)
        // {
        //     cout<<i<<endl;
        // }




    //     int fact = 6
    //     int factorial = fact;
    //     for (int i = factorial - 1; i > 0; i--)
    //     {
    //         factorial = factorial * i ;
    //     }
    //    cout<<"factorial of "<< fact <<": "<< factorial <<endl;










    // calculating for factorial using while loop 
    // int factorial = 5;
    // int i = factorial - 1 ;

    // while (i > 1)
    // {
    //     factorial *= i;
    //     i--;
    // }
    // cout<<factorial<<endl;














    







    return 0;
}
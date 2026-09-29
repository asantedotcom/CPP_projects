#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
 // Writing a program to calculate the grade of a student based on the marks obtained in different subjects.
    string student_name;
    double subject1,subject2,subject3;
    double total_marks;
    double average_marks;
    char grade;
    char try_again;

    do
    {
        cout<<"\n-----STUDENT GRADE CALCULATOR-----"<<endl;

        cin.ignore();
        cout<<"ENTER YOUR NAME: "<<endl;
        getline(cin,student_name);

        cout<<"ENTER MARKS FOR FIRST SUBJECT: "<<endl;
        cin>>subject1;

        cout<<"ENTER MARKS FOR SECOND SUBJECT: "<<endl;
        cin>>subject2;

        cout<<"ENTER MARKS FOR LAST SUBJECT: "<<endl;
        cin>>subject3;

        total_marks = subject1 + subject2 + subject3;
        average_marks = total_marks / 3;

        // it is the average marks that will determine the grade 

        if (average_marks >=80)
        {
            grade = 'A';
        }
        else if(average_marks >= 70)
        {
            grade = 'B';
        }
        else if(average_marks >= 60)
        {
            grade = 'C';
        }
        else if(average_marks >= 50)
        {
            grade = 'D';
        }
        else if(average_marks >= 40)
        {
            grade = 'E';
        }
        else
        {
            grade = 'F';
        }

        cout<<"Student Name: "<<student_name<<endl;
        cout<<"Total Marks: "<<total_marks<<endl;
        cout<<"Average Marks: "<<average_marks<<endl;
        cout<<"Grade: "<<grade<<endl;

        cout<<"\nDo you want to try again? (y/n): "<<endl;
        cin>>try_again;

    } while (try_again == 'y' || try_again == 'Y');

    return 0;
}

#include <iostream>
#include <string>
#include <iomanip>   // cout<<fixed<<setprecision(2)<<endl;
using namespace std;
int main()
{
 //generating another cgpa calculator 

 string student_name;
 int student_id;
 string program;
 int level;
 int number_of_courses;
 int course_code;
 double credit_hour;
 string grade;
 double total_grade_points = 0.0;
 double total_credit_hour = 0.0;
 double grade_points = 0.0;
 double GPA = 0.0;
    cout<<"\n-----GCTU CGPA CALCULATOR-----"<<endl;
 
    cout<<"\nStudent name: "<<endl;
    cin>>student_name;
 
    cout<<"\nStudent id: "<<endl;
    cin>>student_id;

    cout<<"\nStudent Program: "<<endl;
    cin>>program;

    cout<<"\nLevel: "<<endl;
    cin>>level;

    cout<<"\nNumber of courses: "<<endl;
    cin>>number_of_courses;

    for(int i = 1; i <= number_of_courses; i++)
    {

         cout<<"---------------"<<endl;
         cout<<"course"<< i <<endl;
         cout<<"---------------\n"<<endl;

         cout<<"Course code: "<<endl;
         cin>>course_code;

         cout<<"Credit hours: "<<endl;
         cin>>credit_hour;

         cout<<"Grade: "<<endl;
         cin>>grade;

         //try the one that will input the point and it will convert into grade 
        
         if (grade == "A" || grade == "a")
         {
             grade_points = 4.0;
         }
         else if (grade == "A-" || grade == "a-")
         {
             grade_points = 3.75; 
         }
         else if (grade == "B+" || grade == "b+")
         {
             grade_points = 3.50;
         }
         else if (grade == "B" || grade == "b")
         {
             grade_points = 3.25; 
         }
         else if (grade == "B-" || grade == "b-")
         {
             grade_points = 3.00;  
         }
         else if (grade == "C+" || grade == "c+")
         {
             grade_points = 2.75;  
         }
         else if (grade == "C" || grade == "c")
         {
             grade_points = 2.50;  
         }
         else if (grade == "C-" || grade == "c-")
         {
             grade_points = 2.00;  
         }
         else if (grade == "D" || grade == "d")
         {
             grade_points = 1.50; 
         }
         else if (grade == "F" || grade == "f")
         {
             grade_points = 0.00;  
         }
         else
         {
             cout << "Invalid grade entered." << endl;
             grade_points = 0.0;
         }
         
        
     
            total_grade_points = total_grade_points + grade_points * credit_hour;
            total_credit_hour = total_credit_hour + credit_hour;

        if (total_credit_hour > 0)
        {
            GPA = total_grade_points / total_credit_hour;
        }
        else 
        {
            GPA = 0.0;
        }

        cout<< fixed <<setprecision(2)<<endl;
        cout<<"\n--------------------"<<endl;
        cout<<"GPA: "<<GPA<<endl;
        cout<<"TOTAL CREDIT HOURS: "<<total_credit_hour<<endl;

        // calculating for the class
        if (GPA >= 3.60)
        {
            cout<<"FIRST CLASS HONOURS"<<endl;
        }
        else if (GPA >= 3.00)
        {
            cout<<"SECOND CLASS UPPER"<<endl;
        }
        else if (GPA >= 2.50)
        {
            cout<<"SECOND CLASS LOWER"<<endl;
        }
        else if (GPA >= 2.00)
        {
            cout<<"THIRD CLASS"<<endl;
        }
        else 
        {
            cout<<"CLASSIFICATION FAIL : TRY AGIAN"<<endl;
        }

    }
    return 0;
}

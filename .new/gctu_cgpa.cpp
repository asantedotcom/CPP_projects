#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    // GCTU CGPA Calculator
    int credit_hours;
    int number_of_courses;
    string grade;
    double grade_points;
    double total_grade_points;
    int total_credit_hours;
    double cgpa;
    char run_again;

    do
    {
        // Reset totals for each run
        total_grade_points = 0.0;
        total_credit_hours = 0;

        // cout << "===== GCTU CGPA CALCULATOR =====" << endl;
        cout << "ENTER THE NUMBER OF COURSES: ";
        cin >> number_of_courses;

        for (int i = 1; i <= number_of_courses; i++)
        {
            cout << "\nCourse " << i << endl;

            cout << "ENTER YOUR ACCUMULATED GRADE (A, B+, B, C+, C, D+, D, E, F): ";
            cin >> grade;

            cout << "ENTER THE CREDIT HOURS ALLOCATED: ";
            cin >> credit_hours;

            // Convert letter grade to grade points (case-insensitive)
            if (grade == "A" || grade == "a")
                grade_points = 4.0;
            else if (grade == "B+" || grade == "b+")
                grade_points = 3.5;
            else if (grade == "B" || grade == "b")
                grade_points = 3.0;
            else if (grade == "C+" || grade == "c+")
                grade_points = 2.5;
            else if (grade == "C" || grade == "c")
                grade_points = 2.0;
            else if (grade == "D+" || grade == "d+")
                grade_points = 1.5;
            else if (grade == "D" || grade == "d")
                grade_points = 1.0;
            else if (grade == "E" || grade == "e")
                grade_points = 0.5;
            else if (grade == "F" || grade == "f")
                grade_points = 0.0;
            else
            {
                cout << "Invalid grade entered! Please restart the program." << endl;
                return 1;
            }

            total_grade_points += grade_points * credit_hours;
            total_credit_hours += credit_hours;
        }

        // Calculate CGPA
        if (total_credit_hours > 0)
            cgpa = total_grade_points / total_credit_hours;
        else
            cgpa = 0.0;

        cout << fixed << setprecision(2);
        cout << "\n===============================" << endl;
        cout << "Total Credit Hours: " << total_credit_hours << endl;
        cout << "CGPA: " << cgpa << endl;

        // Display class of performance
        if (cgpa >= 3.60)
            cout << "Classification: First Class" << endl;
        else if (cgpa >= 3.00)
            cout << "Classification: Second Class Upper" << endl;
        else if (cgpa >= 2.00)
            cout << "Classification: Second Class Lower" << endl;
        else if (cgpa >= 1.50)
            cout << "Classification: Third Class" << endl;
        else
            cout << "Classification: Fail" << endl;

        cout << "\nRUN AGAIN? (Y/N): ";
        cin >> run_again;

    } while (run_again == 'Y' || run_again == 'y');

    return 0;
}

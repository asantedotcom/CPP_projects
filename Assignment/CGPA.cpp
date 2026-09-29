#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int numCourses;
    string grade;
    float creditHours;
    float gradePoint;
    float totalGradePoints = 0.0;
    float totalCreditHours = 0.0;
    float cgpa;

    cout << "===== CGPA CALCULATOR =====" << endl;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    for (int i = 1; i <= numCourses; i++) 
    {
        cout << "\nCourse " << i << endl;

        cout << "Enter credit hours: ";
        cin >> creditHours;

        cout << "Enter letter grade (A, B+, B, C+, C, D+, D, E, F): ";
        cin >> grade;

        // Convert letter grade to grade point
        if (grade == "A" || grade == "a")
            gradePoint = 4.0;
        else if (grade == "B+" || grade == "b+")
            gradePoint = 3.5;
        else if (grade == "B" || grade == "b")
            gradePoint = 3.0;
        else if (grade == "C+" || grade == "c+")
            gradePoint = 2.5;
        else if (grade == "C" || grade == "c")
            gradePoint = 2.0;
        else if (grade == "D+" || grade == "d+")
            gradePoint = 1.5;
        else if (grade == "D" || grade == "d")
            gradePoint = 1.0;
        else if (grade == "E" || grade == "e")
            gradePoint = 0.5;
        else if (grade == "F" || grade == "f")
            gradePoint = 0.0;
        else {
            cout << "Invalid grade entered! Please restart the program." << endl;
            return 1; //break
        }

        totalGradePoints += gradePoint * creditHours;
        totalCreditHours += creditHours;
    }

    cgpa = totalGradePoints / totalCreditHours;

    cout << fixed << setprecision(2);
    cout << "\n============================" << endl;
    cout << "Total Credit Hours: " << totalCreditHours << endl;
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

    return 0;
}
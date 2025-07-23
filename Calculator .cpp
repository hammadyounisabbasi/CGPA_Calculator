#include <iostream>
using namespace std;

int main() {
    string std_name;
    int totalSemesters;
    const int MAX_COURSES = 50;

    double totalAllGradePoints = 0;
    int totalAllCreditHours = 0;

    cout<<"Enter name of a Student: ";
    cin>>std_name;

    cout << "Enter number of semesters: ";
    cin >> totalSemesters;

    for (int sem = 1; sem <= totalSemesters; sem++) {
        int numCourses;
        string name[MAX_COURSES];
        double grades[MAX_COURSES];
        int creditHours[MAX_COURSES];

        double totalGradePoints = 0;
        int totalCredits = 0;

        cout << "\n--- Semester " << sem << " ---" << endl;
        cout << "Enter number of courses: ";
        cin >> numCourses;

        for (int i = 0; i < numCourses; i++) {
            cout << "Enter Name of course " << i + 1 << ": ";
            cin >> name[i];
            cout << "Enter grade for course " << i + 1 << " (e.g., 4.0 , 3.5 , 2.8 , 2.6): ";
            cin >> grades[i];
            cout << "Enter credit hours for course " << i + 1 << ": ";
            cin >> creditHours[i];

            totalGradePoints += grades[i] * creditHours[i];
            totalCredits += creditHours[i];
        }

        double semesterGPA = totalGradePoints / totalCredits;
        cout << "\n Semester " << sem << " GPA: " << semesterGPA << endl;

        totalAllGradePoints += totalGradePoints;
        totalAllCreditHours += totalCredits;
            cout << "\n--- Course Details of "<<sem<<" ---\n";
        for (int i = 0; i < numCourses; i++) {
            cout << "Course " << i + 1 << ": " << name[i]
             << " \t\t | Grade: " << grades[i]
             << " | Credit Hours: " << creditHours[i] << endl;
        }
    }

    double cgpa = totalAllGradePoints / totalAllCreditHours;
    cout <<"\n The overall CGPA of "<<std_name <<" after " << totalSemesters << " semesters: " << cgpa << endl;

    return 0;
}

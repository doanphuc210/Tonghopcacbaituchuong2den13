#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Define the structure for student data
struct StudentData
{
    string name;
    int idNum;
    int* tests; // Pointer to an array of test scores
    double average; // Average test score
    char grade; // Course grade
};

// Function prototypes
void calculateAverageAndGrade(StudentData& student);
void displayStudentTable(const StudentData* students, int numStudents);

int main()
{
    int numTests;
    int numStudents;

    // Get the number of tests and students
    cout << "Enter the number of tests: ";
    cin >> numTests;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Dynamically allocate an array of structures
    StudentData* students = new StudentData[numStudents];

    // Input data for each student
    for (int i = 0; i < numStudents; ++i)
    {
        cout << "\nEnter data for student " << i + 1 << ":\n";
        cin.ignore(); // Consume the newline character left in the buffer

        cout << "Name: ";
        getline(cin, students[i].name);

        cout << "ID Number: ";
        cin >> students[i].idNum;

        // Dynamically allocate an array for test scores
        students[i].tests = new int[numTests];

        // Input test scores for each student
        cout << "Enter test scores for student " << i + 1 << ":\n";
        for (int j = 0; j < numTests; ++j)
        {
            cout << "Test " << j + 1 << ": ";
            cin >> students[i].tests[j];

            // Input validation: Do not accept negative numbers for test scores
            while (students[i].tests[j] < 0)
            {
                cout << "Please enter a non-negative test score: ";
                cin >> students[i].tests[j];
            }
        }

        // Calculate average and grade for each student
        calculateAverageAndGrade(students[i]);
    }

    // Display the student table
    displayStudentTable(students, numStudents);

    // Deallocate dynamically allocated memory
    for (int i = 0; i < numStudents; ++i)
    {
        delete[] students[i].tests;
    }
    delete[] students;

    return 0;
}

void calculateAverageAndGrade(StudentData& student)
{
    // Calculate the average test score
    double sum = 0;
    for (int i = 0; i < numTests; ++i)
    {
        sum += student.tests[i];
    }
    student.average = sum / numTests;

    // Determine the course grade based on the grading scale
    if (student.average >= 91)
    {
        student.grade = 'A';
    }
    else if (student.average >= 81)
    {
        student.grade = 'B';
    }
    else if (student.average >= 71)
    {
        student.grade = 'C';
    }
    else if (student.average >= 61)
    {
        student.grade = 'D';
    }
    else
    {
        student.grade = 'F';
    }
}

void displayStudentTable(const StudentData* students, int numStudents)
{
    // Display the student table
    cout << "\nStudent Table:\n";
    cout << setw(20) << "Name" << setw(15) << "ID Number" << setw(15) << "Average Score" << setw(15) << "Grade" << endl;
    cout << "--------------------------------------------------------------\n";
    for (int i = 0; i < numStudents; ++i)
    {
        cout << setw(20) << students[i].name << setw(15) << students[i].idNum
             << setw(15) << students[i].average << setw(15) << students[i].grade << endl;
    }
}

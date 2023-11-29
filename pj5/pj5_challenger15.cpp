#include <iostream>
#include <string>
using namespace std;

int main() {
    int numStudents;

    // Input validation: Ensure the number of students is between 1 and 25.
    do {
        cout << "Enter the number of students (1-25): ";
        cin >> numStudents;
    } while (numStudents < 1 || numStudents > 25);

    string firstName, firstStudent, lastStudent;

    for (int i = 1; i <= numStudents; i++) {
        cout << "Enter the first name of student " << i << ": ";
        cin >> firstName;

        if (i == 1) {
            firstStudent = lastStudent = firstName;
        } else {
            if (firstName < firstStudent) {
                firstStudent = firstName;
            }
            if (firstName > lastStudent) {
                lastStudent = firstName;
            }
        }
    }

    cout << "The student at the front of the line: " << firstStudent << endl;
    cout << "The student at the end of the line: " << lastStudent << endl;

    return 0;
}

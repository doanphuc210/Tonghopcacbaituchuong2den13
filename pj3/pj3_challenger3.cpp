#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables to store the test scores
    double test1, test2, test3, test4, test5;

    // Prompt the user to enter five test scores
    cout << "Enter the first test score: ";
    cin >> test1;
    
    cout << "Enter the second test score: ";
    cin >> test2;

    cout << "Enter the third test score: ";
    cin >> test3;

    cout << "Enter the fourth test score: ";
    cin >> test4;

    cout << "Enter the fifth test score: ";
    cin >> test5;

    // Calculate the average test score
    double average = (test1 + test2 + test3 + test4 + test5) / 5.0;

    // Display the average test score with one decimal point of precision
    cout << fixed << setprecision(1);
    cout << "The average test score is: " << average << endl;

    return 0;
}

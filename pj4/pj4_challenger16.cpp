#include <iostream>
#include <string>
using namespace std;

int main() {
    string runner1, runner2, runner3;
    double time1, time2, time3;

    // Ask for the names and times of the three runners
    cout << "Enter the name of the first runner: ";
    cin >> runner1;
    cout << "Enter the time (in seconds) for " << runner1 << ": ";
    cin >> time1;

    cout << "Enter the name of the second runner: ";
    cin >> runner2;
    cout << "Enter the time (in seconds) for " << runner2 << ": ";
    cin >> time2;

    cout << "Enter the name of the third runner: ";
    cin >> runner3;
    cout << "Enter the time (in seconds) for " << runner3 << ": ";
    cin >> time3;

    // Input validation
    if (time1 < 0 || time2 < 0 || time3 < 0) {
        cout << "Error: Times cannot be negative." << endl;
        return 1;
    }

    // Determine the first, second, and third-place runners
    string first, second, third;
    double firstTime, secondTime, thirdTime;

    if (time1 < time2 && time1 < time3) {
        first = runner1;
        firstTime = time1;
        if (time2 < time3) {
            second = runner2;
            secondTime = time2;
            third = runner3;
            thirdTime = time3;
        } else {
            second = runner3;
            secondTime = time3;
            third = runner2;
            thirdTime = time2;
        }
    } else if (time2 < time1 && time2 < time3) {
        first = runner2;
        firstTime = time2;
        if (time1 < time3) {
            second = runner1;
            secondTime = time1;
            third = runner3;
            thirdTime = time3;
        } else {
            second = runner3;
            secondTime = time3;
            third = runner1;
            thirdTime = time1;
        }
    } else {
        first = runner3;
        firstTime = time3;
        if (time1 < time2) {
            second = runner1;
            secondTime = time1;
            third = runner2;
            thirdTime = time2;
        } else {
            second = runner2;
            secondTime = time2;
            third = runner1;
            thirdTime = time1;
        }
    }

    // Display the results
    cout << "Results:" << endl;
    cout << "First Place: " << first << " with a time of " << firstTime << " seconds." << endl;
    cout << "Second Place: " << second << " with a time of " << secondTime << " seconds." << endl;
    cout << "Third Place: " << third << " with a time of " << thirdTime << " seconds." << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int numberOfBooks;
    int pointsEarned = 0;

    // Ask the user to enter the number of books purchased
    cout << "Enter the number of books purchased this month: ";
    cin >> numberOfBooks;

    // Calculate points based on the number of books
    if (numberOfBooks == 0) {
        pointsEarned = 0;
    } else if (numberOfBooks == 1) {
        pointsEarned = 5;
    } else if (numberOfBooks == 2) {
        pointsEarned = 15;
    } else if (numberOfBooks == 3) {
        pointsEarned = 30;
    } else if (numberOfBooks >= 4) {
        pointsEarned = 60;
    }

    // Display the points earned
    cout << "You have earned " << pointsEarned << " points this month." << endl;

    return 0;
}

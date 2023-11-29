#include <iostream>
using namespace std;

int main() {
    double budget;
    double totalExpenses = 0.0;
    double expense;
    char addMore;

    // Get the budget amount from the user
    cout << "Enter your budget for the month: $";
    cin >> budget;

    // Prompt the user to enter expenses until they are done
    do {
        cout << "Enter an expense: $";
        cin >> expense;
        totalExpenses += expense;

        cout << "Do you want to add more expenses? (y/n): ";
        cin >> addMore;
    } while (addMore == 'y' || addMore == 'Y');

    // Calculate the difference between budget and expenses
    double difference = budget - totalExpenses;

    cout << "Budget: $" << budget << endl;
    cout << "Total Expenses: $" << totalExpenses << endl;

    if (difference > 0) {
        cout << "You are under budget by: $" << difference << endl;
    } else if (difference < 0) {
        cout << "You are over budget by: $" << -difference << endl;
    } else {
        cout << "You are right on budget!" << endl;
    }

    return 0;
}

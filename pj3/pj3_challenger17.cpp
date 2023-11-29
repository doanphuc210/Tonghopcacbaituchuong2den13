#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0));  // Seed the random number generator

    int num1 = rand() % 1000;  // Generate random numbers between 0 and 999
    int num2 = rand() % 1000;
    int answer, userAnswer;

    // Display the random numbers for the math problem
    cout << num1 << endl;
    cout << num2 << endl;

    cout << "Press Enter when you have an answer." << endl;
    cin.get();  // Wait for the user to press Enter

    // Calculate the correct answer
    answer = num1 + num2;

    cout << "Your answer: ";
    cin >> userAnswer;

    // Check if the answer is correct
    if (userAnswer == answer) {
        cout << "Correct! The answer is " << answer << endl;
    } else {
        cout << "Sorry, the correct answer is " << answer << endl;
    }

    return 0;
}

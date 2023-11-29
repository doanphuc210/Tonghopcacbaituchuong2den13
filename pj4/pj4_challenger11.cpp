#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(nullptr));

    // Generate two random numbers between 1 and 100
    int num1 = rand() % 100 + 1;
    int num2 = rand() % 100 + 1;

    // Calculate the correct answer
    int correctAnswer = num1 + num2;

    // Display the math problem
    cout << "Math Tutor: Add the following numbers" << endl;
    cout << num1 << " + " << num2 << " = ?" << endl;

    // Get the student's answer
    int studentAnswer;
    cout << "Your answer: ";
    cin >> studentAnswer;

    // Check the answer
    if (studentAnswer == correctAnswer) {
        cout << "Congratulations! Your answer is correct." << endl;
    } else {
        cout << "Sorry, that's incorrect. The correct answer is: " << correctAnswer << endl;
    }

    return 0;
}

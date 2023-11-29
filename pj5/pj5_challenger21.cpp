#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(0)));

    int randomNumber = rand() % 100 + 1;
    int userGuess;
    int attempts = 0;

    cout << "Guess the random number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < randomNumber) {
            cout << "Too low, try again." << endl;
        } else if (userGuess > randomNumber) {
            cout << "Too high, try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number (" << randomNumber << ") in " << attempts << " attempts." << endl;
        }
    } while (userGuess != randomNumber);

    return 0;
}

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Function to generate the computer's choice (1: Rock, 2: Paper, 3: Scissors)
int generateComputerChoice() {
    return (rand() % 3) + 1;
}

// Function to get the user's choice
int getUserChoice() {
    int choice;
    cout << "Enter your choice (1: Rock, 2: Paper, 3: Scissors): ";
    cin >> choice;
    return choice;
}

// Function to determine the winner
int determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        return 0; // It's a tie
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        return 1; // User wins
    } else {
        return 2; // Computer wins
    }
}

int main() {
    srand(time(0)); // Seed the random number generator

    int userChoice, computerChoice, result;
    char playAgain;

    cout << "Let's play Rock, Paper, Scissors!" << endl;

    do {
        computerChoice = generateComputerChoice();
        userChoice = getUserChoice();

        cout << "Computer's choice: ";
        if (computerChoice == 1) {
            cout << "Rock";
        } else if (computerChoice == 2) {
            cout << "Paper";
        } else {
            cout << "Scissors";
        }
        cout << endl;

        result = determineWinner(userChoice, computerChoice);

        if (result == 0) {
            cout << "It's a tie!" << endl;
        } else if (result == 1) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>

class Die {
public:
    int roll() const {
        return rand() % 6 + 1;
    }
};

class BlackjackGame {
private:
    Die die;
    int computerTotal;
    int userTotal;

public:
    BlackjackGame() : computerTotal(0), userTotal(0) {
        // Seed for random number generation
        std::srand(std::time(0));
    }

    void playGame() {
        char rollAgain;

        do {
            // Computer's turn
            computerTotal += rollDice("Computer");

            // User's turn
            userTotal += rollDice("User");

            // Ask the user if they want to roll again
            std::cout << "Do you want to roll again? (y/n): ";
            std::cin >> rollAgain;

        } while (rollAgain == 'y' && userTotal <= 21);

        // Display results
        std::cout << "Computer's total: " << computerTotal << std::endl;
        std::cout << "Your total: " << userTotal << std::endl;

        // Determine the winner
        determineWinner();
    }

private:
    int rollDice(const std::string& playerName) {
        int die1 = die.roll();
        int die2 = die.roll();
        int total = die1 + die2;

        std::cout << playerName << " rolled: " << die1 << " + " << die2 << " = " << total << std::endl;

        return total;
    }

    void determineWinner() {
        if (computerTotal > 21 && userTotal > 21) {
            std::cout << "It's a tie! Both went over 21." << std::endl;
        } else if (computerTotal > 21) {
            std::cout << "You win! Computer went over 21." << std::endl;
        } else if (userTotal > 21) {
            std::cout << "Computer wins! You went over 21." << std::endl;
        } else {
            if (computerTotal > userTotal) {
                std::cout << "Computer wins!" << std::endl;
            } else if (userTotal > computerTotal) {
                std::cout << "You win!" << std::endl;
            } else {
                std::cout << "It's a tie!" << std::endl;
            }
        }
    }
};

int main() {
    BlackjackGame game;
    game.playGame();

    return 0;
}

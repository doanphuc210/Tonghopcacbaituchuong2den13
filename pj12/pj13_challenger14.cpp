#include <iostream>
#include <cstdlib>
#include <ctime>

class Die {
public:
    int roll() const {
        return rand() % 6 + 1;
    }
};

class FishingGame {
private:
    Die die;
    int totalPoints;

public:
    FishingGame() : totalPoints(0) {
        std::srand(std::time(0));
    }

    void playRound() {
        std::cout << "Do you want to fish? (y/n): ";
        char choice;
        std::cin >> choice;

        if (choice != 'y' && choice != 'Y') {
            std::cout << "Thanks for playing! Your total fishing points: " << totalPoints << std::endl;
            return;
        }

        int rollResult = die.roll();
        int points = calculatePoints(rollResult);

        std::cout << "You caught: ";
        displayItem(rollResult);
        std::cout << "Points earned: " << points << std::endl;

        totalPoints += points;
    }

    void displayItem(int rollResult) const {
        switch (rollResult) {
            case 1:
                std::cout << "a huge fish.";
                break;
            case 2:
                std::cout << "an old shoe.";
                break;
            case 3:
                std::cout << "a little fish.";
                break;
            // Add more cases for other items
            default:
                std::cout << "an unknown item.";
                break;
        }
        std::cout << std::endl;
    }

    int calculatePoints(int rollResult) const {
        // Assign points based on the item caught
        switch (rollResult) {
            case 1:
                return 10;
            case 2:
                return -5;
            case 3:
                return 5;
            // Add more cases for other items
            default:
                return 0;
        }
    }
};

int main() {
    FishingGame game;

    std::cout << "Welcome to the Fishing Game!\n";

    do {
        game.playRound();
    } while (game.isGameInProgress());

    return 0;
}

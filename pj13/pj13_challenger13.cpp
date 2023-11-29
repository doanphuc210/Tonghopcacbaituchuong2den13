#include <iostream>
#include <cstdlib>
#include <ctime>

class Coin {
private:
    std::string sideUp;

public:
    Coin() {
        std::srand(std::time(0));
        toss();
    }

    void toss() {
        int randomNumber = rand() % 2;
        sideUp = (randomNumber == 0) ? "heads" : "tails";
    }

    std::string getSideUp() const {
        return sideUp;
    }
};

class CoinGame {
private:
    Coin quarter;
    Coin dime;
    Coin nickel;
    double balance;

public:
    CoinGame() : balance(0.0) {}

    void playRound() {
        quarter.toss();
        dime.toss();
        nickel.toss();

        std::cout << "Quarter: " << quarter.getSideUp() << std::endl;
        std::cout << "Dime: " << dime.getSideUp() << std::endl;
        std::cout << "Nickel: " << nickel.getSideUp() << std::endl;

        if (quarter.getSideUp() == "heads") {
            balance += 0.25;
        }

        if (dime.getSideUp() == "heads") {
            balance += 0.1;
        }

        if (nickel.getSideUp() == "heads") {
            balance += 0.05;
        }

        std::cout << "Current balance: $" << balance << std::endl;
        std::cout << "------------------------\n";
    }

    bool isGameOver() const {
        return balance >= 1.0;
    }

    bool isWin() const {
        return balance == 1.0;
    }
};

int main() {
    CoinGame game;

    std::cout << "Welcome to the Coin Game!\n";

    while (!game.isGameOver()) {
        game.playRound();
    }

    if (game.isWin()) {
        std::cout << "Congratulations! You win!\n";
    } else {
        std::cout << "Sorry, you lose. Better luck next time!\n";
    }

    return 0;
}

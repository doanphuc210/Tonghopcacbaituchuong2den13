#include <iostream>
#include <cstdlib> // For rand() function
#include <ctime>   // For time() function

class Coin {
private:
    std::string sideUp;

public:
    // Default constructor
    Coin() {
        // Initialize random seed
        std::srand(std::time(0));
        // Randomly determine the initial side of the coin
        toss();
    }

    // Member function to simulate tossing the coin
    void toss() {
        // Generate a random number (0 or 1) to represent heads or tails
        int randomNumber = rand() % 2;
        // Set the sideUp member variable based on the random number
        sideUp = (randomNumber == 0) ? "heads" : "tails";
    }

    // Member function to get the current side of the coin
    std::string getSideUp() const {
        return sideUp;
    }
};

int main() {
    Coin myCoin;

    // Display the initial side of the coin
    std::cout << "Initial side facing up: " << myCoin.getSideUp() << std::endl;

    // Toss the coin 20 times and display the side facing up each time
    int headsCount = 0;
    int tailsCount = 0;

    for (int i = 0; i < 20; ++i) {
        myCoin.toss();
        std::cout << "Toss " << (i + 1) << ": " << myCoin.getSideUp() << std::endl;

        // Update counts based on the current side
        if (myCoin.getSideUp() == "heads") {
            headsCount++;
        } else {
            tailsCount++;
        }
    }

    // Display the counts
    std::cout << "Heads count: " << headsCount << std::endl;
    std::cout << "Tails count: " << tailsCount << std::endl;

    return 0;
}

#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

// Function to simulate a coin toss
void coinToss() {
    int result = rand() % 2 + 1;
    if (result == 1) {
        cout << "Heads" << endl;
    } else {
        cout << "Tails" << endl;
    }
}

int main() {
    int numTosses;

    // Seed the random number generator
    srand(time(0));

    cout << "How many times would you like to toss the coin? ";
    cin >> numTosses;

    if (numTosses <= 0) {
        cout << "Please enter a valid number of tosses." << endl;
        return 1;
    }

    cout << "Coin toss results:" << endl;
    for (int i = 0; i < numTosses; i++) {
        cout << "Toss " << i + 1 << ": ";
        coinToss();
    }

    return 0;
}

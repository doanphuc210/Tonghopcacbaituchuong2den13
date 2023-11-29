#include <iostream>
using namespace std;

// Function prototypes
void getScore(int &score);
void calcAverage(int scores[]);
int findLowest(int scores[]);

int main() {
    int scores[5];

    cout << "This program calculates the average of test scores by dropping the lowest score.\n";

    // Get five test scores from the user
    for (int i = 0; i < 5; i++) {
        getScore(scores[i]);
    }

    // Calculate and display the average of the four highest scores
    calcAverage(scores);

    return 0;
}

// Function to get a test score and validate it
void getScore(int &score) {
    do {
        cout << "Enter a test score (0-100): ";
        cin >> score;
    } while (score < 0 || score > 100);
}

// Function to calculate and display the average of the four highest scores
void calcAverage(int scores[]) {
    int lowest = findLowest(scores);
    int sum = 0;

    // Calculate the sum of the four highest scores
    for (int i = 0; i < 5; i++) {
        if (scores[i] != lowest) {
            sum += scores[i];
        }
    }

    // Calculate and display the average
    double average = static_cast<double>(sum) / 4.0;
    cout << "The average of the four highest test scores is: " << average << endl;
}

// Function to find the lowest score
int findLowest(int scores[]) {
    int lowest = scores[0];
    for (int i = 1; i < 5; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

#include <iostream>
using namespace std;

// Function prototypes
void getJudgeData(double &score);
void calcScore(double scores[]);
int findLowest(double scores[]);
int findHighest(double scores[]);

int main() {
    double scores[5];

    cout << "This program calculates a contestant's score by dropping the highest and lowest scores.\n";

    // Get scores from five judges
    for (int i = 0; i < 5; i++) {
        getJudgeData(scores[i]);
    }

    // Calculate and display the contestant's final score
    calcScore(scores);

    return 0;
}

// Function to get a judge's score and validate it
void getJudgeData(double &score) {
    do {
        cout << "Enter a judge's score (0-10): ";
        cin >> score;
    } while (score < 0 || score > 10);
}

// Function to calculate and display the final score
void calcScore(double scores[]) {
    int lowest = findLowest(scores);
    int highest = findHighest(scores);
    double sum = 0.0;

    // Calculate the sum of the three remaining scores
    for (int i = 0; i < 5; i++) {
        if (scores[i] != lowest && scores[i] != highest) {
            sum += scores[i];
        }
    }

    // Calculate and display the final score
    double finalScore = sum / 3;
    cout << "The contestant's final score is: " << finalScore << endl;
}

// Function to find the lowest score
int findLowest(double scores[]) {
    int lowest = scores[0];
    for (int i = 1; i < 5; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

// Function to find the highest score
int findHighest(double scores[]) {
    int highest = scores[0];
    for (int i = 1; i < 5; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }
    return highest;
}

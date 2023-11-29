#include <iostream>
#include <iomanip>

// Function prototypes
void inputScores(int* scores, int numScores);
void sortScores(int* scores, int numScores);
double calculateAverage(const int* scores, int numScores);

int main() {
    int numScores;

    // Get the number of test scores from the user
    std::cout << "Enter the number of test scores: ";
    std::cin >> numScores;

    // Input validation: Ensure a non-negative number of scores
    if (numScores <= 0) {
        std::cerr << "Invalid number of test scores entered." << std::endl;
        return 1; // Exit with an error code
    }

    // Dynamically allocate an array to hold the test scores
    int* testScores = new int[numScores];

    // Input the test scores
    inputScores(testScores, numScores);

    // Sort the test scores in ascending order
    sortScores(testScores, numScores);

    // Calculate the average score
    double average = calculateAverage(testScores, numScores);

    // Display the sorted list of scores
    std::cout << "\nSorted Test Scores:\n";
    for (int i = 0; i < numScores; i++) {
        std::cout << testScores[i] << " ";
    }

    // Display the average score
    std::cout << "\nAverage Test Score: " << std::fixed << std::setprecision(2) << average << std::endl;

    // Deallocate the dynamically allocated memory
    delete[] testScores;

    return 0;
}

void inputScores(int* scores, int numScores) {
    for (int i = 0; i < numScores; i++) {
        do {
            std::cout << "Enter test score #" << i + 1 << ": ";
            std::cin >> scores[i];
            if (scores[i] < 0) {
                std::cerr << "Invalid input. Test scores must be non-negative." << std::endl;
            }
        } while (scores[i] < 0);
    }
}

void sortScores(int* scores, int numScores) {
    for (int i = 0; i < numScores - 1; i++) {
        for (int j = 0; j < numScores - i - 1; j++) {
            if (scores[j] > scores[j + 1]) {
                // Swap scores[j] and scores[j+1]
                int temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
}

double calculateAverage(const int* scores, int numScores) {
    if (numScores == 0) {
        return 0.0;
    }

    int sum = 0;
    for (int i = 0; i < numScores; i++) {
        sum += scores[i];
    }
    return static_cast<double>(sum) / numScores;
}

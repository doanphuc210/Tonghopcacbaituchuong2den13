#include <iostream>
#include <iomanip>
#include <string>

// Function prototypes
void inputScores(std::string* names, int* scores, int numScores);
void sortScores(std::string* names, int* scores, int numScores);
void displayScores(const std::string* names, const int* scores, int numScores);

int main() {
    int numScores;

    // Get the number of test scores from the user
    std::cout << "Enter the number of students: ";
    std::cin >> numScores;

    // Input validation: Ensure a positive number of students
    if (numScores <= 0) {
        std::cerr << "Invalid number of students entered." << std::endl;
        return 1; // Exit with an error code
    }

    // Dynamically allocate arrays to hold student names and test scores
    std::string* studentNames = new std::string[numScores];
    int* testScores = new int[numScores];

    // Input the student names and test scores
    inputScores(studentNames, testScores, numScores);

    // Sort the test scores and student names in ascending order
    sortScores(studentNames, testScores, numScores);

    // Display the sorted list of scores along with student names
    std::cout << "\nSorted Test Scores (ascending order):\n";
    displayScores(studentNames, testScores, numScores);

    // Deallocate the dynamically allocated memory
    delete[] studentNames;
    delete[] testScores;

    return 0;
}

void inputScores(std::string* names, int* scores, int numScores) {
    for (int i = 0; i < numScores; i++) {
        std::cout << "Enter student #" << i + 1 << " name: ";
        std::cin >> names[i];
        
        do {
            std::cout << "Enter test score for " << names[i] << ": ";
            std::cin >> scores[i];
            if (scores[i] < 0) {
                std::cerr << "Invalid input. Test scores must be non-negative." << std::endl;
            }
        } while (scores[i] < 0);
    }
}

void sortScores(std::string* names, int* scores, int numScores) {
    for (int i = 0; i < numScores - 1; i++) {
        for (int j = 0; j < numScores - i - 1; j++) {
            if (scores[j] > scores[j + 1]) {
                // Swap scores[j] and scores[j+1]
                int tempScore = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = tempScore;
                
                // Swap names[j] and names[j+1]
                std::string tempName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tempName;
            }
        }
    }
}

void displayScores(const std::string* names, const int* scores, int numScores) {
    for (int i = 0; i < numScores; i++) {
        std::cout << std::setw(15) << std::left << names[i] << " : " << scores[i] << std::endl;
    }
}

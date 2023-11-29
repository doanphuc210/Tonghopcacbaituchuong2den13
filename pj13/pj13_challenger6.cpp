#include <iostream>

class TestScores {
private:
    double score1;
    double score2;
    double score3;

public:
    // Constructor
    TestScores(double s1, double s2, double s3)
        : score1(s1), score2(s2), score3(s3) {}

    // Accessor functions
    double getScore1() const {
        return score1;
    }

    double getScore2() const {
        return score2;
    }

    double getScore3() const {
        return score3;
    }

    // Mutator functions
    void setScore1(double s1) {
        score1 = s1;
    }

    void setScore2(double s2) {
        score2 = s2;
    }

    void setScore3(double s3) {
        score3 = s3;
    }

    // Function to calculate average
    double calculateAverage() const {
        return (score1 + score2 + score3) / 3.0;
    }
};

int main() {
    double s1, s2, s3;

    // Get test scores from the user
    std::cout << "Enter test score 1: ";
    std::cin >> s1;

    std::cout << "Enter test score 2: ";
    std::cin >> s2;

    std::cout << "Enter test score 3: ";
    std::cin >> s3;

    // Create a TestScores object
    TestScores testScores(s1, s2, s3);

    // Display the average of the test scores
    std::cout << "Average test score: " << testScores.calculateAverage() << std::endl;

    return 0;
}

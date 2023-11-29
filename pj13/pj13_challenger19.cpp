#include <iostream>
#include <string>

class Question {
private:
    std::string question;
    std::string answer1;
    std::string answer2;
    std::string answer3;
    std::string answer4;
    int correctAnswer;

public:
    Question(const std::string& q, const std::string& a1, const std::string& a2, const std::string& a3, const std::string& a4, int correct)
        : question(q), answer1(a1), answer2(a2), answer3(a3), answer4(a4), correctAnswer(correct) {}

    // Accessor functions
    std::string getQuestion() const {
        return question;
    }

    std::string getAnswer1() const {
        return answer1;
    }

    std::string getAnswer2() const {
        return answer2;
    }

    std::string getAnswer3() const {
        return answer3;
    }

    std::string getAnswer4() const {
        return answer4;
    }

    int getCorrectAnswer() const {
        return correctAnswer;
    }
};

void askQuestion(const Question& q, int& playerScore) {
    std::cout << q.getQuestion() << std::endl;
    std::cout << "1. " << q.getAnswer1() << std::endl;
    std::cout << "2. " << q.getAnswer2() << std::endl;
    std::cout << "3. " << q.getAnswer3() << std::endl;
    std::cout << "4. " << q.getAnswer4() << std::endl;

    int playerAnswer;
    std::cout << "Enter your answer (1-4): ";
    std::cin >> playerAnswer;

    if (playerAnswer == q.getCorrectAnswer()) {
        std::cout << "Correct!\n";
        playerScore++;
    } else {
        std::cout << "Incorrect. The correct answer is: " << q.getCorrectAnswer() << std::endl;
    }

    std::cout << std::endl;
}

int main() {
    Question questions[10] = {
        {"What is the capital of France?", "Paris", "Berlin", "London", "Rome", 1},
        {"Which planet is known as the Red Planet?", "Earth", "Mars", "Jupiter", "Venus", 2},
        {"Who wrote 'Romeo and Juliet'?", "Charles Dickens", "Jane Austen", "William Shakespeare", "Mark Twain", 3},
        // Add more questions as needed
    };

    int player1Score = 0;
    int player2Score = 0;

    for (int i = 0; i < 5; ++i) {
        std::cout << "Player 1's Turn\n";
        askQuestion(questions[i], player1Score);

        std::cout << "Player 2's Turn\n";
        askQuestion(questions[i + 5], player2Score);
    }

    std::cout << "Game Over\n";
    std::cout << "Player 1's score: " << player1Score << std::endl;
    std::cout << "Player 2's score: " << player2Score << std::endl;

    if (player1Score > player2Score) {
        std::cout << "Player 1 wins!\n";
    } else if (player2Score > player1Score) {
        std::cout << "Player 2 wins!\n";
    } else {
        std::cout << "It's a tie!\n";
    }

    return 0;
}

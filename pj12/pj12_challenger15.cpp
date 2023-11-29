#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

// Hàm để tính trung bình số từ mỗi câu
double calculateAverageWordsPerSentence(const string &filename) {
    ifstream inFile(filename);

    if (!inFile.is_open()) {
        cout << "Lỗi: Không thể mở tập tin để đọc." << endl;
        return 0.0;
    }

    string line;
    vector<int> wordsPerSentence;

    while (getline(inFile, line)) {
        // Sử dụng stringstream để đếm số từ trong mỗi câu
        stringstream ss(line);
        string word;
        int wordCount = 0;

        while (ss >> word) {
            wordCount++;
        }

        wordsPerSentence.push_back(wordCount);
    }

    inFile.close();

    // Tính trung bình số từ mỗi câu
    int totalWords = 0;
    for (int count : wordsPerSentence) {
        totalWords += count;
    }

    double averageWordsPerSentence = static_cast<double>(totalWords) / wordsPerSentence.size();
    return averageWordsPerSentence;
}

int main() {
    string filename = "text.txt";

    double averageWords = calculateAverageWordsPerSentence(filename);

    cout << "Trung bình số từ mỗi câu là: " << averageWords << endl;

    return 0;
}

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Hàm để đọc và hiển thị từng dòng của tập tin (joke file)
void readAndDisplayJoke(const string& filename) {
    ifstream jokeFile(filename);

    if (jokeFile.is_open()) {
        string line;
        while (getline(jokeFile, line)) {
            cout << line << endl;
        }

        jokeFile.close();
    } else {
        cout << "Lỗi: Không thể mở tập tin joke." << endl;
    }
}

// Hàm để hiển thị punch line từ tập tin (punch line file)
void displayPunchLine(const string& filename) {
    ifstream punchLineFile(filename);

    if (punchLineFile.is_open()) {
        string line;
        // Di chuyển đến cuối tập tin
        punchLineFile.seekg(0, ios::end);

        // Di chuyển lùi đến đầu dòng cuối cùng
        while (punchLineFile.tellg() > 0 && punchLineFile.get() != '\n') {
            punchLineFile.seekg(-2, ios::cur);
        }

        // Hiển thị punch line
        getline(punchLineFile, line);
        cout << line << endl;

        punchLineFile.close();
    } else {
        cout << "Lỗi: Không thể mở tập tin punchline." << endl;
    }
}

int main() {
    // Gọi hai hàm với tên của hai tập tin
    readAndDisplayJoke("joke.txt");
    displayPunchLine("punchline.txt");

    return 0;
}

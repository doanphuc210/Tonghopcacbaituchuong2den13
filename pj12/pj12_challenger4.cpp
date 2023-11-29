#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Hàm để hiển thị nội dung của tập tin với số dòng
void displayFileWithLineNumbers(const string& filename) {
    ifstream inputFile(filename);

    if (inputFile.is_open()) {
        string line;
        int lineNumber = 1;

        // Đọc từng dòng của tập tin và hiển thị với số dòng
        while (getline(inputFile, line)) {
            cout << lineNumber << ":" << line << endl;
            lineNumber++;
        }

        inputFile.close();
    } else {
        cout << "Lỗi: Không thể mở tập tin." << endl;
    }
}

int main() {
    string fileName;

    // Nhập tên tập tin từ người dùng
    cout << "Nhập tên tập tin: ";
    cin >> fileName;

    // Hiển thị nội dung của tập tin với số dòng
    displayFileWithLineNumbers(fileName);

    return 0;
}

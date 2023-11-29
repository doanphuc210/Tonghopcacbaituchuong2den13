#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Hàm để hiển thị "tail" của tập tin
void displayFileTail(const string& filename) {
    ifstream inputFile(filename);

    if (inputFile.is_open()) {
        vector<string> lines;
        string line;

        // Đọc từng dòng của tập tin và lưu vào vector
        while (getline(inputFile, line)) {
            lines.push_back(line);
        }

        inputFile.close();

        // Hiển thị "tail" của tập tin
        int start = max(0, static_cast<int>(lines.size()) - 10);
        for (int i = start; i < lines.size(); ++i) {
            cout << lines[i] << endl;
        }

        if (lines.size() <= 10) {
            cout << "Toàn bộ tập tin đã được hiển thị." << endl;
        }
    } else {
        cout << "Lỗi: Không thể mở tập tin." << endl;
    }
}

int main() {
    string fileName;

    // Nhập tên tập tin từ người dùng
    cout << "Nhập tên tập tin: ";
    cin >> fileName;

    // Hiển thị "tail" của tập tin
    displayFileTail(fileName);

    return 0;
}

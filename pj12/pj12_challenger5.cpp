#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Hàm để tìm kiếm và hiển thị chuỗi trong tập tin
void searchAndDisplay(const string& filename, const string& searchString) {
    ifstream inputFile(filename);

    if (inputFile.is_open()) {
        string line;
        int occurrences = 0;

        // Đọc từng dòng của tập tin
        while (getline(inputFile, line)) {
            // Kiểm tra xem chuỗi tìm kiếm có xuất hiện trong dòng không
            size_t found = line.find(searchString);
            if (found != string::npos) {
                // Nếu có, hiển thị dòng và tăng số lần xuất hiện
                cout << line << endl;
                occurrences++;
            }
        }

        // Hiển thị số lần xuất hiện cuối cùng
        cout << "Tìm thấy " << occurrences << " lần xuất hiện của chuỗi \"" << searchString << "\" trong tập tin." << endl;

        inputFile.close();
    } else {
        cout << "Lỗi: Không thể mở tập tin." << endl;
    }
}

int main() {
    string fileName;
    string searchString;

    // Nhập tên tập tin từ người dùng
    cout << "Nhập tên tập tin: ";
    cin >> fileName;

    // Nhập chuỗi cần tìm kiếm từ người dùng
    cout << "Nhập chuỗi cần tìm kiếm: ";
    cin.ignore(); // Loại bỏ ký tự newline còn lại từ trước
    getline(cin, searchString);

    // Tìm kiếm và hiển thị các dòng chứa chuỗi trong tập tin
    searchAndDisplay(fileName, searchString);

    return 0;
}

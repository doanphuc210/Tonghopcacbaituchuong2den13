#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

// Hàm để thực hiện việc sửa đổi văn bản
void processFile(const string& inputFile, const string& outputFile) {
    ifstream inFile(inputFile);
    ofstream outFile(outputFile);

    if (inFile.is_open() && outFile.is_open()) {
        char ch;
        bool newSentence = true; // Đánh dấu bắt đầu của mỗi câu

        while (inFile.get(ch)) {
            if (newSentence && isalpha(ch)) {
                // Chuyển chữ cái đầu tiên của mỗi câu thành chữ hoa
                ch = toupper(ch);
                newSentence = false;
            } else {
                // Chuyển chữ cái thành chữ thường
                ch = tolower(ch);

                // Kiểm tra xem câu đã kết thúc chưa
                if (ch == '.') {
                    newSentence = true;
                }
            }

            // Ghi ký tự đã sửa vào tập tin đầu ra
            outFile.put(ch);
        }

        cout << "Nội dung đã được xử lý và ghi vào '" << outputFile << "'." << endl;

        inFile.close();
        outFile.close();
    } else {
        cout << "Lỗi: Không thể mở tập tin." << endl;
    }
}

int main() {
    string inputFileName, outputFileName;

    // Nhập tên tập tin đầu vào từ người dùng
    cout << "Nhập tên tập tin đầu vào: ";
    cin >> inputFileName;

    // Nhập tên tập tin đầu ra từ người dùng
    cout << "Nhập tên tập tin đầu ra: ";
    cin >> outputFileName;

    // Xử lý và ghi nội dung đã sửa vào tập tin đầu ra
    processFile(inputFileName, outputFileName);

    return 0;
}

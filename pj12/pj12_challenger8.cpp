#include <iostream>
#include <fstream>

using namespace std;

// Hàm mã hóa nội dung của tập tin
void encryptFile(const char* inputFileName, const char* outputFileName) {
    ifstream inputFile(inputFileName, ios::binary);
    ofstream outputFile(outputFileName, ios::binary);

    if (inputFile.is_open() && outputFile.is_open()) {
        char ch;
        while (inputFile.get(ch)) {
            // Mã hóa: thêm 10 vào mã ASCII của từng ký tự
            ch = ch + 10;
            outputFile.put(ch);
        }

        cout << "Tập tin đã được mã hóa thành công." << endl;

        inputFile.close();
        outputFile.close();
    } else {
        cout << "Lỗi: Không thể mở tập tin." << endl;
    }
}

int main() {
    const char* inputFileName = "input.txt";
    const char* outputFileName = "output.txt";

    // Gọi hàm mã hóa tập tin
    encryptFile(inputFileName, outputFileName);

    return 0;
}

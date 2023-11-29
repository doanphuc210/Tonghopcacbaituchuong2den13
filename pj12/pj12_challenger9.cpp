#include <iostream>
#include <fstream>

using namespace std;

// Hàm giải mã nội dung của tập tin
void decryptFile(const char* inputFileName, const char* outputFileName) {
    ifstream inputFile(inputFileName, ios::binary);
    ofstream outputFile(outputFileName, ios::binary);

    if (inputFile.is_open() && outputFile.is_open()) {
        char ch;
        while (inputFile.get(ch)) {
            // Giải mã: trừ 10 từ mã ASCII của từng ký tự
            ch = ch - 10;
            outputFile.put(ch);
        }

        cout << "Tập tin đã được giải mã thành công." << endl;

        inputFile.close();
        outputFile.close();
    } else {
        cout << "Lỗi: Không thể mở tập tin." << endl;
    }
}

int main() {
    const char* inputFileName = "output.txt"; // Tên tập tin đã mã hóa
    const char* outputFileName = "decrypted_output.txt";

    // Gọi hàm giải mã tập tin
    decryptFile(inputFileName, outputFileName);

    return 0;
}

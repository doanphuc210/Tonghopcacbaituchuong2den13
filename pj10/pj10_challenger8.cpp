#include <iostream>
#include <cstring> // cho strlen

using namespace std;

int main() {
    const int MAX_SIZE = 100; // Kích thước tối đa cho chuỗi

    char inputString[MAX_SIZE];
    cout << "Nhập một chuỗi chứa các chữ số liên tiếp: ";
    cin >> inputString;

    // Tính tổng các chữ số
    int sum = 0;
    for (int i = 0; i < strlen(inputString); ++i) {
        if (isdigit(inputString[i])) {
            sum += inputString[i] - '0'; // Chuyển đổi ký tự số sang giá trị số nguyên
        }
    }

    // Tìm chữ số lớn nhất và nhỏ nhất
    char maxDigit = '0';
    char minDigit = '9';
    for (int i = 0; i < strlen(inputString); ++i) {
        if (isdigit(inputString[i])) {
            maxDigit = max(maxDigit, inputString[i]);
            minDigit = min(minDigit, inputString[i]);
        }
    }

    // Hiển thị kết quả
    cout << "Tổng các chữ số: " << sum << endl;
    cout << "Chữ số lớn nhất: " << maxDigit << endl;
    cout << "Chữ số nhỏ nhất: " << minDigit << endl;

    return 0;
}

#include <iostream>
#include <map>
#include <cctype> // cho isalnum
#include <vector>

using namespace std;

// Hàm chuyển đổi một ký tự hoặc số thành mã Morse
string chuyenDoiMorse(char kyTu) {
    // Bảng ánh xạ từ ký tự và số sang mã Morse
    map<char, string> bangMorse = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."},
        {'D', "-.."}, {'E', "."}, {'F', "..-."},
        {'G', "--."}, {'H', "...."}, {'I', ".."},
        {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
        {'M', "--"}, {'N', "-."}, {'O', "---"},
        {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."},
        {'S', "..."}, {'T', "-"}, {'U', "..-"},
        {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
        {'Y', "-.--"}, {'Z', "--.."},
        {'0', "-----"}, {'1', ".----"}, {'2', "..---"},
        {'3', "...--"}, {'4', "....-"}, {'5', "....."},
        {'6', "-...."}, {'7', "--..."}, {'8', "---.."},
        {'9', "----."}
    };

    // Chuyển đổi ký tự thành mã Morse
    kyTu = toupper(kyTu);
    if (isalnum(kyTu) || ispunct(kyTu)) {
        return bangMorse[kyTu];
    } else {
        return ""; // Nếu ký tự không nằm trong bảng ánh xạ, trả về chuỗi rỗng
    }
}

// Hàm chuyển đổi một chuỗi thành mã Morse
string chuyenDoiCauMorse(const string& cau) {
    string cauMorse;
    for (char kyTu : cau) {
        // Chuyển đổi từng ký tự và thêm vào chuỗi kết quả
        cauMorse += chuyenDoiMorse(kyTu) + " ";
    }
    return cauMorse;
}

int main() {
    string cauNhap;

    // Nhập chuỗi từ người dùng
    cout << "Nhập một chuỗi: ";
    getline(cin, cauNhap);

    // Chuyển đổi và hiển thị chuỗi Morse
    string cauMorse = chuyenDoiCauMorse(cauNhap);
    cout << "Chuỗi Morse: " << cauMorse << endl;

    return 0;
}

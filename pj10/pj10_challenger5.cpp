#include <iostream>
#include <cctype>   // cho hàm islower và toupper
#include <cstring>  // cho hàm strtok
#include <string>   // cho std::string

using namespace std;

// Hàm để chuyển đổi chữ cái đầu tiên của mỗi câu thành chữ in hoa cho chuỗi C
void chuVietHoaCau(char* chuoi) {
    // Sử dụng strtok để tách chuỗi dựa trên dấu chấm hoặc dấu chấm than
    char* token = strtok(chuoi, ".!");
    
    while (token != nullptr) {
        // Nếu ký tự đầu tiên của câu là chữ cái thường, chuyển đổi thành chữ in hoa
        if (islower(token[0])) {
            token[0] = toupper(token[0]);
        }

        // Tiếp tục xử lý các câu tiếp theo
        token = strtok(nullptr, ".!");
    }
}

// Phiên bản nạp chồng của hàm để chuyển đổi chữ cái đầu tiên của mỗi câu thành chữ in hoa cho đối tượng chuỗi std::string
void chuVietHoaCau(string& chuoi) {
    size_t viTriBatDau = 0;

    while (viTriBatDau < chuoi.length()) {
        // Tìm vị trí của dấu chấm hoặc dấu chấm than tiếp theo
        size_t viTriDauCau = chuoi.find_first_of(".!", viTriBatDau);
        
        // Nếu tìm thấy, chuyển đổi chữ cái đầu tiên của câu thành chữ in hoa
        if (viTriDauCau != string::npos && islower(chuoi[viTriBatDau])) {
            chuoi[viTriBatDau] = toupper(chuoi[viTriBatDau]);
        }

        // Chuyển tới vị trí tiếp theo sau dấu chấm hoặc dấu chấm than
        viTriBatDau = (viTriDauCau != string::npos) ? viTriDauCau + 1 : chuoi.length();
    }
}

int main() {
    const int MAX_SIZE = 1000; // Kích thước tối đa cho chuỗi

    char nhapChuoi[MAX_SIZE];
    string nhapChuoiClass;

    // Nhập chuỗi từ người dùng
    cout << "Nhập vào một chuỗi (C-string hoặc std::string): ";
    cin.getline(nhapChuoi, MAX_SIZE);
    getline(cin, nhapChuoiClass);

    // Gọi hàm để chuyển đổi chữ cái đầu tiên của mỗi câu thành chữ in hoa
    chuVietHoaCau(nhapChuoi);
    chuVietHoaCau(nhapChuoiClass);

    // Hiển thị chuỗi sau khi được chuyển đổi
    cout << "Chuỗi sau khi chuyển đổi: " << nhapChuoi << endl;
    cout << "Chuỗi sau khi chuyển đổi (std::string): " << nhapChuoiClass << endl;

    return 0;
}

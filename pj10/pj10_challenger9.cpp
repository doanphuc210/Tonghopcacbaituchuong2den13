#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

char kyTuXuatHienNhieuNhat(const char* chuoi) {
    // Sử dụng bản đồ không tuần tự để đếm số lần xuất hiện của mỗi ký tự
    unordered_map<char, int> demKyTu;

    // Đếm số lần xuất hiện của mỗi ký tự trong chuỗi
    while (*chuoi != '\0') {
        if (isalpha(*chuoi)) {
            // Chuyển đổi ký tự thành chữ thường để đảm bảo độ nhất quán
            char lowercaseChar = tolower(*chuoi);
            demKyTu[lowercaseChar]++;
        }
        chuoi++;
    }

    // Tìm ký tự xuất hiện nhiều nhất
    char kyTuMax = '\0';
    int soLanXuatHienMax = 0;

    for (const auto& entry : demKyTu) {
        if (entry.second > soLanXuatHienMax) {
            kyTuMax = entry.first;
            soLanXuatHienMax = entry.second;
        }
    }

    return kyTuMax;
}

char kyTuXuatHienNhieuNhat(const string& chuoi) {
    // Chuyển đổi chuỗi thành chuỗi C để sử dụng chung cho cả hai phiên bản
    return kyTuXuatHienNhieuNhat(chuoi.c_str());
}

int main() {
    const int MAX_SIZE = 1000; // Kích thước tối đa cho chuỗi C
    char nhapChuoi[MAX_SIZE];

    // Nhập chuỗi từ người dùng
    cout << "Nhập vào một chuỗi: ";
    cin.getline(nhapChuoi, MAX_SIZE);

    // Gọi hàm để tìm ký tự xuất hiện nhiều nhất
    char ketQua = kyTuXuatHienNhieuNhat(nhapChuoi);

    if (ketQua != '\0') {
        cout << "Ký tự xuất hiện nhiều nhất trong chuỗi: " << ketQua << endl;
    } else {
        cout << "Chuỗi rỗng hoặc không có ký tự chữ cái.\n";
    }

    return 0;
}

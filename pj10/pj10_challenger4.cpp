#include <iostream>
#include <cstring> // cho strtok trong phiên bản C-string
#include <string>  // cho std::string trong phiên bản nạp chồng

using namespace std;

// Hàm để đếm số từ trong một chuỗi C và tính số trung bình ký tự trong mỗi từ
void demVaTinhTrungBinhKyTu(const char* chuoi) {
    // Sử dụng strtok để tách chuỗi dựa trên dấu cách
    char* token = strtok(const_cast<char*>(chuoi), " ");
    int demTu = 0;
    int tongKyTu = 0;

    while (token != nullptr) {
        ++demTu;
        tongKyTu += strlen(token);
        token = strtok(nullptr, " ");
    }

    // Tính số trung bình ký tự
    double trungBinhKyTu = (demTu > 0) ? static_cast<double>(tongKyTu) / demTu : 0.0;

    cout << "Số từ trong chuỗi: " << demTu << endl;
    cout << "Số trung bình ký tự trong mỗi từ: " << trungBinhKyTu << endl;
}

int main() {
    const int MAX_SIZE = 100; // Kích thước tối đa cho chuỗi

    char nhapChuoi[MAX_SIZE];

    // Nhập chuỗi từ người dùng
    cout << "Nhập vào một chuỗi: ";
    cin.getline(nhapChuoi, MAX_SIZE);

    // Gọi hàm để đếm số từ và tính số trung bình ký tự trong mỗi từ
    demVaTinhTrungBinhKyTu(nhapChuoi);

    return 0;
}

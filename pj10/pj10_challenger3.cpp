#include <iostream>
#include <cstring> // cho strtok trong phiên bản C-string
#include <string>  // cho std::string trong phiên bản nạp chồng

using namespace std;

// Hàm để đếm số từ trong một chuỗi C
int demSoTu(const char* chuoi) {
    // Sử dụng strtok để tách chuỗi dựa trên dấu cách
    char* token = strtok(const_cast<char*>(chuoi), " ");
    int demTu = 0;

    while (token != nullptr) {
        ++demTu;
        token = strtok(nullptr, " ");
    }

    return demTu;
}

// Phiên bản nạp chồng của hàm để đếm số từ trong một đối tượng chuỗi std::string
int demSoTu(const string& chuoi) {
    size_t viTriBatDau = 0;
    size_t viTriTimThay = chuoi.find_first_of(" ", viTriBatDau);
    int demTu = 0;

    while (viTriTimThay != string::npos) {
        ++demTu;
        viTriBatDau = viTriTimThay + 1;
        viTriTimThay = chuoi.find_first_of(" ", viTriBatDau);
    }

    // Đếm từ cuối cùng
    if (!chuoi.empty()) {
        ++demTu;
    }

    return demTu;
}

int main() {
    const int MAX_SIZE = 100; // Kích thước tối đa cho chuỗi

    char nhapChuoi[MAX_SIZE];
    string nhapChuoiClass;

    // Nhập chuỗi từ người dùng
    cout << "Nhập vào một chuỗi (C-string): ";
    cin.getline(nhapChuoi, MAX_SIZE);

    // Tính và hiển thị số từ trong chuỗi C
    int soTuCString = demSoTu(nhapChuoi);
    cout << "Số từ trong chuỗi (phiên bản C-string): " << soTuCString << endl;

    // Nhập chuỗi từ người dùng
    cout << "Nhập vào một chuỗi (std::string): ";
    getline(cin, nhapChuoiClass);

    // Tính và hiển thị số từ trong chuỗi std::string
    int soTuStdString = demSoTu(nhapChuoiClass);
    cout << "Số từ trong chuỗi (phiên bản std::string): " << soTuStdString << endl;

    return 0;
}

#include <iostream>
#include <cstring> // cho hàm strlen

using namespace std;

// Hàm để hiển thị nội dung của chuỗi theo chiều ngược lại
void hienThiChuoiNguoc(const char* chuoi) {
    int doDai = strlen(chuoi);

    // Hiển thị từng ký tự theo chiều ngược lại
    for (int i = doDai - 1; i >= 0; --i) {
        cout << chuoi[i];
    }
    cout << endl;
}

int main() {
    const int MAX_SIZE = 100; // Kích thước tối đa cho chuỗi

    char nhapChuoi[MAX_SIZE];

    // Nhập chuỗi từ người dùng
    cout << "Nhập vào một chuỗi: ";
    cin.getline(nhapChuoi, MAX_SIZE);

    // Gọi hàm để hiển thị nội dung của chuỗi theo chiều ngược lại
    cout << "Chuỗi theo chiều ngược lại là: ";
    hienThiChuoiNguoc(nhapChuoi);

    return 0;
}

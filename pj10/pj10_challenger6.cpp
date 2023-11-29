#include <iostream>
#include <cctype> // cho hàm isalpha
#include <cstring> // cho strlen

using namespace std;

// Hàm để đếm số nguyên âm trong một chuỗi C
int demNguyenAm(const char* chuoi) {
    int soNguyenAm = 0;

    for (int i = 0; i < strlen(chuoi); ++i) {
        char kyTu = tolower(chuoi[i]); // Chuyển đổi thành chữ thường để kiểm tra

        if (kyTu == 'a' || kyTu == 'e' || kyTu == 'i' || kyTu == 'o' || kyTu == 'u') {
            ++soNguyenAm;
        }
    }

    return soNguyenAm;
}

// Hàm để đếm số phụ âm trong một chuỗi C
int demPhuAm(const char* chuoi) {
    int soPhuAm = 0;

    for (int i = 0; i < strlen(chuoi); ++i) {
        char kyTu = tolower(chuoi[i]); // Chuyển đổi thành chữ thường để kiểm tra

        if (isalpha(kyTu) && kyTu != 'a' && kyTu != 'e' && kyTu != 'i' && kyTu != 'o' && kyTu != 'u') {
            ++soPhuAm;
        }
    }

    return soPhuAm;
}

int main() {
    const int MAX_SIZE = 100; // Kích thước tối đa cho chuỗi
    char nhapChuoi[MAX_SIZE];

    do {
        // Nhập chuỗi từ người dùng
        cout << "Nhập vào một chuỗi: ";
        cin.getline(nhapChuoi, MAX_SIZE);

        // Hiển thị menu
        cout << "Menu:\n";
        cout << "A) Đếm số nguyên âm trong chuỗi\n";
        cout << "B) Đếm số phụ âm trong chuỗi\n";
        cout << "C) Đếm cả số nguyên âm và số phụ âm trong chuỗi\n";
        cout << "D) Nhập chuỗi khác\n";
        cout << "E) Thoát chương trình\n";
        cout << "Chọn tùy chọn (A/B/C/D/E): ";

        char luaChon;
        cin >> luaChon;
        cin.ignore(); // Xóa bộ đệm nhập

        switch (toupper(luaChon)) {
            case 'A':
                cout << "Số nguyên âm trong chuỗi: " << demNguyenAm(nhapChuoi) << endl;
                break;
            case 'B':
                cout << "Số phụ âm trong chuỗi: " << demPhuAm(nhapChuoi) << endl;
                break;
            case 'C':
                cout << "Số nguyên âm trong chuỗi: " << demNguyenAm(nhapChuoi) << endl;
                cout << "Số phụ âm trong chuỗi: " << demPhuAm(nhapChuoi) << endl;
                break;
            case 'D':
                // Chọn D để nhập chuỗi mới
                break;
            case 'E':
                cout << "Thoát chương trình.\n";
                break;
            default:
                cout << "Tùy chọn không hợp lệ. Vui lòng chọn lại.\n";
        }
    } while (toupper(nhapChuoi[0]) != 'E');

    return 0;
}

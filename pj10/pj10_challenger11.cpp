#include <iostream>
#include <cstring> // cho strlen

using namespace std;

// Hàm chuyển tất cả ký tự trong chuỗi thành chữ hoa
void upper(char* chuoi) {
    for (int i = 0; i < strlen(chuoi); ++i) {
        chuoi[i] = toupper(chuoi[i]);
    }
}

// Hàm chuyển tất cả ký tự trong chuỗi thành chữ thường
void lower(char* chuoi) {
    for (int i = 0; i < strlen(chuoi); ++i) {
        chuoi[i] = tolower(chuoi[i]);
    }
}

// Hàm đảo ngược chữ hoa thành chữ thường và ngược lại trong chuỗi
void reverse(char* chuoi) {
    for (int i = 0; i < strlen(chuoi); ++i) {
        if (isupper(chuoi[i])) {
            chuoi[i] = tolower(chuoi[i]);
        } else if (islower(chuoi[i])) {
            chuoi[i] = toupper(chuoi[i]);
        }
    }
}

int main() {
    const int MAX_SIZE = 100; // Kích thước tối đa cho chuỗi C
    char nhapChuoi[MAX_SIZE];

    // Nhập chuỗi từ người dùng
    cout << "Nhập vào một chuỗi: ";
    cin.getline(nhapChuoi, MAX_SIZE);

    // Gọi các hàm để xử lý chuỗi theo thứ tự: reverse, lower, upper
    reverse(nhapChuoi);
    cout << "Chuỗi sau khi đảo ngược: " << nhapChuoi << endl;

    lower(nhapChuoi);
    cout << "Chuỗi sau khi chuyển thành chữ thường: " << nhapChuoi << endl;

    upper(nhapChuoi);
    cout << "Chuỗi sau khi chuyển thành chữ hoa: " << nhapChuoi << endl;

    return 0;
}

#include <iostream>
#include <cctype> // cho isupper, islower, isdigit

using namespace std;

bool kiemTraMatKhau(const string& matKhau) {
    // Kiểm tra độ dài của mật khẩu
    if (matKhau.length() < 6) {
        cout << "Mật khẩu phải có ít nhất 6 ký tự.\n";
        return false;
    }

    // Kiểm tra xem có ít nhất một chữ hoa, một chữ thường và một chữ số
    bool coChuHoa = false;
    bool coChuThuong = false;
    bool coChuSo = false;

    for (char kyTu : matKhau) {
        if (isupper(kyTu)) {
            coChuHoa = true;
        } else if (islower(kyTu)) {
            coChuThuong = true;
        } else if (isdigit(kyTu)) {
            coChuSo = true;
        }
    }

    if (!coChuHoa) {
        cout << "Mật khẩu phải chứa ít nhất một chữ hoa.\n";
        return false;
    }

    if (!coChuThuong) {
        cout << "Mật khẩu phải chứa ít nhất một chữ thường.\n";
        return false;
    }

    if (!coChuSo) {
        cout << "Mật khẩu phải chứa ít nhất một chữ số.\n";
        return false;
    }

    // Mật khẩu đáp ứng tất cả các yêu cầu
    return true;
}

int main() {
    string matKhau;

    // Nhập mật khẩu từ người dùng
    cout << "Nhập mật khẩu: ";
    getline(cin, matKhau);

    // Kiểm tra mật khẩu
    if (kiemTraMatKhau(matKhau)) {
        cout << "Mật khẩu hợp lệ.\n";
    }

    return 0;
}

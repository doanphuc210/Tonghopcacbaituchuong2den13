#include <iostream>
#include <cctype> // cho isupper

using namespace std;

string chuyenDoiCau(const string& cau) {
    string ketQua;
    bool laChuHoaTruocDo = false;

    for (char kyTu : cau) {
        if (isupper(kyTu)) {
            // Nếu là chữ hoa, thêm dấu cách trước từ đầu tiên (trừ từ đầu tiên)
            if (!ketQua.empty() && !laChuHoaTruocDo) {
                ketQua += ' ';
            }

            laChuHoaTruocDo = true;
        } else {
            laChuHoaTruocDo = false;
        }

        // Chuyển đổi chữ hoa thành chữ thường và thêm vào chuỗi kết quả
        ketQua += tolower(kyTu);
    }

    return ketQua;
}

int main() {
    string cauNhap;

    // Nhập câu từ người dùng
    cout << "Nhập một câu: ";
    getline(cin, cauNhap);

    // Chuyển đổi và hiển thị câu mới
    string cauMoi = chuyenDoiCau(cauNhap);
    cout << "Câu mới: " << cauMoi << endl;

    return 0;
}

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Hàm chuyển số thành chuỗi tiền tệ
string soSangChuoiTienTe(double so) {
    // Hàm này giả định rằng số không vượt quá 10,000 và không là số âm.
    const string chuSo[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    const string chuSo10To19[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    const string chuSo20To90[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    string chuoiTienTe;

    int soHangTram = static_cast<int>(so) / 100;
    int soHangChuc = static_cast<int>(so) % 100 / 10;
    int soHangDonVi = static_cast<int>(so) % 10;
    int soPhanLe = static_cast<int>((so - static_cast<int>(so)) * 100);

    // Chuyển số hàng trăm thành chuỗi
    if (soHangTram > 0) {
        chuoiTienTe += chuSo[soHangTram] + " Hundred ";
    }

    // Chuyển số hàng chục và hàng đơn vị thành chuỗi
    if (soHangChuc == 1) {
        chuoiTienTe += chuSo10To19[soHangDonVi] + " ";
    } else {
        chuoiTienTe += chuSo20To90[soHangChuc] + " " + chuSo[soHangDonVi] + " ";
    }

    // Chuyển số phần lẻ thành chuỗi
    chuoiTienTe += "and " + to_string(soPhanLe) + " cents";

    return chuoiTienTe;
}

int main() {
    // Nhập thông tin từ người dùng
    string ngay, tenNguoiNhan;
    double soTien;

    cout << "Nhap ngay (mm/dd/yyyy): ";
    getline(cin, ngay);

    cout << "Nhap ten nguoi nhan: ";
    getline(cin, tenNguoiNhan);

    do {
        cout << "Nhap so tien (0 - 10000): $";
        cin >> soTien;

        if (soTien < 0 || soTien > 10000) {
            cout << "Vui long nhap so tien hop le.\n";
        }

    } while (soTien < 0 || soTien > 10000);

    // Hiển thị tờ lương giả mạo
    cout << fixed << setprecision(2);
    cout << "Date: " << ngay << endl;
    cout << "Pay to the Order of: " << tenNguoiNhan << " $" << soTien << endl;
    cout << soSangChuoiTienTe(soTien) << endl;

    return 0;
}

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

using namespace std;

string chuyenDoiNgay(const string& ngay) {
    // Sử dụng stringstream để tách các thành phần của ngày
    stringstream ss(ngay);
    int thang, ngay, nam;

    char phanCach; // Dấu "/" phân cách giữa các thành phần ngày, tháng, năm
    ss >> thang >> phanCach >> ngay >> phanCach >> nam;

    // Kiểm tra độ hợp lệ của ngày
    if (thang < 1 || thang > 12 || ngay < 1 || ngay > 31 || nam < 1000) {
        cout << "Ngày không hợp lệ.\n";
        return "";
    }

    // Tạo một đối tượng stringstream mới để chuyển đổi tháng thành chuỗi văn bản
    stringstream ssThang;
    ssThang << thang;

    // Mảng chứa tên các tháng
    string tenThang[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    // Tạo chuỗi định dạng ngày mới
    string ngayMoi = tenThang[thang - 1] + " " + to_string(ngay) + ", " + to_string(nam);

    return ngayMoi;
}

int main() {
    string ngayNhap;

    // Nhập ngày từ người dùng
    cout << "Nhập ngày theo định dạng mm/dd/yyyy: ";
    getline(cin, ngayNhap);

    // Chuyển đổi và hiển thị ngày
    string ngayMoi = chuyenDoiNgay(ngayNhap);
    if (!ngayMoi.empty()) {
        cout << "Ngày theo định dạng mới: " << ngayMoi << endl;
    }

    return 0;
}

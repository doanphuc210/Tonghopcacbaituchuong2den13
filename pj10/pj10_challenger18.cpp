#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct ThongTinDienThoai {
    string ten;
    string soDienThoai;
};

int main() {
    const int kichThuocMang = 10;

    // Khởi tạo mảng chứa thông tin người
    ThongTinDienThoai danhBa[kichThuocMang] = {
        {"Alejandra Cruz", "555-1223"},
        {"Joe Looney", "555-0097"},
        {"Geri Palmer", "555-8787"},
        {"Li Chen", "555-1212"},
        {"Holly Gaddis", "555-8878"},
        {"Sam Wiggins", "555-0998"},
        {"Bob Kain", "555-8712"},
        {"Tim Haynes", "555-7676"},
        {"Warren Gaddis", "555-9037"},
        {"Jean James", "555-4939"},
        {"Ron Palmer", "555-2783"}
    };

    string tenCanTim;
    cout << "Nhập tên hoặc phần của tên để tìm kiếm: ";
    getline(cin, tenCanTim);

    // Tìm kiếm và hiển thị các mục trong mảng chứa tên hoặc phần của tên nhập từ người dùng
    vector<ThongTinDienThoai> ketQuaTimKiem;
    for (const ThongTinDienThoai& nguoi : danhBa) {
        size_t viTriTimThay = nguoi.ten.find(tenCanTim);
        if (viTriTimThay != string::npos) {
            ketQuaTimKiem.push_back(nguoi);
        }
    }

    // Hiển thị kết quả tìm kiếm
    if (!ketQuaTimKiem.empty()) {
        cout << "Kết quả tìm kiếm:\n";
        for (const ThongTinDienThoai& ketQua : ketQuaTimKiem) {
            cout << ketQua.ten << ", " << ketQua.soDienThoai << endl;
        }
    } else {
        cout << "Không tìm thấy kết quả nào cho \"" << tenCanTim << "\".\n";
    }

    return 0;
}

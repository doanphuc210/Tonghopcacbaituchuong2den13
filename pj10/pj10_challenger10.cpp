#include <iostream>
#include <string>

using namespace std;

// Hàm để thay thế chuỗi con trong chuỗi bằng một chuỗi khác
string replaceSubstring(const string& chuoi, const string& chuoiCon, const string& chuoiMoi) {
    string ketQua = chuoi;

    // Tìm vị trí xuất hiện đầu tiên của chuỗiCon trong chuỗi
    size_t viTri = ketQua.find(chuoiCon);

    // Lặp qua tất cả các vị trí xuất hiện của chuỗiCon và thay thế chúng bằng chuỗiMoi
    while (viTri != string::npos) {
        ketQua.replace(viTri, chuoiCon.length(), chuoiMoi);
        viTri = ketQua.find(chuoiCon, viTri + chuoiMoi.length());
    }

    return ketQua;
}

int main() {
    // Nhập các chuỗi từ người dùng
    string string1, string2, string3;

    cout << "Nhập chuỗi gốc: ";
    getline(cin, string1);

    cout << "Nhập chuỗi con cần thay thế: ";
    getline(cin, string2);

    cout << "Nhập chuỗi mới: ";
    getline(cin, string3);

    // Gọi hàm để thay thế chuỗi con trong chuỗi
    string ketQua = replaceSubstring(string1, string2, string3);

    // Hiển thị kết quả
    cout << "Chuỗi sau khi thay thế: " << ketQua << endl;

    return 0;
}

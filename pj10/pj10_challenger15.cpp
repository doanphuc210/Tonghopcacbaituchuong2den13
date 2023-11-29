#include <iostream>
#include <fstream>
#include <cctype> // cho isupper, islower, isdigit

using namespace std;

int main() {
    ifstream inputFile("text.txt");

    // Kiểm tra xem tệp có mở thành công không
    if (!inputFile) {
        cerr << "Không thể mở tệp text.txt\n";
        return 1;
    }

    char kyTu;
    int soChuHoa = 0;
    int soChuThuong = 0;
    int soChuSo = 0;

    // Đọc từng ký tự từ tệp và kiểm tra loại ký tự
    while (inputFile.get(kyTu)) {
        if (isupper(kyTu)) {
            soChuHoa++;
        } else if (islower(kyTu)) {
            soChuThuong++;
        } else if (isdigit(kyTu)) {
            soChuSo++;
        }
    }

    // Đóng tệp
    inputFile.close();

    // Hiển thị kết quả
    cout << "Số chữ hoa trong tệp: " << soChuHoa << endl;
    cout << "Số chữ thường trong tệp: " << soChuThuong << endl;
    cout << "Số chữ số trong tệp: " << soChuSo << endl;

    return 0;
}

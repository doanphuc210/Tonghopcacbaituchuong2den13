#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName;
    string line;

    // Nhập tên tập tin từ người dùng
    cout << "Nhập tên tập tin: ";
    getline(cin, fileName);

    // Mở tập tin
    ifstream inputFile(fileName);

    // Kiểm tra xem tập tin có mở được không
    if (inputFile.is_open()) {
        // Hiển thị nội dung tập tin trên màn hình, tạm dừng sau mỗi 24 dòng
        int lineCount = 0;
        while (getline(inputFile, line)) {
            cout << line << endl;
            ++lineCount;

            // Tạm dừng sau mỗi 24 dòng
            if (lineCount % 24 == 0) {
                cout << "Nhấn phím bất kỳ để tiếp tục...";
                cin.get(); // Đợi người dùng nhấn phím
            }
        }

        // Đóng tập tin
        inputFile.close();
    } else {
        cout << "Lỗi: Không thể mở tập tin." << endl;
    }

    return 0;
}

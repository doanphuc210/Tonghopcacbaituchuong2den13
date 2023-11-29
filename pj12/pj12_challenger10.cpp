#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Khai báo cấu trúc cho dữ liệu doanh số bán hàng của mỗi chi nhánh
struct DivisionData {
    string divisionName;
    int quarter;
    double quarterlySales;
};

// Hàm nhập thông tin doanh số bán hàng từ người dùng
void inputSalesData(DivisionData &data) {
    cout << "Nhập tên chi nhánh: ";
    cin >> data.divisionName;

    cout << "Nhập quý (1-4): ";
    cin >> data.quarter;

    // Kiểm tra nhập số âm
    while (data.quarter < 1 || data.quarter > 4) {
        cout << "Quý phải là 1, 2, 3 hoặc 4. Vui lòng nhập lại: ";
        cin >> data.quarter;
    }

    cout << "Nhập doanh số bán hàng trong quý: ";
    cin >> data.quarterlySales;

    // Kiểm tra nhập số âm
    while (data.quarterlySales < 0) {
        cout << "Doanh số bán hàng không thể là số âm. Vui lòng nhập lại: ";
        cin >> data.quarterlySales;
    }
}

// Hàm lưu dữ liệu vào tập tin
void saveToFile(const DivisionData &data, const string &filename) {
    ofstream outFile(filename, ios::app); // Chế độ mở tập tin để thêm vào cuối

    if (outFile.is_open()) {
        // Ghi dữ liệu vào tập tin
        outFile << data.divisionName << " " << data.quarter << " " << data.quarterlySales << endl;
        outFile.close();
        cout << "Dữ liệu đã được lưu vào tập tin." << endl;
    } else {
        cout << "Lỗi: Không thể mở tập tin để ghi." << endl;
    }
}

int main() {
    DivisionData division;

    // Lặp qua từng chi nhánh và quý để nhập và lưu dữ liệu
    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= 4; ++j) {
            cout << "Nhập thông tin doanh số bán hàng cho quý " << j << " của chi nhánh ";
            cout << "vùng " << char('A' + i - 1) << ":\n";

            division.quarter = j;
            inputSalesData(division);

            // Gọi hàm để lưu dữ liệu vào tập tin
            saveToFile(division, "sales_data.txt");
        }
    }

    return 0;
}

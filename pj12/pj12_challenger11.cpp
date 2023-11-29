#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// Khai báo cấu trúc cho dữ liệu doanh số bán hàng của mỗi chi nhánh
struct DivisionData {
    string divisionName;
    int quarter;
    double quarterlySales;
};

// Hàm đọc dữ liệu từ tập tin và thực hiện các tính toán
void processSalesData(const string &filename) {
    ifstream inFile(filename);

    if (!inFile.is_open()) {
        cout << "Lỗi: Không thể mở tập tin để đọc." << endl;
        return;
    }

    double totalCorporateSales[4] = {0}; // Tổng doanh số bán hàng của từng quý
    double totalYearlySales[4] = {0};    // Tổng doanh số bán hàng hàng năm của từng chi nhánh
    double totalCorporateYearlySales = 0; // Tổng doanh số bán hàng hàng năm của toàn công ty
    int numberOfRecords = 0;              // Số lượng bản ghi trong tập tin

    DivisionData record;
    inFile >> record.divisionName >> record.quarter >> record.quarterlySales;

    while (inFile) {
        // Thực hiện các tính toán
        totalCorporateSales[record.quarter - 1] += record.quarterlySales;
        totalYearlySales[record.quarter - 1] += record.quarterlySales;
        totalCorporateYearlySales += record.quarterlySales;

        ++numberOfRecords;

        // Đọc dữ liệu cho bản ghi tiếp theo
        inFile >> record.divisionName >> record.quarter >> record.quarterlySales;
    }

    // Tính toán và hiển thị các chỉ số yêu cầu
    cout << "Tổng doanh số bán hàng của mỗi quý:\n";
    for (int i = 0; i < 4; ++i) {
        cout << "Quý " << i + 1 << ": $" << totalCorporateSales[i] << endl;
    }

    cout << "\nTổng doanh số bán hàng hàng năm của từng chi nhánh:\n";
    for (int i = 0; i < 4; ++i) {
        cout << "Chi nhánh " << char('A' + i) << ": $" << totalYearlySales[i] << endl;
    }

    cout << "\nTổng doanh số bán hàng hàng năm của toàn công ty: $" << totalCorporateYearlySales << endl;

    cout << "\nDoanh số bán hàng trung bình của từng quý cho các chi nhánh:\n";
    for (int i = 0; i < 4; ++i) {
        cout << "Chi nhánh " << char('A' + i) << ": $" << totalYearlySales[i] / numberOfRecords << endl;
    }

    // Tìm quý có doanh số bán hàng cao nhất và thấp nhất cho toàn công ty
    int highestQuarter = 0, lowestQuarter = 0;
    for (int i = 1; i < 4; ++i) {
        if (totalCorporateSales[i] > totalCorporateSales[highestQuarter]) {
            highestQuarter = i;
        }
        if (totalCorporateSales[i] < totalCorporateSales[lowestQuarter]) {
            lowestQuarter = i;
        }
    }

    cout << "\nQuý có doanh số bán hàng cao nhất cho toàn công ty: Quý " << highestQuarter + 1 << endl;
    cout << "Quý có doanh số bán hàng thấp nhất cho toàn công ty: Quý " << lowestQuarter + 1 << endl;
}

int main() {
    // Gọi hàm xử lý dữ liệu từ tập tin
    processSalesData("sales_data.txt");

    return 0;
}


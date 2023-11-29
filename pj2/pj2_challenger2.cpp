#include <iostream>
using namespace std;

int main() {
    double totalSales; // Tổng doanh số của công ty
    double eastCoastPercentage = 0.58; // Phần trăm doanh số khu vực phía Đông

    // Nhập tổng doanh số của công ty
    cout << "Nhập tổng doanh số của công ty: ";
    cin >> totalSales;

    // Dự đoán doanh số của khu vực phía Đông
    double eastCoastSales = totalSales * eastCoastPercentage;

    // In ra dự đoán
    cout << "Dự đoán doanh số của khu vực phía Đông là: " << eastCoastSales << endl;

    return 0;
}

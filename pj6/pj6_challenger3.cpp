#include <iostream>
#include <string>
using namespace std;

// Hàm để nhập số doanh số và kiểm tra tính hợp lệ
double getSales(string divisionName) {
    double sales;
    do {
        cout << "Nhập doanh số của bộ phận " << divisionName << " cho quý: $";
        cin >> sales;
        if (sales < 0) {
            cout << "Số doanh số không hợp lệ. Vui lòng nhập lại.\n";
        }
    } while (sales < 0);
    return sales;
}

// Hàm để tìm và hiển thị bộ phận có doanh số bán hàng cao nhất
void findHighest(double northeast, double southeast, double northwest, double southwest) {
    double highestSales = northeast;
    string divisionName = "Northeast";

    if (southeast > highestSales) {
        highestSales = southeast;
        divisionName = "Southeast";
    }
    if (northwest > highestSales) {
        highestSales = northwest;
        divisionName = "Northwest";
    }
    if (southwest > highestSales) {
        highestSales = southwest;
        divisionName = "Southwest";
    }

    cout << "Bộ phận có doanh số bán hàng cao nhất là " << divisionName << " với doanh số $" << highestSales << endl;
}

int main() {
    double northeastSales, southeastSales, northwestSales, southwestSales;

    northeastSales = getSales("Northeast");
    southeastSales = getSales("Southeast");
    northwestSales = getSales("Northwest");
    southwestSales = getSales("Southwest");

    findHighest(northeastSales, southeastSales, northwestSales, southwestSales);

    return 0;
}

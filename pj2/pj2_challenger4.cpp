#include <iostream>
using namespace std;

int main() {
    double mealCost = 88.67; // Giá trị hóa đơn ăn
    double taxRate = 0.0675; // Tỷ lệ thuế (6.75%)
    double tipRate = 0.20; // Tỷ lệ boa (20%)

    // Tính tiền thuế và tiền boa
    double taxAmount = mealCost * taxRate;
    double totalWithoutTip = mealCost + taxAmount;
    double tipAmount = totalWithoutTip * tipRate;

    // Tính tổng hóa đơn
    double totalBill = mealCost + taxAmount + tipAmount;

    cout << "Giá trị hóa đơn ăn là: $" << mealCost << endl;
    cout << "Tiền thuế là: $" << taxAmount << endl;
    cout << "Tiền boa là: $" << tipAmount << endl;
    cout << "Tổng hóa đơn là: $" << totalBill << endl;

    return 0;
}

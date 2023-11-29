#include <iostream>
using namespace std;

int main() {
    double payAmount = 2200.0; // Số tiền trả cho mỗi kỳ trả lương
    int payPeriods = 26; // Số lần trả lương trong năm
    double annualPay;

    annualPay = payAmount * payPeriods;

    cout << "Tổng thu nhập hàng năm của nhân viên là: $" << annualPay << endl;

    return 0;
}

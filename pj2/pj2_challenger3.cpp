#include <iostream>
using namespace std;

int main() {
    double purchaseAmount = 95.0; // Số tiền mua sắm
    double stateSalesTaxRate = 0.04; // Tỷ lệ thuế bán hàng của tiểu bang (4%)
    double countySalesTaxRate = 0.02; // Tỷ lệ thuế bán hàng của quận (2%)

    // Tính thuế của tiểu bang và quận
    double stateSalesTax = purchaseAmount * stateSalesTaxRate;
    double countySalesTax = purchaseAmount * countySalesTaxRate;

    // Tính tổng thuế bán hàng
    double totalSalesTax = stateSalesTax + countySalesTax;

    cout << "Tổng thuế bán hàng trên mua sắm trị giá $" << purchaseAmount << " là: $" << totalSalesTax << endl;

    return 0;
}

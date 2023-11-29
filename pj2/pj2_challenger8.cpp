#include <iostream>
using namespace std;

int main() {
    double price1 = 15.95;
    double price2 = 24.95;
    double price3 = 6.95;
    double price4 = 12.95;
    double price5 = 3.95;

    double salesTaxRate = 0.07; // Tỷ lệ thuế bán hàng (7%)
    double subtotal = price1 + price2 + price3 + price4 + price5;
    double salesTax = subtotal * salesTaxRate;
    double total = subtotal + salesTax;

    cout << "Giá của mặt hàng 1 là: $" << price1 << endl;
    cout << "Giá của mặt hàng 2 là: $" << price2 << endl;
    cout << "Giá của mặt hàng 3 là: $" << price3 << endl;
    cout << "Giá của mặt hàng 4 là: $" << price4 << endl;
    cout << "Giá của mặt hàng 5 là: $" << price5 << endl;
    cout << "Tổng tiền hàng là: $" << subtotal << endl;
    cout << "Tiền thuế bán hàng là: $" << salesTax << endl;
    cout << "Tổng cộng là: $" << total << endl;

    return 0;
}

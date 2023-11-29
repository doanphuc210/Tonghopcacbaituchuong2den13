#include <iostream>
using namespace std;

int main() {
    double costPrice = 14.95;
    double profitPercentage = 35.0; // Lợi nhuận 35%
    double sellingPrice;

    sellingPrice = costPrice + (costPrice * (profitPercentage / 100));

    cout << "Giá bán của bo mạch điện là: $" << sellingPrice << endl;

    return 0;
}

#include <iostream>
using namespace std;

// Hàm tính giá bán lẻ dựa trên giá bán buôn và tỷ lệ markup
double calculateRetail(double wholesaleCost, double markupPercentage) {
    if (wholesaleCost < 0 || markupPercentage < 0) {
        // Kiểm tra giá trị âm và trả về -1 nếu có
        return -1;
    } else {
        // Tính giá bán lẻ và trả về
        return wholesaleCost + (wholesaleCost * markupPercentage / 100);
    }
}

int main() {
    double wholesaleCost, markupPercentage, retailPrice;

    // Nhập giá bán buôn và tỷ lệ markup
    cout << "Nhập giá bán buôn: ";
    cin >> wholesaleCost;

    cout << "Nhập tỷ lệ markup (%): ";
    cin >> markupPercentage;

    // Gọi hàm tính giá bán lẻ
    retailPrice = calculateRetail(wholesaleCost, markupPercentage);

    if (retailPrice >= 0) {
        // Kiểm tra nếu giá bán lẻ hợp lệ (không âm)
        cout << "Giá bán lẻ là: " << retailPrice << endl;
    } else {
        cout << "Giá trị không hợp lệ. Vui lòng nhập giá trị không âm." << endl;
    }

    return 0;
}

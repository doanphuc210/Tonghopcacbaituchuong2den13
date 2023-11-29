#include <iostream>
using namespace std;

// Hàm để nhập chiều dài của hình chữ nhật
double getLength() {
    double length;
    cout << "Nhập chiều dài của hình chữ nhật: ";
    cin >> length;
    return length;
}

// Hàm để nhập chiều rộng của hình chữ nhật
double getWidth() {
    double width;
    cout << "Nhập chiều rộng của hình chữ nhật: ";
    cin >> width;
    return width;
}

// Hàm tính diện tích của hình chữ nhật
double getArea(double length, double width) {
    return length * width;
}

// Hàm hiển thị thông tin về hình chữ nhật
void displayData(double length, double width, double area) {
    cout << "Chiều dài của hình chữ nhật: " << length << endl;
    cout << "Chiều rộng của hình chữ nhật: " << width << endl;
    cout << "Diện tích của hình chữ nhật: " << area << endl;
}

int main() {
    double length, width, area;

    length = getLength();
    width = getWidth();
    area = getArea(length, width);

    displayData(length, width, area);

    return 0;
}

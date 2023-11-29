#include <iostream>
using namespace std;

int main() {
    int value1 = 28;
    int value2 = 32;
    int value3 = 37;
    int value4 = 24;
    int value5 = 33;

    int sum = value1 + value2 + value3 + value4 + value5;
    double average = static_cast<double>(sum) / 5;

    cout << "Giá trị trung bình của chuỗi giá trị là: " << average << endl;

    return 0;
}

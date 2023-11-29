#include <iostream>
using namespace std;

int main() {
    int sizeOfChar = sizeof(char);
    int sizeOfInt = sizeof(int);
    int sizeOfFloat = sizeof(float);
    int sizeOfDouble = sizeof(double);

    cout << "Kích thước của kiểu dữ liệu char: " << sizeOfChar << " byte" << endl;
    cout << "Kích thước của kiểu dữ liệu int: " << sizeOfInt << " byte" << endl;
    cout << "Kích thước của kiểu dữ liệu float: " << sizeOfFloat << " byte" << endl;
    cout << "Kích thước của kiểu dữ liệu double: " << sizeOfDouble << " byte" << endl;

    return 0;
}

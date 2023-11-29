#include <iostream>
#include <cstring> // cho strlen, strcat

using namespace std;

int main() {
    const int MAX_SIZE = 100; // Kích thước tối đa cho mỗi tên

    char firstName[MAX_SIZE];
    char middleName[MAX_SIZE];
    char lastName[MAX_SIZE];
    char arrangedName[MAX_SIZE * 3]; // Tổng chiều dài tối đa của mảng sau khi được sắp xếp

    // Nhập tên từ người dùng
    cout << "Nhập tên đệm: ";
    cin >> middleName;
    cout << "Nhập họ: ";
    cin >> lastName;
    cout << "Nhập tên: ";
    cin >> firstName;

    // Sắp xếp tên theo định dạng yêu cầu
    strcpy(arrangedName, lastName);
    strcat(arrangedName, ", ");
    strcat(arrangedName, firstName);
    strcat(arrangedName, " ");
    strcat(arrangedName, middleName);

    // Hiển thị tên đã sắp xếp
    cout << "Tên đã sắp xếp: " << arrangedName << endl;

    return 0;
}

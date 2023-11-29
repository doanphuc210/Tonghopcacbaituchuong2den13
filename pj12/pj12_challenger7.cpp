#include <iostream>
#include <fstream>

using namespace std;

// Hàm ghi mảng vào tập tin
void arrayToFile(const char* fileName, int* arr, int size) {
    ofstream outFile(fileName, ios::binary);

    if (outFile.is_open()) {
        outFile.write(reinterpret_cast<char*>(arr), size * sizeof(int));
        outFile.close();
        cout << "Mảng đã được ghi vào tập tin '" << fileName << "'." << endl;
    } else {
        cout << "Lỗi: Không thể mở tập tin để ghi." << endl;
    }
}

// Hàm đọc mảng từ tập tin
void fileToArray(const char* fileName, int* arr, int size) {
    ifstream inFile(fileName, ios::binary);

    if (inFile.is_open()) {
        inFile.read(reinterpret_cast<char*>(arr), size * sizeof(int));
        inFile.close();
    } else {
        cout << "Lỗi: Không thể mở tập tin để đọc." << endl;
    }
}

int main() {
    const char* fileName = "data.bin";
    const int size = 5;
    int data[size] = {1, 2, 3, 4, 5};

    // Ghi mảng vào tập tin
    arrayToFile(fileName, data, size);

    // Đọc mảng từ tập tin
    int readData[size];
    fileToArray(fileName, readData, size);

    // Hiển thị mảng đã đọc
    cout << "Mảng đã đọc từ tập tin '" << fileName << "': ";
    for (int i = 0; i < size; ++i) {
        cout << readData[i] << " ";
    }

    return 0;
}

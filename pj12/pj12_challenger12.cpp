#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

// Cấu trúc cho dữ liệu của mỗi bản ghi hàng tồn kho
struct InventoryRecord {
    string itemDescription;
    int quantityOnHand;
    double wholesaleCost;
    double retailCost;
    string dateAdded;
};

// Hàm để hiển thị menu
int displayMenu() {
    int choice;
    cout << "\n1. Thêm bản ghi mới\n";
    cout << "2. Hiển thị bản ghi\n";
    cout << "3. Thay đổi bản ghi\n";
    cout << "4. Thoát\n";
    cout << "Chọn: ";
    cin >> choice;
    return choice;
}

// Hàm để thêm bản ghi mới vào tập tin
void addRecord(const string &filename) {
    ofstream outFile(filename, ios::app);

    if (!outFile.is_open()) {
        cout << "Lỗi: Không thể mở tập tin để ghi." << endl;
        return;
    }

    InventoryRecord newRecord;

    // Nhập dữ liệu cho bản ghi mới
    cout << "Mô tả mặt hàng: ";
    cin.ignore();
    getline(cin, newRecord.itemDescription);

    cout << "Số lượng: ";
    cin >> newRecord.quantityOnHand;

    cout << "Giá bán sỉ: $";
    cin >> newRecord.wholesaleCost;

    cout << "Giá bán lẻ: $";
    cin >> newRecord.retailCost;

    // Lấy ngày hiện tại làm ngày thêm vào hàng tồn kho
    time_t now = time(0);
    tm *ltm = localtime(&now);
    newRecord.dateAdded = to_string(1 + ltm->tm_mon) + "/" + to_string(ltm->tm_mday) + "/" + to_string(1900 + ltm->tm_year);

    // Ghi bản ghi vào tập tin
    outFile << newRecord.itemDescription << " " << newRecord.quantityOnHand << " " << fixed << setprecision(2)
            << newRecord.wholesaleCost << " " << newRecord.retailCost << " " << newRecord.dateAdded << endl;

    cout << "Bản ghi đã được thêm vào thành công.\n";

    outFile.close();
}

// Hàm để hiển thị bản ghi từ tập tin
void displayRecord(const string &filename) {
    ifstream inFile(filename);

    if (!inFile.is_open()) {
        cout << "Lỗi: Không thể mở tập tin để đọc." << endl;
        return;
    }

    InventoryRecord record;
    int recordNumber;

    cout << "Nhập số thứ tự bản ghi cần hiển thị: ";
    cin >> recordNumber;

    int currentRecord = 1;

    while (inFile >> record.itemDescription >> record.quantityOnHand >> record.wholesaleCost >> record.retailCost >>
           record.dateAdded) {
        if (currentRecord == recordNumber) {
            // Hiển thị thông tin của bản ghi
            cout << "Mô tả mặt hàng: " << record.itemDescription << endl;
            cout << "Số lượng: " << record.quantityOnHand << endl;
            cout << "Giá bán sỉ: $" << record.wholesaleCost << endl;
            cout << "Giá bán lẻ: $" << record.retailCost << endl;
            cout << "Ngày thêm vào hàng tồn kho: " << record.dateAdded << endl;
            return;
        }

        ++currentRecord;
    }

    cout << "Không tìm thấy bản ghi có số thứ tự " << recordNumber << endl;
    inFile.close();
}

// Hàm để thay đổi bản ghi trong tập tin
void changeRecord(const string &filename) {
    // TODO: Bổ sung mã nguồn để thay đổi bản ghi
    cout << "Chức năng này đang được phát triển.\n";
}

int main() {
    string filename = "inventory.txt";

    while (true) {
        int choice = displayMenu();

        switch (choice) {
            case 1:
                addRecord(filename);
                break;
            case 2:
                displayRecord(filename);
                break;
            case 3:
                changeRecord(filename);
                break;
            case 4:
                cout << "Thoát chương trình.\n";
                return 0;
            default:
                cout << "Lựa chọn không hợp lệ. Vui lòng chọn lại.\n";
        }
    }

    return 0;
}
pj12_challenger
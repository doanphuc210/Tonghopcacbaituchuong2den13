#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// Cấu trúc cho dữ liệu của mỗi bản ghi hàng tồn kho
struct InventoryRecord {
    string itemDescription;
    int quantityOnHand;
    double wholesaleCost;
    double retailCost;
    string dateAdded;
};

// Hàm để đọc dữ liệu từ tập tin và tính toán giá trị
void calculateInventoryValues(const string &filename) {
    ifstream inFile(filename);

    if (!inFile.is_open()) {
        cout << "Lỗi: Không thể mở tập tin để đọc." << endl;
        return;
    }

    InventoryRecord record;
    double totalWholesaleValue = 0.0;
    double totalRetailValue = 0.0;
    int totalQuantity = 0;

    while (inFile >> record.itemDescription >> record.quantityOnHand >> record.wholesaleCost >> record.retailCost >>
           record.dateAdded) {
        // Tính toán giá trị cho từng bản ghi
        totalWholesaleValue += record.wholesaleCost * record.quantityOnHand;
        totalRetailValue += record.retailCost * record.quantityOnHand;
        totalQuantity += record.quantityOnHand;
    }

    // Hiển thị kết quả
    cout << "Tổng giá trị bán sỉ của hàng tồn kho: $" << fixed << setprecision(2) << totalWholesaleValue << endl;
    cout << "Tổng giá trị bán lẻ của hàng tồn kho: $" << fixed << setprecision(2) << totalRetailValue << endl;
    cout << "Tổng số lượng của tất cả các mặt hàng trong hàng tồn kho: " << totalQuantity << endl;

    inFile.close();
}

int main() {
    string filename = "inventory.txt";

    calculateInventoryValues(filename);

    return 0;
}

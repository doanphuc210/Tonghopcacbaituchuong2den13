#include <iostream>
#include <string>
using namespace std;

// Hàm để nhập số vụ tai nạn và kiểm tra tính hợp lệ
int getNumAccidents(string regionName) {
    int accidents;
    do {
        cout << "Nhập số vụ tai nạn giao thông trong vùng " << regionName << " trong năm ngoái: ";
        cin >> accidents;
        if (accidents < 0) {
            cout << "Số vụ tai nạn không hợp lệ. Vui lòng nhập lại.\n";
        }
    } while (accidents < 0);
    return accidents;
}

// Hàm để tìm và hiển thị vùng có ít tai nạn nhất
void findLowest(int north, int south, int east, int west, int central) {
    int lowestAccidents = north;
    string regionName = "North";

    if (south < lowestAccidents) {
        lowestAccidents = south;
        regionName = "South";
    }
    if (east < lowestAccidents) {
        lowestAccidents = east;
        regionName = "East";
    }
    if (west < lowestAccidents) {
        lowestAccidents = west;
        regionName = "West";
    }
    if (central < lowestAccidents) {
        lowestAccidents = central;
        regionName = "Central";
    }

    cout << "Vùng có ít tai nạn giao thông nhất là " << regionName << " với " << lowestAccidents << " vụ tai nạn.\n";
}

int main() {
    int northAccidents, southAccidents, eastAccidents, westAccidents, centralAccidents;

    northAccidents = getNumAccidents("North");
    southAccidents = getNumAccidents("South");
    eastAccidents = getNumAccidents("East");
    westAccidents = getNumAccidents("West");
    centralAccidents = getNumAccidents("Central");

    findLowest(northAccidents, southAccidents, eastAccidents, westAccidents, centralAccidents);

    return 0;
}

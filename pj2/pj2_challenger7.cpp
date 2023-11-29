#include <iostream>
using namespace std;

int main() {
    double oceanRiseRate = 1.5; // Tốc độ tăng mực nước biển (mm/năm)
    int years1 = 5;
    int years2 = 7;
    int years3 = 10;

    // Tính tăng mực nước biển sau số năm đã cho
    double riseIn5Years = oceanRiseRate * years1;
    double riseIn7Years = oceanRiseRate * years2;
    double riseIn10Years = oceanRiseRate * years3;

    cout << "Mực nước biển cao hơn so với mức hiện tại sau 5 năm: " << riseIn5Years << " mm" << endl;
    cout << "Mực nước biển cao hơn so với mức hiện tại sau 7 năm: " << riseIn7Years << " mm" << endl;
    cout << "Mực nước biển cao hơn so với mức hiện tại sau 10 năm: " << riseIn10Years << " mm" << endl;

    return 0;
}

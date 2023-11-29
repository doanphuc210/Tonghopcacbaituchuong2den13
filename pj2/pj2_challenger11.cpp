#include <iostream>
using namespace std;

int main() {
    int gasTankSize = 20; // Kích thước bình xăng (gallon)
    double cityMilesPerGallon = 23.5; // Số dặm trên một gallon xăng trong thành phố
    double highwayMilesPerGallon = 28.9; // Số dặm trên một gallon xăng trên xa lộ
    double cityDistance, highwayDistance;

    cityDistance = gasTankSize * cityMilesPerGallon;
    highwayDistance = gasTankSize * highwayMilesPerGallon;

    cout << "Khoảng cách chiếc ô tô có thể đi được trong thành phố là: " << cityDistance << " dặm" << endl;
    cout << "Khoảng cách chiếc ô tô có thể đi được trên xa lộ là: " << highwayDistance << " dặm" << endl;

    return 0;
}

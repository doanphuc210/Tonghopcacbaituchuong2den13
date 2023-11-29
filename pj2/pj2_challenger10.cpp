#include <iostream>
using namespace std;

int main() {
    int gallonsOfGas = 15;
    int milesDriven = 375;
    double mpg; // Số dặm trên một gallon xăng

    mpg = static_cast<double>(milesDriven) / gallonsOfGas;

    cout << "Số dặm mà chiếc ô tô có thể đi được trên một gallon xăng là: " << mpg << " MPG" << endl;

    return 0;
}

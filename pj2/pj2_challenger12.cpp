#include <iostream>
using namespace std;

int main() {
    double squareFeet = 391876.0;
    double acres;

    acres = squareFeet / 43560.0;

    cout << "Số acre trong miếng đất có diện tích " << squareFeet << " feet vuông là: " << acres << " acre" << endl;

    return 0;
}

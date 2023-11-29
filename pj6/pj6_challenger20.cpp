#include <iostream>
using namespace std;

double calculateProfitOrLoss(int shares, double purchasePrice, double purchaseCommission, double salePrice, double saleCommission) {
    double profit = (shares * salePrice - saleCommission) - (shares * purchasePrice + purchaseCommission);
    return profit;
}

int main() {
    int shares;
    double purchasePrice, purchaseCommission, salePrice, saleCommission;

    cout << "Enter the number of shares: ";
    cin >> shares;
    cout << "Enter the purchase price per share: $";
    cin >> purchasePrice;
    cout << "Enter the purchase commission paid: $";
    cin >> purchaseCommission;
    cout << "Enter the sale price per share: $";
    cin >> salePrice;
    cout << "Enter the sale commission paid: $";
    cin >> saleCommission;

    double profitOrLoss = calculateProfitOrLoss(shares, purchasePrice, purchaseCommission, salePrice, saleCommission);

    if (profitOrLoss > 0) {
        cout << "The sale resulted in a profit of $" << profitOrLoss << endl;
    } else if (profitOrLoss < 0) {
        cout << "The sale resulted in a loss of $" << -profitOrLoss << endl;
    } else {
        cout << "The sale neither resulted in a profit nor a loss." << endl;
    }

    return 0;
}

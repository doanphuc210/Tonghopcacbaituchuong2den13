#include <iostream>
using namespace std;

double calculateProfitOrLoss(int shares, double purchasePrice, double purchaseCommission, double salePrice, double saleCommission) {
    return (shares * salePrice - saleCommission) - (shares * purchasePrice + purchaseCommission);
}

int main() {
    int numSales;
    double totalProfit = 0.0;

    cout << "Enter the number of stock sales: ";
    cin >> numSales;

    for (int sale = 1; sale <= numSales; sale++) {
        int shares;
        double purchasePrice, purchaseCommission, salePrice, saleCommission;

        cout << "Stock Sale #" << sale << endl;
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
        totalProfit += profitOrLoss;

        if (profitOrLoss > 0) {
            cout << "Profit from this sale: $" << profitOrLoss << endl;
        } else if (profitOrLoss < 0) {
            cout << "Loss from this sale: $" << -profitOrLoss << endl;
        } else {
            cout << "No profit or loss from this sale." << endl;
        }
    }

    cout << "Total profit or loss from all stock sales: $" << totalProfit << endl;

    return 0;
}

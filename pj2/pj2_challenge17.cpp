#include <iostream>
using namespace std;

int main() {
    int shares = 750;
    double sharePrice = 35.00;
    double commissionRate = 0.02;  // 2% commission rate

    // Calculate the amount paid for the stock alone (without commission)
    double stockCost = shares * sharePrice;

    // Calculate the commission
    double commission = stockCost * commissionRate;

    // Calculate the total amount paid (stock cost + commission)
    double totalAmountPaid = stockCost + commission;

    cout << "Amount paid for the stock alone: $" << stockCost << endl;
    cout << "Amount of the commission: $" << commission << endl;
    cout << "Total amount paid (for the stock plus the commission): $" << totalAmountPaid << endl;

    return 0;
}

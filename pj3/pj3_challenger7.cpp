#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string movieName;
    int adultTicketsSold, childTicketsSold;
    const double adultTicketPrice = 10.00;
    const double childTicketPrice = 6.00;
    const double distributorSharePercentage = 0.8; // 80% goes to the distributor

    cout << "Enter the movie name: ";
    getline(cin, movieName);

    cout << "Enter the number of adult tickets sold: ";
    cin >> adultTicketsSold;

    cout << "Enter the number of child tickets sold: ";
    cin >> childTicketsSold;

    double grossBoxOfficeProfit = (adultTicketsSold * adultTicketPrice) + (childTicketsSold * childTicketPrice);
    double netBoxOfficeProfit = grossBoxOfficeProfit * distributorSharePercentage;
    double distributorShare = grossBoxOfficeProfit - netBoxOfficeProfit;

    cout << fixed << setprecision(2);
    cout << "Movie Name: \"" << movieName << "\"" << endl;
    cout << "Adult Tickets Sold: " << adultTicketsSold << endl;
    cout << "Child Tickets Sold: " << childTicketsSold << endl;
    cout << "Gross Box Office Profit: $ " << grossBoxOfficeProfit << endl;
    cout << "Net Box Office Profit: $ " << netBoxOfficeProfit << endl;
    cout << "Amount Paid to Distributor: $ " << distributorShare << endl;

    return 0;
}

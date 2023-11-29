#include <iostream>
using namespace std;

int main() {
    const int recipeCookies = 48;
    const double sugarPerCookie = 1.5 / recipeCookies;
    const double butterPerCookie = 1.0 / recipeCookies;
    const double flourPerCookie = 2.75 / recipeCookies;

    int desiredCookies;

    cout << "How many cookies do you want to make? ";
    cin >> desiredCookies;

    double sugarNeeded = sugarPerCookie * desiredCookies;
    double butterNeeded = butterPerCookie * desiredCookies;
    double flourNeeded = flourPerCookie * desiredCookies;

    cout << "For " << desiredCookies << " cookies, you will need:\n";
    cout << sugarNeeded << " cups of sugar\n";
    cout << butterNeeded << " cups of butter\n";
    cout << flourNeeded << " cups of flour\n";

    return 0;
}

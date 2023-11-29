#include <iostream>
using namespace std;

int main() {
    int employeeNumber;
    double grossPay, stateTax, federalTax, ficaWithholdings;
    double totalGrossPay = 0, totalStateTax = 0, totalFederalTax = 0, totalFicaWithholdings = 0;

    do {
        cout << "Enter the employee number (0 to exit): ";
        cin >> employeeNumber;
        if (employeeNumber == 0) {
            break;
        }

        cout << "Enter gross pay: ";
        cin >> grossPay;
        while (grossPay < 0) {
            cout << "Gross pay cannot be negative. Enter gross pay: ";
            cin >> grossPay;
        }

        cout << "Enter state tax: ";
        cin >> stateTax;
        while (stateTax < 0 || stateTax > grossPay) {
            cout << "State tax must be non-negative and less than gross pay. Enter state tax: ";
            cin >> stateTax;
        }

        cout << "Enter federal tax: ";
        cin >> federalTax;
        while (federalTax < 0 || federalTax > grossPay) {
            cout << "Federal tax must be non-negative and less than gross pay. Enter federal tax: ";
            cin >> federalTax;
        }

        cout << "Enter FICA withholdings: ";
        cin >> ficaWithholdings;
        while (ficaWithholdings < 0 || ficaWithholdings > grossPay) {
            cout << "FICA withholdings must be non-negative and less than gross pay. Enter FICA withholdings: ";
            cin >> ficaWithholdings;
        }

        if (stateTax + federalTax + ficaWithholdings > grossPay) {
            cout << "Error: The sum of state tax, federal tax, and FICA withholdings is greater than gross pay.\n";
            continue;
        }

        totalGrossPay += grossPay;
        totalStateTax += stateTax;
        totalFederalTax += federalTax;
        totalFicaWithholdings += ficaWithholdings;

    } while (employeeNumber != 0);

    double totalNetPay = totalGrossPay - totalStateTax - totalFederalTax - totalFicaWithholdings;

    cout << "Weekly Payroll Report\n";
    cout << "----------------------\n";
    cout << "Total Gross Pay: " << totalGrossPay << endl;
    cout << "Total State Tax: " << totalStateTax << endl;
    cout << "Total Federal Tax: " << totalFederalTax << endl;
    cout << "Total FICA Withholdings: " << totalFicaWithholdings << endl;
    cout << "Total Net Pay: " << totalNetPay << endl;

    return 0;
}

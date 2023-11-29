#include <iostream>
#include <cmath>

class MortgageCalculator {
private:
    double loanAmount;
    double annualInterestRate;
    int loanYears;

public:
    MortgageCalculator() : loanAmount(0), annualInterestRate(0), loanYears(0) {}

    void setLoanAmount(double amount) {
        if (amount >= 0) {
            loanAmount = amount;
        } else {
            std::cout << "Invalid loan amount. Please enter a non-negative value.\n";
        }
    }

    void setAnnualInterestRate(double rate) {
        if (rate >= 0) {
            annualInterestRate = rate;
        } else {
            std::cout << "Invalid annual interest rate. Please enter a non-negative value.\n";
        }
    }

    void setLoanYears(int years) {
        if (years >= 0) {
            loanYears = years;
        } else {
            std::cout << "Invalid loan term. Please enter a non-negative value.\n";
        }
    }

    double calculateMonthlyPayment() const {
        if (annualInterestRate == 0) {
            return loanAmount / (loanYears * 12);
        } else {
            double monthlyInterestRate = annualInterestRate / 12 / 100;
            int numberOfPayments = loanYears * 12;
            return loanAmount * monthlyInterestRate /
                   (1 - pow(1 + monthlyInterestRate, -numberOfPayments));
        }
    }

    double calculateTotalAmountPaid() const {
        return calculateMonthlyPayment() * loanYears * 12;
    }
};

int main() {
    MortgageCalculator mortgage;

    // Input loan details
    double loanAmount, annualInterestRate;
    int loanYears;

    std::cout << "Enter the loan amount: $";
    std::cin >> loanAmount;
    mortgage.setLoanAmount(loanAmount);

    std::cout << "Enter the annual interest rate: ";
    std::cin >> annualInterestRate;
    mortgage.setAnnualInterestRate(annualInterestRate);

    std::cout << "Enter the number of years for the loan: ";
    std::cin >> loanYears;
    mortgage.setLoanYears(loanYears);

    // Display results
    std::cout << "\nMonthly Payment: $" << mortgage.calculateMonthlyPayment() << std::endl;
    std::cout << "Total Amount Paid: $" << mortgage.calculateTotalAmountPaid() << std::endl;

    return 0;
}

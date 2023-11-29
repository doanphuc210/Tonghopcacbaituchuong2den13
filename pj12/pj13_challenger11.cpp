#include <iostream>

class PayRoll {
private:
    double hourlyPayRate;
    double hoursWorked;
    double totalPay;

public:
    // Default constructor
    PayRoll() : hourlyPayRate(0.0), hoursWorked(0.0), totalPay(0.0) {}

    // Parameterized constructor
    PayRoll(double payRate, double hours) : hourlyPayRate(payRate), hoursWorked(hours) {
        calculateTotalPay(); // Calculate total pay immediately upon construction
    }

    // Setters
    void setHourlyPayRate(double payRate) {
        hourlyPayRate = payRate;
    }

    void setHoursWorked(double hours) {
        if (hours >= 0.0 && hours <= 60.0) {
            hoursWorked = hours;
            calculateTotalPay(); // Recalculate total pay after setting hours
        } else {
            std::cout << "Invalid hours. Please enter a value between 0 and 60." << std::endl;
        }
    }

    // Getter for total pay
    double getTotalPay() const {
        return totalPay;
    }

private:
    // Calculate total pay (private helper function)
    void calculateTotalPay() {
        totalPay = hourlyPayRate * hoursWorked;
    }
};

int main() {
    const int NUM_EMPLOYEES = 7;
    PayRoll employees[NUM_EMPLOYEES];

    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        double hours;
        std::cout << "Enter the number of hours worked for employee " << (i + 1) << ": ";
        std::cin >> hours;

        employees[i].setHoursWorked(hours);
    }

    std::cout << "\nGross pay for each employee:\n";
    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        std::cout << "Employee " << (i + 1) << ": $" << employees[i].getTotalPay() << std::endl;
    }

    return 0;
}

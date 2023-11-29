#include <iostream>
#include <string>

class Date {
private:
    int month;
    int day;
    int year;

public:
    // Constructors
    Date() : month(1), day(1), year(2000) {}

    Date(int m, int d, int y) {
        setMonth(m);
        setDay(d);
        setYear(y);
    }

    // Mutators (setters)
    void setMonth(int m) {
        if (m >= 1 && m <= 12) {
            month = m;
        } else {
            std::cerr << "Invalid month value. Setting to 1." << std::endl;
            month = 1;
        }
    }

    void setDay(int d) {
        if (d >= 1 && d <= 31) {
            day = d;
        } else {
            std::cerr << "Invalid day value. Setting to 1." << std::endl;
            day = 1;
        }
    }

    void setYear(int y) {
        year = y;
    }

    // Accessors (getters)
    int getMonth() const { return month; }
    int getDay() const { return day; }
    int getYear() const { return year; }

    // Member functions to print the date in different forms
    void print1() const {
        std::cout << month << '/' << day << '/' << year << std::endl;
    }

    void print2() const {
        const std::string monthNames[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        std::cout << monthNames[month] << ' ' << day << ", " << year << std::endl;
    }

    void print3() const {
        const std::string monthNames[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        std::cout << day << ' ' << monthNames[month] << ' ' << year << std::endl;
    }
};

int main() {
    int m, d, y;

    std::cout << "Enter month (1-12): ";
    std::cin >> m;

    std::cout << "Enter day (1-31): ";
    std::cin >> d;

    std::cout << "Enter year: ";
    std::cin >> y;

    Date myDate(m, d, y);

    std::cout << "Date in format 1: ";
    myDate.print1();

    std::cout << "Date in format 2: ";
    myDate.print2();

    std::cout << "Date in format 3: ";
    myDate.print3();

    return 0;
}

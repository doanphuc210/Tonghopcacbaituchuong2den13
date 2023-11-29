#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int idNumber;
    std::string department;
    std::string position;

public:
    // Constructors
    Employee(std::string empName, int empID, std::string empDept, std::string empPosition)
        : name(empName), idNumber(empID), department(empDept), position(empPosition) {}

    Employee(std::string empName, int empID)
        : name(empName), idNumber(empID), department(""), position("") {}

    Employee()
        : name(""), idNumber(0), department(""), position("") {}

    // Mutators (setters)
    void setName(std::string empName) {
        name = empName;
    }

    void setIdNumber(int empID) {
        idNumber = empID;
    }

    void setDepartment(std::string empDept) {
        department = empDept;
    }

    void setPosition(std::string empPosition) {
        position = empPosition;
    }

    // Accessors (getters)
    std::string getName() const {
        return name;
    }

    int getIdNumber() const {
        return idNumber;
    }

    std::string getDepartment() const {
        return department;
    }

    std::string getPosition() const {
        return position;
    }
};

int main() {
    // Create Employee objects with the given data
    Employee employee1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee employee2("Mark Jones", 39119, "IT", "Programmer");
    Employee employee3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    // Display employee data
    std::cout << "Employee 1:" << std::endl;
    std::cout << "Name: " << employee1.getName() << std::endl;
    std::cout << "ID Number: " << employee1.getIdNumber() << std::endl;
    std::cout << "Department: " << employee1.getDepartment() << std::endl;
    std::cout << "Position: " << employee1.getPosition() << std::endl << std::endl;

    std::cout << "Employee 2:" << std::endl;
    std::cout << "Name: " << employee2.getName() << std::endl;
    std::cout << "ID Number: " << employee2.getIdNumber() << std::endl;
    std::cout << "Department: " << employee2.getDepartment() << std::endl;
    std::cout << "Position: " << employee2.getPosition() << std::endl << std::endl;

    std::cout << "Employee 3:" << std::endl;
    std::cout << "Name: " << employee3.getName() << std::endl;
    std::cout << "ID Number: " << employee3.getIdNumber() << std::endl;
    std::cout << "Department: " << employee3.getDepartment() << std::endl;
    std::cout << "Position: " << employee3.getPosition() << std::endl;

    return 0;
}

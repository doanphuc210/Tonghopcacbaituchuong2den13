#include <iostream>
#include <string>

class PersonalData {
private:
    std::string name;
    std::string address;
    int age;
    std::string phoneNumber;

public:
    // Constructors
    PersonalData() : name(""), address(""), age(0), phoneNumber("") {}
    
    PersonalData(std::string newName, std::string newAddress, int newAge, std::string newPhoneNumber)
        : name(newName), address(newAddress), age(newAge), phoneNumber(newPhoneNumber) {}

    // Accessor functions
    std::string getName() const {
        return name;
    }

    std::string getAddress() const {
        return address;
    }

    int getAge() const {
        return age;
    }

    std::string getPhoneNumber() const {
        return phoneNumber;
    }

    // Mutator functions
    void setName(std::string newName) {
        name = newName;
    }

    void setAddress(std::string newAddress) {
        address = newAddress;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setPhoneNumber(std::string newPhoneNumber) {
        phoneNumber = newPhoneNumber;
    }
};

int main() {
    // Create instances of the PersonalData class
    PersonalData myInfo("Your Name", "Your Address", 25, "Your Phone Number");
    PersonalData friend1("Friend1 Name", "Friend1 Address", 30, "Friend1 Phone Number");
    PersonalData friend2("Friend2 Name", "Friend2 Address", 28, "Friend2 Phone Number");

    // Display information
    std::cout << "Your Information:\n";
    std::cout << "Name: " << myInfo.getName() << "\nAddress: " << myInfo.getAddress()
              << "\nAge: " << myInfo.getAge() << "\nPhone Number: " << myInfo.getPhoneNumber() << "\n\n";

    std::cout << "Friend 1 Information:\n";
    std::cout << "Name: " << friend1.getName() << "\nAddress: " << friend1.getAddress()
              << "\nAge: " << friend1.getAge() << "\nPhone Number: " << friend1.getPhoneNumber() << "\n\n";

    std::cout << "Friend 2 Information:\n";
    std::cout << "Name: " << friend2.getName() << "\nAddress: " << friend2.getAddress()
              << "\nAge: " << friend2.getAge() << "\nPhone Number: " << friend2.getPhoneNumber() << "\n";

    return 0;
}

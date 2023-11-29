#include <iostream>
#include <string>

class Temperature {
private:
    double temperature;

public:
    Temperature() : temperature(0.0) {}

    void setTemperature(double temp) {
        temperature = temp;
    }

    bool isEthylFreezing() const {
        return temperature <= -173;
    }

    bool isEthylBoiling() const {
        return temperature >= 172;
    }

    bool isOxygenFreezing() const {
        return temperature <= -362;
    }

    bool isOxygenBoiling() const {
        return temperature >= -306;
    }

    bool isWaterFreezing() const {
        return temperature <= 32;
    }

    bool isWaterBoiling() const {
        return temperature >= 212;
    }
};

int main() {
    Temperature tempObj;

    double userTemperature;
    std::cout << "Enter a temperature: ";
    std::cin >> userTemperature;

    tempObj.setTemperature(userTemperature);

    std::cout << "\nSubstances affected at " << userTemperature << " degrees:\n";

    if (tempObj.isEthylFreezing()) {
        std::cout << "Ethyl Alcohol will freeze.\n";
    }
    if (tempObj.isEthylBoiling()) {
        std::cout << "Ethyl Alcohol will boil.\n";
    }

    if (tempObj.isOxygenFreezing()) {
        std::cout << "Oxygen will freeze.\n";
    }
    if (tempObj.isOxygenBoiling()) {
        std::cout << "Oxygen will boil.\n";
    }

    if (tempObj.isWaterFreezing()) {
        std::cout << "Water will freeze.\n";
    }
    if (tempObj.isWaterBoiling()) {
        std::cout << "Water will boil.\n";
    }

    return 0;
}

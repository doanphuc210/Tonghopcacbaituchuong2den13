#include <iostream>
#include <iomanip>

class Population {
private:
    int population;
    int numBirths;
    int numDeaths;

public:
    // Default Constructor
    Population() : population(1), numBirths(0), numDeaths(0) {}

    // Parameterized Constructor
    Population(int pop, int births, int deaths)
        : population((pop >= 1) ? pop : 1),
          numBirths((births >= 0) ? births : 0),
          numDeaths((deaths >= 0) ? deaths : 0) {}

    // Calculate and return the birth rate
    double getBirthRate() const {
        return static_cast<double>(numBirths) / population;
    }

    // Calculate and return the death rate
    double getDeathRate() const {
        return static_cast<double>(numDeaths) / population;
    }

    // Display population information
    void displayInfo() const {
        std::cout << "Population: " << population << std::endl;
        std::cout << "Number of Births: " << numBirths << std::endl;
        std::cout << "Number of Deaths: " << numDeaths << std::endl;
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Birth Rate: " << getBirthRate() << std::endl;
        std::cout << "Death Rate: " << getDeathRate() << std::endl;
    }
};

int main() {
    int userPopulation, userBirths, userDeaths;

    // Get population, number of births, and number of deaths from the user
    std::cout << "Enter the population: ";
    std::cin >> userPopulation;

    std::cout << "Enter the number of births: ";
    std::cin >> userBirths;

    std::cout << "Enter the number of deaths: ";
    std::cin >> userDeaths;

    // Create a Population object
    Population myPopulation(userPopulation, userBirths, userDeaths);

    // Display information about the population
    myPopulation.displayInfo();

    return 0;
}

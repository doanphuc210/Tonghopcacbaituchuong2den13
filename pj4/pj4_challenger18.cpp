#include <iostream>
using namespace std;

int main() {
    double totalCalories, fatGrams, caloriesFromFat, percentageCaloriesFromFat;

    // Ask for the number of calories and fat grams
    cout << "Enter the number of calories in the food: ";
    cin >> totalCalories;
    cout << "Enter the number of fat grams in the food: ";
    cin >> fatGrams;

    // Input validation
    if (totalCalories < 0 || fatGrams < 0 || caloriesFromFat > totalCalories) {
        cout << "Error: Invalid input. Calories and fat grams must be non-negative, and calories from fat cannot exceed total calories." << endl;
        return 1;
    }

    // Calculate calories from fat
    caloriesFromFat = fatGrams * 9;

    // Calculate the percentage of calories from fat
    percentageCaloriesFromFat = (caloriesFromFat / totalCalories) * 100;

    // Display the results
    cout << "Calories from fat: " << caloriesFromFat << " calories" << endl;
    cout << "Percentage of calories from fat: " << percentageCaloriesFromFat << "%" << endl;

    // Check if the food is low in fat
    if (percentageCaloriesFromFat < 30) {
        cout << "This food is low in fat." << endl;
    }

    return 0;
}

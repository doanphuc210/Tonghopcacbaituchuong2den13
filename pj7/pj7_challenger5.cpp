#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_MONKEYS = 3;
const int NUM_DAYS = 5;

int main() {
    double foodData[NUM_MONKEYS][NUM_DAYS];
    
    // Input the amount of food eaten by each monkey for each day
    for (int monkey = 0; monkey < NUM_MONKEYS; monkey++) {
        for (int day = 0; day < NUM_DAYS; day++) {
            do {
                cout << "Enter the pounds of food eaten by monkey " << monkey + 1;
                cout << " on day " << day + 1 << ": ";
                cin >> foodData[monkey][day];
                if (foodData[monkey][day] < 0) {
                    cout << "Please enter a non-negative amount of food." << endl;
                }
            } while (foodData[monkey][day] < 0);
        }
    }
    
    // Calculate and display the average amount of food eaten per day by all monkeys
    double totalFood = 0;
    for (int monkey = 0; monkey < NUM_MONKEYS; monkey++) {
        for (int day = 0; day < NUM_DAYS; day++) {
            totalFood += foodData[monkey][day];
        }
    }
    double averageFood = totalFood / (NUM_MONKEYS * NUM_DAYS);
    
    // Calculate and display the least and greatest amount of food eaten
    double minFood = foodData[0][0];
    double maxFood = foodData[0][0];
    
    for (int monkey = 0; monkey < NUM_MONKEYS; monkey++) {
        for (int day = 0; day < NUM_DAYS; day++) {
            if (foodData[monkey][day] < minFood) {
                minFood = foodData[monkey][day];
            }
            if (foodData[monkey][day] > maxFood) {
                maxFood = foodData[monkey][day];
            }
        }
    }
    
    // Display the results
    cout << fixed << setprecision(2);
    cout << "Average amount of food eaten per day by all monkeys: " << averageFood << " pounds" << endl;
    cout << "Least amount of food eaten during the week by any one monkey: " << minFood << " pounds" << endl;
    cout << "Greatest amount of food eaten during the week by any one monkey: " << maxFood << " pounds" << endl;
    
    return 0;
}

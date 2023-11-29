#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Define the structure for drink data
struct DrinkData
{
    string name;
    double cost;
    int quantity;
};

// Function prototypes
void displayMenu(const DrinkData* drinks, int numDrinks);
double getAmount();
void processSelection(DrinkData* drinks, int selection, double moneyInserted);
double calculateChange(double moneyInserted, double drinkCost);

int main()
{
    // Initialize array of structures with drink data
    DrinkData drinks[] = {
        {"Cola", 0.75, 20},
        {"Root Beer", 0.75, 20},
        {"Lemon-Lime", 0.75, 20},
        {"Grape Soda", 0.80, 20},
        {"Cream Soda", 0.80, 20}
    };

    const int numDrinks = sizeof(drinks) / sizeof(drinks[0]);
    double totalEarnings = 0.0;

    while (true)
    {
        // Display menu and get user selection
        displayMenu(drinks, numDrinks);
        int choice;
        cout << "Enter your choice (1-" << numDrinks << ") or 0 to quit: ";
        cin >> choice;

        // Check if the user wants to quit
        if (choice == 0)
        {
            break;
        }

        // Validate the user's choice
        if (choice < 1 || choice > numDrinks)
        {
            cout << "Invalid choice. Please try again.\n";
            continue;
        }

        // Get the amount of money to insert
        double moneyInserted = getAmount();

        // Process the user's selection
        processSelection(drinks, choice - 1, moneyInserted);

        // Update total earnings
        totalEarnings += drinks[choice - 1].cost;
    }

    // Display total earnings
    cout << fixed << setprecision(2);
    cout << "\nTotal earnings: $" << totalEarnings << endl;

    return 0;
}

void displayMenu(const DrinkData* drinks, int numDrinks)
{
    cout << "\nSoft Drink Machine Menu:\n";
    cout << setw(5) << "Choice" << setw(20) << "Drink Name" << setw(10) << "Cost" << setw(10) << "Quantity\n";
    cout << "--------------------------------------------\n";

    for (int i = 0; i < numDrinks; ++i)
    {
        cout << setw(5) << i + 1 << setw(20) << drinks[i].name << setw(10) << "$" << drinks[i].cost
             << setw(10) << drinks[i].quantity << endl;
    }
}

double getAmount()
{
    double amount;
    do
    {
        cout << "Enter the amount of money to insert (up to $1.00): $";
        cin >> amount;

        if (amount < 0.0 || amount > 1.0)
        {
            cout << "Invalid amount. Please enter a non-negative amount up to $1.00.\n";
        }

    } while (amount < 0.0 || amount > 1.0);

    return amount;
}

void processSelection(DrinkData* drinks, int selection, double moneyInserted)
{
    // Check if the selected drink is available
    if (drinks[selection].quantity > 0)
    {
        double drinkCost = drinks[selection].cost;
        // Check if the user has inserted enough money
        if (moneyInserted >= drinkCost)
        {
            double change = calculateChange(moneyInserted, drinkCost);
            cout << "Dispensing " << drinks[selection].name << ". Change: $" << change << endl;
            drinks[selection].quantity--;
        }
        else
        {
            cout << "Insufficient funds. Please insert more money.\n";
        }
    }
    else
    {
        cout << "Sorry, " << drinks[selection].name << " is sold out.\n";
    }
}

double calculateChange(double moneyInserted, double drinkCost)
{
    return moneyInserted - drinkCost;
}

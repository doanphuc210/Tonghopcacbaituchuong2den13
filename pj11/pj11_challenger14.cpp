#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Define the structure for bin data
struct Bin
{
    string description;
    int numParts;
};

// Function prototypes
void displayBins(const Bin* bins, int numBins);
void addParts(Bin* bins, int binIndex, int numToAdd);
void removeParts(Bin* bins, int binIndex, int numToRemove);

int main()
{
    // Initialize array of structures with bin data
    Bin bins[] = {
        {"Valve", 10},
        {"Bearing", 5},
        {"Bushing", 15},
        {"Coupling", 21},
        {"Flange", 7},
        {"Gear", 5},
        {"Gear Housing", 5},
        {"Vacuum Gripper", 25},
        {"Cable", 18},
        {"Rod", 12}
    };

    const int numBins = sizeof(bins) / sizeof(bins[0]);

    while (true)
    {
        // Display bin data
        displayBins(bins, numBins);

        // Prompt user for action
        cout << "Enter the number of the bin to select (1-" << numBins << ") or 0 to quit: ";
        int choice;
        cin >> choice;

        // Check if the user wants to quit
        if (choice == 0)
        {
            break;
        }

        // Validate the user's choice
        if (choice < 1 || choice > numBins)
        {
            cout << "Invalid choice. Please try again.\n";
            continue;
        }

        // Display selected bin details
        int binIndex = choice - 1;
        cout << "Selected bin: " << bins[binIndex].description << " ("
             << bins[binIndex].numParts << " parts)\n";

        // Prompt user for action on the selected bin
        cout << "Enter 1 to add parts, 2 to remove parts, or 0 to go back: ";
        cin >> choice;

        switch (choice)
        {
            case 0:
                // Go back to bin selection
                break;
            case 1:
                // Add parts
                {
                    int numToAdd;
                    cout << "Enter the number of parts to add: ";
                    cin >> numToAdd;
                    addParts(bins, binIndex, numToAdd);
                }
                break;
            case 2:
                // Remove parts
                {
                    int numToRemove;
                    cout << "Enter the number of parts to remove: ";
                    cin >> numToRemove;
                    removeParts(bins, binIndex, numToRemove);
                }
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

void displayBins(const Bin* bins, int numBins)
{
    cout << "\nInventory Bins:\n";
    cout << setw(5) << "Bin # " << setw(20) << "Description" << setw(10) << "Parts\n";
    cout << "------------------------------------\n";

    for (int i = 0; i < numBins; ++i)
    {
        cout << setw(5) << i + 1 << setw(20) << bins[i].description << setw(10) << bins[i].numParts << endl;
    }
}

void addParts(Bin* bins, int binIndex, int numToAdd)
{
    // Validate input
    if (numToAdd <= 0 || bins[binIndex].numParts + numToAdd > 30)
    {
        cout << "Invalid input. Parts not added.\n";
        return;
    }

    // Add parts to the selected bin
    bins[binIndex].numParts += numToAdd;
    cout << "Added " << numToAdd << " parts to the bin.\n";
}

void removeParts(Bin* bins, int binIndex, int numToRemove)
{
    // Validate input
    if (numToRemove <= 0 || numToRemove > bins[binIndex].numParts)
    {
        cout << "Invalid input. Parts not removed.\n";
        return;
    }

    // Remove parts from the selected bin
    bins[binIndex].numParts -= numToRemove;
    cout << "Removed " << numToRemove << " parts from the bin.\n";
}

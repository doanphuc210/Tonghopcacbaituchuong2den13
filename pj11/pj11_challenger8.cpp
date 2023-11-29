#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Define the structure for customer account data
struct CustomerAccount
{
    string name;
    string address;
    string cityStateZIP;
    string telephoneNumber;
    double accountBalance;
    string dateLastPayment;
};

const int MAX_ACCOUNTS = 10;

// Function prototypes
void displayMenu();
void addAccount(CustomerAccount accounts[], int &numAccounts);
void modifyAccount(CustomerAccount accounts[], int numAccounts);
void displayAllAccounts(const CustomerAccount accounts[], int numAccounts);
void searchByName(const CustomerAccount accounts[], int numAccounts, const string &searchName);

int main()
{
    CustomerAccount accounts[MAX_ACCOUNTS];
    int numAccounts = 0;
    char choice;

    do
    {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Consume the newline character left in the buffer

        switch (choice)
        {
        case '1':
            addAccount(accounts, numAccounts);
            break;
        case '2':
            modifyAccount(accounts, numAccounts);
            break;
        case '3':
            displayAllAccounts(accounts, numAccounts);
            break;
        case '4':
            cout << "Enter part of the customer's name to search: ";
            string searchName;
            getline(cin, searchName);
            searchByName(accounts, numAccounts, searchName);
            break;
        case '5':
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != '5');

    return 0;
}

// Other functions remain unchanged

void searchByName(const CustomerAccount accounts[], int numAccounts, const string &searchName)
{
    bool found = false;

    cout << "\nSearch Results:\n";
    cout << "-----------------------------------\n";
    cout << setw(4) << "ID" << setw(20) << "Name" << setw(20) << "City, State, ZIP" << setw(15) << "Phone Number"
         << setw(15) << "Balance" << setw(20) << "Last Payment Date" << endl;
    cout << "-----------------------------------\n";

    for (int i = 0; i < numAccounts; ++i)
    {
        // Case-insensitive search
        size_t foundPos = accounts[i].name.find(searchName, 0, searchName.length());
        if (foundPos != string::npos)
        {
            found = true;
            cout << setw(4) << i + 1 << setw(20) << accounts[i].name << setw(20) << accounts[i].cityStateZIP << setw(15)
                 << accounts[i].telephoneNumber << setw(15) << fixed << setprecision(2) << accounts[i].accountBalance
                 << setw(20) << accounts[i].dateLastPayment << endl;
        }
    }

    if (!found)
    {
        cout << "No matching accounts found.\n";
    }
}

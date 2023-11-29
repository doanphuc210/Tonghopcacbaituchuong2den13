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
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != '4');

    return 0;
}

void displayMenu()
{
    cout << "\nCustomer Account Management System\n";
    cout << "-----------------------------------\n";
    cout << "1. Add New Account\n";
    cout << "2. Modify Account\n";
    cout << "3. Display All Accounts\n";
    cout << "4. Exit\n";
}

void addAccount(CustomerAccount accounts[], int &numAccounts)
{
    if (numAccounts < MAX_ACCOUNTS)
    {
        cout << "Enter customer account details:\n";

        cout << "Name: ";
        getline(cin, accounts[numAccounts].name);

        cout << "Address: ";
        getline(cin, accounts[numAccounts].address);

        cout << "City, State, and ZIP: ";
        getline(cin, accounts[numAccounts].cityStateZIP);

        cout << "Telephone Number: ";
        getline(cin, accounts[numAccounts].telephoneNumber);

        do
        {
            cout << "Account Balance: $";
            cin >> accounts[numAccounts].accountBalance;

            if (accounts[numAccounts].accountBalance < 0)
            {
                cout << "Invalid account balance. Please enter a non-negative value.\n";
            }
        } while (accounts[numAccounts].accountBalance < 0);

        cout << "Date of Last Payment: ";
        cin.ignore(); // Consume the newline character left in the buffer
        getline(cin, accounts[numAccounts].dateLastPayment);

        cout << "Account added successfully.\n";
        numAccounts++;
    }
    else
    {
        cout << "Maximum number of accounts reached.\n";
    }
}

void modifyAccount(CustomerAccount accounts[], int numAccounts)
{
    if (numAccounts > 0)
    {
        int accountIndex;
        cout << "Enter the account number to modify (1-" << numAccounts << "): ";
        cin >> accountIndex;

        if (accountIndex >= 1 && accountIndex <= numAccounts)
        {
            cout << "Enter new customer account details:\n";

            cout << "Name: ";
            cin.ignore(); // Consume the newline character left in the buffer
            getline(cin, accounts[accountIndex - 1].name);

            cout << "Address: ";
            getline(cin, accounts[accountIndex - 1].address);

            cout << "City, State, and ZIP: ";
            getline(cin, accounts[accountIndex - 1].cityStateZIP);

            cout << "Telephone Number: ";
            getline(cin, accounts[accountIndex - 1].telephoneNumber);

            do
            {
                cout << "Account Balance: $";
                cin >> accounts[accountIndex - 1].accountBalance;

                if (accounts[accountIndex - 1].accountBalance < 0)
                {
                    cout << "Invalid account balance. Please enter a non-negative value.\n";
                }
            } while (accounts[accountIndex - 1].accountBalance < 0);

            cout << "Date of Last Payment: ";
            cin.ignore(); // Consume the newline character left in the buffer
            getline(cin, accounts[accountIndex - 1].dateLastPayment);

            cout << "Account modified successfully.\n";
        }
        else
        {
            cout << "Invalid account number. Please enter a valid account number.\n";
        }
    }
    else
    {
        cout << "No accounts to modify. Add an account first.\n";
    }
}

void displayAllAccounts(const CustomerAccount accounts[], int numAccounts)
{
    if (numAccounts > 0)
    {
        cout << "\nAll Customer Accounts:\n";
        cout << "-----------------------------------\n";
        cout << setw(4) << "ID" << setw(20) << "Name" << setw(20) << "City, State, ZIP" << setw(15) << "Phone Number"
             << setw(15) << "Balance" << setw(20) << "Last Payment Date" << endl;
        cout << "-----------------------------------\n";


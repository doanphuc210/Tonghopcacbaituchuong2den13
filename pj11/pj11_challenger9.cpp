#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Define the structure for speaker data
struct Speaker
{
    string name;
    string telephoneNumber;
    string speakingTopic;
    double feeRequired;
};

const int MAX_SPEAKERS = 10;

// Function prototypes
void displayMenu();
void addSpeaker(Speaker speakers[], int &numSpeakers);
void modifySpeaker(Speaker speakers[], int numSpeakers);
void displayAllSpeakers(const Speaker speakers[], int numSpeakers);

int main()
{
    Speaker speakers[MAX_SPEAKERS];
    int numSpeakers = 0;
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
            addSpeaker(speakers, numSpeakers);
            break;
        case '2':
            modifySpeaker(speakers, numSpeakers);
            break;
        case '3':
            displayAllSpeakers(speakers, numSpeakers);
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
    cout << "\nSpeakers' Bureau Menu:\n";
    cout << "1. Add a Speaker\n";
    cout << "2. Modify Speaker Information\n";
    cout << "3. Display All Speakers\n";
    cout << "4. Exit\n";
}

void addSpeaker(Speaker speakers[], int &numSpeakers)
{
    if (numSpeakers < MAX_SPEAKERS)
    {
        cout << "Enter speaker information:\n";
        cout << "Name: ";
        getline(cin, speakers[numSpeakers].name);

        cout << "Telephone Number: ";
        getline(cin, speakers[numSpeakers].telephoneNumber);

        cout << "Speaking Topic: ";
        getline(cin, speakers[numSpeakers].speakingTopic);

        cout << "Fee Required: $";
        cin >> speakers[numSpeakers].feeRequired;

        cin.ignore(); // Consume the newline character left in the buffer
        numSpeakers++;
        cout << "Speaker added successfully.\n";
    }
    else
    {
        cout << "Speaker database is full. Cannot add more speakers.\n";
    }
}

void modifySpeaker(Speaker speakers[], int numSpeakers)
{
    if (numSpeakers > 0)
    {
        cout << "Enter the index of the speaker to modify (1 to " << numSpeakers << "): ";
        int index;
        cin >> index;

        if (index >= 1 && index <= numSpeakers)
        {
            cout << "Enter updated speaker information:\n";
            cin.ignore(); // Consume the newline character left in the buffer

            cout << "Name: ";
            getline(cin, speakers[index - 1].name);

            cout << "Telephone Number: ";
            getline(cin, speakers[index - 1].telephoneNumber);

            cout << "Speaking Topic: ";
            getline(cin, speakers[index - 1].speakingTopic);

            cout << "Fee Required: $";
            cin >> speakers[index - 1].feeRequired;

            cout << "Speaker information updated successfully.\n";
        }
        else
        {
            cout << "Invalid index. Please enter a valid index.\n";
        }
    }
    else
    {
        cout << "No speakers available to modify.\n";
    }
}

void displayAllSpeakers(const Speaker speakers[], int numSpeakers)
{
    if (numSpeakers > 0)
    {
        cout << "\nSpeakers' Information:\n";
        cout << "---------------------------------------------------------\n";
        cout << setw(4) << "ID" << setw(20) << "Name" << setw(20) << "Telephone Number"
             << setw(30) << "Speaking Topic" << setw(15) << "Fee Required" << endl;
        cout << "---------------------------------------------------------\n";

        for (int i = 0; i < numSpeakers; ++i)
        {
            cout << setw(4) << i + 1 << setw(20) << speakers[i].name << setw(20) << speakers[i].telephoneNumber
                 << setw(30) << speakers[i].speakingTopic << setw(15) << fixed << setprecision(2) << speakers[i].feeRequired << endl;
        }
    }
    else
    {
        cout << "No speakers available to display.\n";
    }
}

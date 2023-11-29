#include <iostream>
#include <string>
using namespace std;

// Define the structure for soccer player data
struct SoccerPlayer
{
    string playerName;
    int playerNumber;
    int pointsScored;
};

int main()
{
    const int numPlayers = 12;
    SoccerPlayer team[numPlayers];

    // Input data for each soccer player
    for (int i = 0; i < numPlayers; ++i)
    {
        cout << "Enter data for Player " << i + 1 << ":\n";

        // Input player's name
        cout << "Player's Name: ";
        getline(cin, team[i].playerName);

        // Input player's number
        do
        {
            cout << "Player's Number: ";
            cin >> team[i].playerNumber;

            if (team[i].playerNumber < 0)
            {
                cout << "Invalid player number. Please enter a non-negative value.\n";
            }
        } while (team[i].playerNumber < 0);

        // Input points scored by the player
        do
        {
            cout << "Points Scored: ";
            cin >> team[i].pointsScored;

            if (team[i].pointsScored < 0)
            {
                cout << "Invalid points scored. Please enter a non-negative value.\n";
            }
        } while (team[i].pointsScored < 0);

        // Consume the newline character left in the buffer
        cin.ignore();
    }

    // Display the table of player data
    cout << "\nPlayer Data Table:\n";
    cout << "------------------------------------------------------\n";
    cout << "Number | Name                 | Points Scored\n";
    cout << "------------------------------------------------------\n";

    int totalPoints = 0;
    int maxPointsIndex = 0;

    for (int i = 0; i < numPlayers; ++i)
    {
        cout << setw(6) << team[i].playerNumber << " | ";
        cout << setw(20) << team[i].playerName << " | ";
        cout << setw(13) << team[i].pointsScored << endl;

        totalPoints += team[i].pointsScored;

        // Check for the player with the most points
        if (team[i].pointsScored > team[maxPointsIndex].pointsScored)
        {
            maxPointsIndex = i;
        }
    }

    cout << "------------------------------------------------------\n";
    cout << "Total Points: " << totalPoints << endl;
    cout << "Player with the Most Points: " << team[maxPointsIndex].playerName << " (Player " << team[maxPointsIndex].playerNumber << ")\n";

    return 0;
}

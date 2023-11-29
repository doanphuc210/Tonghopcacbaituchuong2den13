#include <iostream>
#include <string>
using namespace std;

int main() {
    string planets[] = { "Mercury", "Venus", "Earth", "Mars",
        "Jupiter", "Saturn", "Uranus",
        "Neptune", "Pluto (a dwarf planet)" };

    cout << "Here are the planets:\n";

    // Display the values in the array using a range-based for loop.
    for (string val : planets)
        cout << val << endl;

    return 0;
}
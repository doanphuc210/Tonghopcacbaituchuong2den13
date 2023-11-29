#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, city, college, profession, animal, petName;
    int age;

    // Gather user input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();  // Clear the newline character left in the buffer

    cout << "Enter a city name: ";
    getline(cin, city);

    cout << "Enter a college name: ";
    getline(cin, college);

    cout << "Enter a profession: ";
    getline(cin, profession);

    cout << "Enter a type of animal: ";
    getline(cin, animal);

    cout << "Enter a pet's name: ";
    getline(cin, petName);

    // Display the story with user-provided input
    cout << "There once was a person named " << name << " who lived in " << city << ". ";
    cout << "At the age of " << age << ", " << name << " went to college at " << college << ". ";
    cout << name << " graduated and went to work as a " << profession << ". ";
    cout << "Then, " << name << " adopted a(n) " << animal << " named " << petName << ". ";
    cout << "They both lived happily ever after!" << endl;

    return 0;
}

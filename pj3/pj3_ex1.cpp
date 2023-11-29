#include <iostream>
using namespace std;

int main() {
    int length, width, area;

    cout << "This program calculates the area of a rectangle.\n";
    cout << "What is the length of the rectangle? ";
    cin >> length;  // Input the length
    cout << "What is the width of the rectangle? ";
    cin >> width;   // Input the width
    area = length * width;  // Calculate the area
    cout << "The area of the rectangle is " << area << ".\n";  // Display the result

    return 0;
}

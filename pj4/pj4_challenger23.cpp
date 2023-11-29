#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159;

int main() {
    int choice;
    
    do {
        cout << "Geometry Calculator" << endl;
        cout << "1. Calculate the Area of a Circle" << endl;
        cout << "2. Calculate the Area of a Rectangle" << endl;
        cout << "3. Calculate the Area of a Triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                {
                    double radius;
                    cout << "Enter the radius of the circle: ";
                    cin >> radius;
                    if (radius < 0) {
                        cout << "Invalid input. Radius cannot be negative." << endl;
                    } else {
                        double area = PI * radius * radius;
                        cout << "The area of the circle is: " << fixed << setprecision(2) << area << endl;
                    }
                    break;
                }
            case 2:
                {
                    double length, width;
                    cout << "Enter the length of the rectangle: ";
                    cin >> length;
                    cout << "Enter the width of the rectangle: ";
                    cin >> width;
                    if (length < 0 || width < 0) {
                        cout << "Invalid input. Length and width cannot be negative." << endl;
                    } else {
                        double area = length * width;
                        cout << "The area of the rectangle is: " << fixed << setprecision(2) << area << endl;
                    }
                    break;
                }
            case 3:
                {
                    double base, height;
                    cout << "Enter the base of the triangle: ";
                    cin >> base;
                    cout << "Enter the height of the triangle: ";
                    cin >> height;
                    if (base < 0 || height < 0) {
                        cout << "Invalid input. Base and height cannot be negative." << endl;
                    } else {
                        double area = 0.5 * base * height;
                        cout << "The area of the triangle is: " << fixed << setprecision(2) << area << endl;
                    }
                    break;
                }
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    } while (choice != 4);

    return 0;
}

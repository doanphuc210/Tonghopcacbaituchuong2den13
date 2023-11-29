#include <iostream>

class Rectangle {
private:
    double width;
    double length;

public:
    // Constructors
    Rectangle() : width(0.0), length(0.0) {}

    // Mutators (setters)
    void setWidth(double w) { width = w; }
    void setLength(double len) { length = len; }

    // Accessors (getters)
    double getWidth() const { return width; }
    double getLength() const { return length; }

    // Other member functions
    double getArea() const { return width * length; }
};

int main() {
    Rectangle box; // Define an instance of the Rectangle class
    double rectWidth; // Local variable for width
    double rectLength; // Local variable for length

    // Get the rectangle's width and length from the user.
    std::cout << "This program will calculate the area of a\n";
    std::cout << "rectangle. What is the width? ";
    std::cin >> rectWidth;
    std::cout << "What is the length? ";
    std::cin >> rectLength;

    // Store the width and length of the rectangle in the box object.
    box.setWidth(rectWidth);
    box.setLength(rectLength);

    // Display the rectangle's data.
    std::cout << "Here is the rectangle's data:\n";
    std::cout << "Width: " << box.getWidth() << std::endl;
    std::cout << "Length: " << box.getLength() << std::endl;
    std::cout << "Area: " << box.getArea() << std::endl;

    return 0;
}

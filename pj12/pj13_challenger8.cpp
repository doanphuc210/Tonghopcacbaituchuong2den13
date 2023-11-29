#include <iostream>

class Circle {
private:
    double radius;
    const double pi = 3.14159;

public:
    // Default Constructor
    Circle() : radius(0.0) {}

    // Constructor
    Circle(double r) : radius((r >= 0.0) ? r : 0.0) {}

    // Mutator function for radius
    void setRadius(double r) {
        radius = (r >= 0.0) ? r : 0.0;
    }

    // Accessor function for radius
    double getRadius() const {
        return radius;
    }

    // Calculate and return the area of the circle
    double getArea() const {
        return pi * radius * radius;
    }

    // Calculate and return the diameter of the circle
    double getDiameter() const {
        return radius * 2;
    }

    // Calculate and return the circumference of the circle
    double getCircumference() const {
        return 2 * pi * radius;
    }
};

int main() {
    double userRadius;

    // Get the radius from the user
    std::cout << "Enter the radius of the circle: ";
    std::cin >> userRadius;

    // Create a Circle object
    Circle myCircle(userRadius);

    // Display information about the circle
    std::cout << "Circle Information:" << std::endl;
    std::cout << "Radius: " << myCircle.getRadius() << std::endl;
    std::cout << "Area: " << myCircle.getArea() << std::endl;
    std::cout << "Diameter: " << myCircle.getDiameter() << std::endl;
    std::cout << "Circumference: " << myCircle.getCircumference() << std::endl;

    return 0;
}

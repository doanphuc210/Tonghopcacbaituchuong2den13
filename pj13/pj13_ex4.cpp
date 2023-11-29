#include <iostream>
#include <memory>

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
    double number; // To hold a number
    double totalArea; // The total area

    // Dynamically allocate the objects using smart pointers.
    std::unique_ptr<Rectangle> kitchen = std::make_unique<Rectangle>();
    std::unique_ptr<Rectangle> bedroom = std::make_unique<Rectangle>();
    std::unique_ptr<Rectangle> den = std::make_unique<Rectangle>();

    // Get the kitchen dimensions.
    std::cout << "What is the kitchen's length? ";
    std::cin >> number;
    kitchen->setLength(number);
    std::cout << "What is the kitchen's width? ";
    std::cin >> number;
    kitchen->setWidth(number);

    // Get the bedroom dimensions.
    std::cout << "What is the bedroom's length? ";
    std::cin >> number;
    bedroom->setLength(number);
    std::cout << "What is the bedroom's width? ";
    std::cin >> number;
    bedroom->setWidth(number);

    // Get the den dimensions.
    std::cout << "What is the den's length? ";
    std::cin >> number;
    den->setLength(number);
    std::cout << "What is the den's width? ";
    std::cin >> number;
    den->setWidth(number);

    // Calculate the total area of the three rooms.
    totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();

    // Display the total area of the three rooms.
    std::cout << "The total area of the three rooms is " << totalArea << std::endl;

    // No need to manually delete objects; smart pointers will handle deallocation.

    return 0;
}

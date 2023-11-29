#include <iostream>

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    // Default Constructor
    Inventory() : itemNumber(0), quantity(0), cost(0.0), totalCost(0.0) {}

    // Constructor #2
    Inventory(int number, double itemCost, int qty) {
        itemNumber = (number >= 0) ? number : 0;
        cost = (itemCost >= 0.0) ? itemCost : 0.0;
        quantity = (qty >= 0) ? qty : 0;
        setTotalCost();
    }

    // Setter functions
    void setItemNumber(int number) {
        itemNumber = (number >= 0) ? number : 0;
    }

    void setQuantity(int qty) {
        quantity = (qty >= 0) ? qty : 0;
        setTotalCost();
    }

    void setCost(double itemCost) {
        cost = (itemCost >= 0.0) ? itemCost : 0.0;
        setTotalCost();
    }

    void setTotalCost() {
        totalCost = quantity * cost;
    }

    // Getter functions
    int getItemNumber() const {
        return itemNumber;
    }

    int getQuantity() const {
        return quantity;
    }

    double getCost() const {
        return cost;
    }

    double getTotalCost() const {
        return totalCost;
    }
};

int main() {
    // Demonstrate the Inventory class
    Inventory item1; // Default constructor
    item1.setItemNumber(101);
    item1.setQuantity(50);
    item1.setCost(19.99);

    Inventory item2(102, 24.99, 30); // Constructor #2

    // Display information about items
    std::cout << "Item 1 - Item Number: " << item1.getItemNumber() << ", Quantity: "
              << item1.getQuantity() << ", Cost: $" << item1.getCost()
              << ", Total Cost: $" << item1.getTotalCost() << std::endl;

    std::cout << "Item 2 - Item Number: " << item2.getItemNumber() << ", Quantity: "
              << item2.getQuantity() << ", Cost: $" << item2.getCost()
              << ", Total Cost: $" << item2.getTotalCost() << std::endl;

    return 0;
}

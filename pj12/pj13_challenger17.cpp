#include <iostream>
#include <iomanip>

class InventoryItem {
private:
    int itemNumber;
    double cost;
    int quantityOnHand;

public:
    // Constructor
    InventoryItem(int num, double c, int qty) : itemNumber(num), cost(c), quantityOnHand(qty) {}

    // Accessor functions
    double getCost() const {
        return cost;
    }

    int getQuantityOnHand() const {
        return quantityOnHand;
    }

    // Mutator function
    void reduceQuantity(int qty) {
        if (qty >= 0 && qty <= quantityOnHand) {
            quantityOnHand -= qty;
        }
    }
};

class CashRegister {
private:
    const double PROFIT_PERCENTAGE = 0.30;
    const double SALES_TAX_RATE = 0.06;

public:
    // Member function to process a purchase
    void processPurchase(InventoryItem &item, int quantity) {
        if (quantity < 0) {
            std::cout << "Invalid quantity. Please enter a non-negative quantity.\n";
            return;
        }

        double itemCost = item.getCost();
        double unitPrice = itemCost + (itemCost * PROFIT_PERCENTAGE);
        double purchaseSubtotal = unitPrice * quantity;
        double salesTax = purchaseSubtotal * SALES_TAX_RATE;
        double purchaseTotal = purchaseSubtotal + salesTax;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Purchase Subtotal: $" << purchaseSubtotal << std::endl;
        std::cout << "Sales Tax (6%): $" << salesTax << std::endl;
        std::cout << "Purchase Total: $" << purchaseTotal << std::endl;

        // Update the quantity on hand in the InventoryItem object
        item.reduceQuantity(quantity);
    }
};

int main() {
    // Creating an InventoryItem object with item number, cost, and quantity on hand
    InventoryItem inventoryItem(1, 10.99, 20);

    // Creating a CashRegister object
    CashRegister cashRegister;

    // Getting user input for item and quantity being purchased
    int quantity;
    std::cout << "Enter the quantity of items to purchase: ";
    std::cin >> quantity;

    // Processing the purchase using CashRegister class
    cashRegister.processPurchase(inventoryItem, quantity);

    // Displaying the updated quantity on hand
    std::cout << "Updated quantity on hand: " << inventoryItem.getQuantityOnHand() << std::endl;

    return 0;
}

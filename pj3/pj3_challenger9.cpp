#include <iostream>
using namespace std;

int main() {
    const int cookiesPerBag = 30;
    const int caloriesPerServing = 300;
    int cookiesEaten;

    cout << "Enter the number of cookies you ate: ";
    cin >> cookiesEaten;

    // Calculate the total calories consumed
    int totalCalories = (cookiesEaten * caloriesPerServing) / cookiesPerBag;

    cout << "Total calories consumed: " << totalCalories << " calories" << endl;

    return 0;
}

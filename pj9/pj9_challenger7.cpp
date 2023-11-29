#include <iostream>

int doSomething(int* x, int* y) {
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}

int main() {
    int a = 5;
    int b = 3;

    std::cout << "Before: a = " << a << ", b = " << b << std::endl;

    int result = doSomething(&a, &b);

    std::cout << "After: a = " << a << ", b = " << b << std::endl;
    std::cout << "Result: " << result << std::endl;

    return 0;
}

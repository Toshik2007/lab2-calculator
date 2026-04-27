#include <iostream>
#include "calculator.h"

int main() {
    std::cout << "=== Simple Calculator ===" << std::endl;

    double a = 10.0;
    double b = 3.0;

    std::cout << a << " + " << b << " = " << add(a, b) << std::endl;
    std::cout << a << " - " << b << " = " << subtract(a, b) << std::endl;
    std::cout << a << " * " << b << " = " << multiply(a, b) << std::endl;
    std::cout << a << " / " << b << " = " << divide(a, b) << std::endl;
    std::cout << a << " ^ " << b << " = " << power(a, b) << std::endl;

    return 0;
}

#include <iostream>
#include "fibonacci.h"

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << "Fibonacci(" << n << ") = " << Fibonacci::compute(n) << std::endl;
    return 0;
}

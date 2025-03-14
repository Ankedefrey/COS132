#include "fibonacci.h"

int Fibonacci::compute(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return compute(n - 1) + compute(n - 2);
}

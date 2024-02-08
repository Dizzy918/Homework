#include <stdio.h>
#include "maths.h"

int main() {
    int number = 5;

    long long result = factorial(number);

    printf("Factorial of %d is: %lld\n", number, result);

    return 0;
}

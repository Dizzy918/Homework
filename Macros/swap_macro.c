#include <stdio.h>

#define SWAP(A, B, TYPE) do { \
    TYPE temp = A; \
    A = B; \
    B = temp; \
} while (0)

int main() {
    int x = 10, y = 20;

    SWAP(x, y, int);

    printf("After swap: x = %d, y = %d\n", x, y);

    float a = 3.14, b = 2.71;

    SWAP(a, b, float);

    printf("After swap: a = %f, b = %f\n", a, b);

    return 0;
}

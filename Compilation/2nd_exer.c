#include <stdio.h>

int findNOD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findNOK(int a, int b) {
    int NOD = findNOD(a, b);
    int NOK = (a * b) / NOD;
    return NOK;
}

int main() {
    int a = 12;
    int b = 18;

    int NOK = findNOK(a, b);

    printf("The NOK of %d and %d is: %d\n", a, b, NOK);

    return 0;
}

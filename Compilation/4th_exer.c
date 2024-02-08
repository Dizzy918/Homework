#include <stdio.h>
#include <math.h>

#define ARR_SIZE 5

void powerof4(long arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = pow(arr[i], 4);
    }
}

int main() {
    long numbers[ARR_SIZE] = {1, 2, 3, 4, 5};

    powerof4(numbers, ARR_SIZE);

    printf("Array, after put to the power of four: \n");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%ld ", numbers[i]);
    }

    return 0;
}

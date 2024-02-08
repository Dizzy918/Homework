#include <stdio.h>

#define SWAP(A, B, TYPE) do { \
    TYPE temp = A; \
    A = B; \
    B = temp; \
} while (0)

#define SORT(ARRAY, SIZE, TYPE, COMPARE) do { \
    for (int i = 0; i < SIZE - 1; i++) { \
        for (int j = 0; j < SIZE - i - 1; j++) { \
            if (COMPARE(ARRAY[j], ARRAY[j + 1])) { \
                SWAP(ARRAY[j], ARRAY[j + 1], TYPE); \
            } \
        } \
    } \
} while (0)

int main() {
    int ascending(int a, int b) { return a > b; }
    int descending(int a, int b) { return a < b; }

    int array1[] = {4, 8, 6, 14, 9, 57, 54};
    int array2[] = {3, 1, 4};

    SORT(array1, 7, int, ascending);
    SORT(array2, 3, int, descending);

    printf("Sorted ascending: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array1[i]);
        if(i == 4)
            printf("\n");
    }

    printf("Sorted descending: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array2[i]);
    }

    return 0;
}

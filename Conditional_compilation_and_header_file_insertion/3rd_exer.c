#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void SelectionSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[minIdx]) {
                minIdx = j;
            }
        }
        swap(&array[i], &array[minIdx]);
    }
}

void InsertionSort(int array[], int size) {
    for (int i = 1; i < size; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

void SortBasedOnOS(int array[], int size) {
    #ifdef _WIN32
        printf("Using Bubble Sort on Windows\n");
        BubbleSort(array, size);
    #elif __linux__
        printf("Using Selection Sort on Linux\n");
        SelectionSort(array, size);
    #elif __APPLE__
        printf("Using Insertion Sort on macOS\n");
        InsertionSort(array, size);
    #else
        printf("Using Reverse Order because the OS is not recognized\n");
        int i, j;
        for (i = 0, j = n - 1; i < j; i++, j--) {
            swap(&array[i], &array[j]);
        }
    #endif
}

int main() {
    int array[] = {256, 7, 52, 6, 634, 75, 234, 673, 7};
    int size = sizeof(array) / sizeof(array[0]);

    SortBasedOnOS(array, size);

    printf("Sorted array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

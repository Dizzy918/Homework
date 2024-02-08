#include <stdio.h>

#define ARRAY_SIZE 7

#ifdef ARRAY_SIZE
    #if ARRAY_SIZE >= 1 && ARRAY_SIZE <= 10
        int main() {
            int arr[ARRAY_SIZE];
            for (int i = 0; i < ARRAY_SIZE; i++) {
                arr[i] = 1 << i;
                printf("%d\n", arr[i]);
            }

            return 0;
        }
    #else
        #error "ARRAY_SIZE must be between 1 and 10."
    #endif
#else
    #error "ARRAY_SIZE is not defined."
#endif
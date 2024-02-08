#include <stdio.h>

#define MAX_OF_TWO(a, b) ((a > b) ? a : b)

int main() {
    int a = 5;
    int b = 10;
    
    int max = MAX_OF_TWO(a, b);
    
    printf("Bigger element: %d\n", max);

    return 0;
}

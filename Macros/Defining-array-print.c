#include <stdio.h>

#define CREATE(name, type, a1, a2, a3, a4, a5) \
    type name[5] = {a1, a2, a3, a4, a5}

#define PRINT(name) \
    for (int i = 0; i < 5; i++) { \
        printf("%d \n", name[i]); \
    } \

int main() {
    CREATE(myArray, int, 1, 2, 3, 4, 5);
    PRINT(myArray);
    return 0;
}
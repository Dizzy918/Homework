#include <stdio.h>

#define PRINT(variable) \
    printf("Variable: %s \nValue: %d \nFile: %s \nLine: %d \n", #variable, variable, __FILE__, __LINE__)

int main() {
    int variable = 1;
    PRINT(variable);
    return 0;
}
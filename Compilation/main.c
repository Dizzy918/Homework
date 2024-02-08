#include "transformation.h"
#include <stdio.h>

int main() {
    const char* input1 = "-123";
    const char* input2 = "12ab23";

    transformation result1 = str_to_int(input1);
    transformation result2 = str_to_int(input2);

    printf("tmp.result = %ld, tmp.error = \"%s\"\n", result1.result, result1.error);
    printf("tmp.result = %ld, tmp.error = \"%s\"\n", result2.result, result2.error);

    return 0;
}

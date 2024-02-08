#include "transformation.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

transformation str_to_int(const char* input) {
    transformation tmp;
    char* end;
    long num = strtol(input, &end, 10);

    while (isspace((unsigned char)*end)) {
        end++;
    }

    if (*end != '\0') {
        tmp.result = 0;
        strcpy(tmp.error, "Invalid input string");
    } else {
        tmp.result = num;
        tmp.error[0] = '\0';
    }

    return tmp;
}

#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE ## _ ## NAME ## _command

#define DEFINE_COMMAND(NAME, TYPE) \
    void COMMAND(NAME, TYPE)(void) { \
        printf("This is the command with the name %s and the type %s.\n", #NAME, #TYPE); \
    }

int main() {

    DEFINE_COMMAND(try, something);
    DEFINE_COMMAND(start, new);

    something_try_command();
    new_start_command();

    return 0;
}

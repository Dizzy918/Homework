#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H

#include "person.h"

#define OCCUPANTS 50

struct SchoolRoom {
    int room_number;
    struct Person occupants[OCCUPANTS];
};

#endif

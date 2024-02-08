#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H

#include "person.h"

#define MAX_STUDENTS 26

struct SchoolClass {
    struct Person students[MAX_STUDENTS];
    char grade;
    int class_number;
    struct Person class_teacher;
};

#endif

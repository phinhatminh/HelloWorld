#ifndef DOGS_H
#define DOGS_H

#include <globals.h>

typedef struct dogs_s
{
    char* name;
    COLORS color;
    unsigned int age;
}DOGS;

extern DOGS superDog;

#endif
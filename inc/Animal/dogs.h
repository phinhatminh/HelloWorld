#ifndef DOGS_H
#define DOGS_H

#include <globals.h>

typedef struct dogs_s
{
    char* name;
    COLORS color;
    unsigned int age;
    unsigned int pattern;
    unsigned int child;
    unsigned int dog1;
    unsigned int dog2;
    unsigned int dog3;
    unsigned int cat_like_dog;

}DOGS;

extern DOGS superDog;

#endif
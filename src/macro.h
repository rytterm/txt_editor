#ifndef _MACRO_H_
#define _MACRO_H_

#include <stdio.h>
#include <stdlib.h>


#define FORMAT(x) _Generic((x), \
    char: "'%c'", \
    signed char: "%hhd", \
    unsigned char: "%hhu", \
    short: "%hd", \
    unsigned short: "%hu", \
    int: "%d", \
    unsigned int: "%u", \
    long: "%ld", \
    unsigned long: "%lu", \
    long long: "%lld", \
    unsigned long long: "%llu", \
    float: "%f", \
    double: "%f", \
    long double: "%Lf", \
    char *: "\"%s\"", \
    const char *: "\"%s\"", \
    void *: "%p", \
    default: "%p" \
)


#define ASSERT(CONDITION) \
    do { \
        if (!(CONDITION)) { \
            fprintf(stderr, "ASSERTION FAILED AT %s:%d | %s\n", __FILE__, __LINE__, #CONDITION); \
            exit(EXIT_FAILURE); \
        } \
    } while (0)


#define ARGUMENTS "ISR"






#endif
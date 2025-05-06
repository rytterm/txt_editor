#ifndef _FILE_H_
#define _FILE_H_

#include "macro.h"
#include "state.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


struct File {
    FILE* file;
    char* name;
    int state;
};


typedef struct File file_t;


void create(file_t* file, char* name);
void fdelete(file_t* file);
void open(file_t* file, const char* mode);
void close(file_t* file);
char* read(file_t* file);
void write(file_t* file);

#endif
#ifndef _FILE_H_
#define _FILE_H_

#include "macro.h"
#include "state.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void create(int state,char* name);
void fdelete(int state,char* name);
void open(int state,char* name);
void close(int state,char* name);
void read(int state,char* name);
void write(int state,char* name);

#endif
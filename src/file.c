#include "file.h"



void create(int state,char* name) {
    ASSERT(state == NO_STATE);

    FILE* file;
    file = fopen(name,"r");

    ASSERT(file == NULL && errno == ENOENT);

    file = fopen(name,"a");
    
    ASSERT(file != NULL);
    
    fclose(file);
}


void fdelete(int state, char* name) {
    ASSERT(state == NO_STATE);
    ASSERT(remove(name) == 0);
}


void open(int state,char* name) {

}


void close(int state,char* name) {

}


void read(int state,char* name) {

}


void write(int state,char* name) {

}
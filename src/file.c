#include "file.h"



void create(file_t* file_struct, char* name) {
    ASSERT(file_struct->state == NO_STATE);

    file_struct->name = name;
    
    FILE* file;
    file = fopen(file_struct->name,"r");

    ASSERT(file == NULL && errno == ENOENT);

    file = fopen(file_struct->name,"a");
    
    ASSERT(file != NULL);
    
    fclose(file);

    file_struct->file = file;
}


void fdelete(file_t* file) {
    ASSERT(file->state == NO_STATE);
    ASSERT(remove(file->name) == 0);
}


void open(file_t* file, const char* mode) {
    ASSERT(file->state == NO_STATE);
    ASSERT(fopen(file->name,mode) != NULL);
}


void close(file_t* file) {
    ASSERT(file->state == NO_STATE);
    ASSERT(fclose(file->file));
}


char* read(file_t* file) {

    file->file = fopen(file->name,"r");

    ASSERT(file->file != NULL);
    fseek(file->file,0,SEEK_END);
    long fs = ftell(file->file);
    rewind(file->file);
    
    char* buffer = malloc(fs + 1);
    
    ASSERT(buffer != NULL);

    fread(buffer,1,fs,file->file);
    buffer[fs] = '\0';
    fclose(file->file);
    return buffer;
}


void write(file_t* file, char* msg, size_t size) {
    ASSERT(file->state == INSERT_STATE);
    
    file->file = fopen(file->name,"a");
    ASSERT(file->file != NULL);

    fwrite(msg, sizeof(char), size, file->file);
    fclose(file->file);
}
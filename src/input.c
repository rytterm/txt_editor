#include "input.h"



char* get() {
    char* txt;
    char buffer[256];

    ASSERT(scanf("%255s", buffer) != -1);
   
    txt = malloc(strlen(buffer) + 1);
    
    ASSERT(txt != NULL);

    strcpy(txt,buffer);

    return txt;
}


char get_c() {
    char txt;
    scanf("%c", &txt);
    return txt;
}
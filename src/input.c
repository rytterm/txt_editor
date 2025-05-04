#include "input.h"



char* get(int state) {
    ASSERT(state == INSERT_STATE);
    
    char* txt;
    char buffer[256];

    ASSERT(scanf("%255s", buffer) != -1);
   
    txt = malloc(strlen(buffer) + 1);
    
    ASSERT(txt != NULL);

    strcpy(txt,buffer);

    return txt;
}
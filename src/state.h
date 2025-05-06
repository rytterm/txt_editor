#ifndef _STATE_H_
#define _STATE_H_

#include "macro.h"
#include "file.h"

enum States {
    NO_STATE,
    INSERT_STATE,
    SEARCH_STATE,
    END_STATE,

    NUMBER_OF_STATES
};

typedef struct File file_t;


void change_state(file_t* file, int new_state);

#endif

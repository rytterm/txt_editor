#include "state.h"



void change_state(file_t* file, int new_state) {
    ASSERT(new_state < NUMBER_OF_STATES);
    file->state = new_state;
}
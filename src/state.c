#include "state.h"






void change_state(file_t* file, int new_state) {
    ASSERT(new_state < NUMBER_OF_STATES);
    file->state = new_state;
}


void default_state(file_t* file) {
    char cmd = _getch();
    switch (cmd) {
        case 'I':
        case 'i':
            change_state(file,INSERT_STATE);
            break;
        case 'R':
        case 'r':
            change_state(file,SEARCH_STATE);
            break;
        case 'S':
        case 's':
            change_state(file,NO_STATE);
            exit(1);
            break;
        default:
            default_state(file);
    }

}
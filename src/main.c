#include <stdio.h>
#include "macro.h"
#include "state.h"
#include "input.h"
#include <stdlib.h>
#include "file.h"
#include <conio.h>

int main(int argc, char** argv) {

    file_t file;
    file.state = NO_STATE; 
    file.name = "test.txt";
    //create(&file,"test.txt");

    //fdelete(state,"test.txt");
   // open(&file,"r");
    printf(read(&file));
    change_state(&file,INSERT_STATE);

    while (1) {
        char c[1]; 
        c[0] = _getch();
        write(&file,c,1);
        if (c == 27) {
            default_state(&file);
        }
    }

    /*default_state(&file);
    printf("%d",file.state);*/


    /*while(1) {

        state = INSERT_STATE;
        char* txt = get(state);
        printf("%s\n",txt);
        free(txt);

    }*/
    return 0;
}
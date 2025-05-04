#include <stdio.h>
#include "macro.h"



int main(int argc, char** argv) {
    int a = 0;
    int b = 0;

    ASSERT(a == b);
    for (;;);

    return 0;
}
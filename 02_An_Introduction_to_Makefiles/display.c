#include <stdio.h>

#include "defs.h"
#include "buffer.h"

void display_print(void) {
    printf("Printing from display: %s, %s", DEFS_STRING, BUFFER_STRING);
}

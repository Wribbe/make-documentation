#include <stdio.h>

#include "defs.h"
#include "buffer.h"

void command_print(void) {
    printf("Printing from command: %s %s", DEFS_STRING, BUFFER_STRING);
}

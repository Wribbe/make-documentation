#include <stdio.h>

#include "defs.h"
#include "buffer.h"

void insert_print(void) {
    printf("Printing from insert: %s %s", DEFS_STRING, BUFFER_STRING);
}

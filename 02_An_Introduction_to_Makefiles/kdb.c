#include <stdio.h>

#include "defs.h"
#include "command.h"

void kdb_print(void) {
    printf("Print from kdb.c: %s",DEFS_STRING);
}

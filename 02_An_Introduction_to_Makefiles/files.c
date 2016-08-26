#include <stdio.h>

#include "defs.h"
#include "buffer.h"
#include "command.h"

void files_print(void){
    printf("Printing from files: %s %s %s",
           DEFS_STRING,
           BUFFER_STRING,
           COMMAND_STRING);
}

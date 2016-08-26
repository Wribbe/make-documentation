#include <stdlib.h>
#include <stdio.h>

#include "defs.h"

int main(void) {
    printf("Calling all object functions.\n");
    kdb_print();
    display_print();
    insert_print();
    search_print();
    files_print();
    utils_print();
    printf("Done.\n");
    return(EXIT_SUCCESS);
}

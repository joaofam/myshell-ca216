#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "read_line.h"

int main(int argc, char **argv)
{
    char *line;

    do {
        printf("$ ");
        line = line_read();
        printf("%s", line);
    } while(true);
}

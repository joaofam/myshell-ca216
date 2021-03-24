#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lineread.h"
#include "parse.h"
#include "exec.h"

int main(int argc, char **argv)
{
    char *line;
    char **args;

    do {
        printf("$ ");
        line = line_read();
        args = parse(line);
        exec(args);
    } while(true);
}

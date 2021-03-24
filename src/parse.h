#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MAX_ARGS 64
#define SEPARATORS " \t\n"

char **parse(char *line)
{
    char *args[MAX_ARGS];
    char **arg;
    arg = args;
    *arg++ = strtok(line,SEPARATORS);
    while ((*arg++ = strtok(NULL,SEPARATORS)));
    arg = args;
    return arg;
}

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
    *arg++ = strtok(line,SEPARATORS); /* input entered is tokenized */
    while ((*arg++ = strtok(NULL,SEPARATORS))); /* still tokenizing */
    arg = args;
    return arg;
}

/* SOURCES */
/* https://ca216.computing.dcu.ie/labs/lab4b/ */
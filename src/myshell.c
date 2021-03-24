#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lineread.h"
#include "parse.h"

int main(int argc, char **argv)
{
    char *line;
    char **args;

    do {
        printf("$ ");
        line = line_read();
        args = parse(line);
        for (int i = 0; args[i] != NULL; i++)
        {
            printf("%s\n", args[i]);
        }
        
    } while(true);
}

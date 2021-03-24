#include <stdio.h>
#include <stdlib.h>

void help(char **args)
{
    printf("----Need a hand?----\n");
    printf("Here is a list of commands you can use:"
    "\n$cd"
    "\n$clr"
    "\n$dir"
    "\n$env"
    "\n$echo"
    "\n$help"
    "\n$pause"
    "\n$quit"
    "\n");
}

void quit(char **args)
{
    printf("Exiting\n");
    exit(EXIT_SUCCESS);
}

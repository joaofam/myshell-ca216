#include <stdio.h>
#include <stdlib.h>

void echo(char **args)
{
    if(args[1] == NULL)
    {
        printf("\n");
    }
    else
    {
        for(int i = 1; i < args[i]; i++)
        {
            printf("%s ", args[i]);
        }
        printf("\n");
    }   
}

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

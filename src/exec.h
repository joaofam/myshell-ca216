#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "commands.h"
#include "execute_command.h"

void exec(char **args)
{
    if (args[0] == NULL)
    {
        return;
    }
    else if(!strcmp(args[0],"cd"))
    {
        cd(args);
    }
    else if(!strcmp(args[0],"clr"))
    {
        system("clear");
    }
    else if(!strcmp(args[0],"dir"))
    {
        dir(args);
    }
    else if(!strcmp(args[0],"environ"))
    {
        env(args);
    }
    else if(!strcmp(args[0],"echo"))
    {
        echo(args);
    }
    else if(!strcmp(args[0],"help"))
    {
        help(args);
    }
    else if(!strcmp(args[0],"pause"))
    {
        pause1(args);
    }
    else if(!strcmp(args[0],"quit"))
    {
        quit(args);
    }
    else if(!strcmp(args[0], "cowsay"))
    {
        cowsay(args);
    }
    else if(!strcmp(args[0], "pi"))
    {
        pi(args);
    }
    else
    {
        execute(args);
    }
}
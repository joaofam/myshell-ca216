#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "commands.h"
#include "execute_command.h"

/* Execution file where commands are run from commands.h */
/* Format sourced from Donal's lab 4b */

void exec(char **args)
{
    if (args[0] == NULL)
    {
        return;
    }
    else if(!strcmp(args[0],"cd")) /* cd command */
    {
        cd(args);
    }
    else if(!strcmp(args[0],"clr")) /* clr command */
    {
        system("clear");
    }
    else if(!strcmp(args[0],"dir")) /* dir command */
    {
        dir(args);
    }
    else if(!strcmp(args[0],"environ")) /* environ command*/
    {
        env(args);
    }
    else if(!strcmp(args[0],"echo")) /* echo command */
    {
        echo(args);
    }
    else if(!strcmp(args[0],"help")) /* help command */
    {
        manual(args);
    }
    else if(!strcmp(args[0],"pause")) /* pause command */
    {
        pause1(args);
    }
    else if(!strcmp(args[0],"quit")) /* quit command */
    {
        quit(args);
    }
    else if(!strcmp(args[0], "cowsay")) /* cowsay command */
    {
        cowsay(args);
    }
    else if(!strcmp(args[0], "pi")) /* pi command */
    {
        pi(args);
    }
    else if(!strcmp(args[0], "man")) /* manual command */
    {
        manual(args);
    }
    else
    {
        execute(args); /* execute external commands from execute_commands.h */
    }
}

/* format - https://ca216.computing.dcu.ie/labs/lab4b/ */
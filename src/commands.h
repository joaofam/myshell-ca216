#include <stdio.h>
#include <stdlib.h>

void cd(char **args)
{
    char cwd[10000];

    if(args[1] == NULL){
        printf("%s\n", getenv("PWD"));
    }
    else if(chdir(args[1]) == -1)
    {  
        printf("Error: No such directory existing.");
    }
    else
    {
        getcwd(cwd, sizeof(cwd));
        setenv("PWD", cwd, 1);
    }
}

void env(char **args)
{
    extern char **environ;
    for(int i=0; environ[i] != NULL; i++)
        printf("%s\n",environ[i]);
}

void echo(char **args)
{
    if(args[1] == NULL)
    {
        printf("\n");
    }
    else
    {
        for(int i=1; args[i]; i++)
        {
            printf("%s ", args[i]);
        }
        printf("\n");
    }   
}

void help(char **args)
{
    printf("-------------Need a hand?-------------\n");
    printf("Here is a list of commands you can use:\n"
    "\n$cd"
    "\n$clr"
    "\n$dir"
    "\n$env"
    "\n$echo"
    "\n$help"
    "\n$pause"
    "\n$quit"
    "\n\n");
}

void quit(char **args)
{
    printf("Exiting\n");
    exit(EXIT_SUCCESS);
}

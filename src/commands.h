#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <math.h>

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

void dir(char **args)
{
    DIR *d;
    struct dirent *dir;
    d = opendir(".");

    if(d)
    {
        while((dir = readdir(d)) != NULL){
        printf("%s\n", dir->d_name);
        }
    }
    else
    {
        printf("\nError: current directory not opening.");
    }
    closedir(d);
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
    "\n$environ"
    "\n$echo"
    "\n$help"
    "\n$pause"
    "\n$quit"
    "\n\n");
}

void pause1()
{
    printf ("Press enter to continue");
    while ('\n' != getchar());
    getchar ();
}

void quit(char **args)
{
    printf("Exiting\n");
    exit(EXIT_SUCCESS);
}

void cowsay(char **args)
{
    char *str;
    if (args[1] == NULL) {
        str = "moOh";
    }
    else {
        str = args[1];
    }
    int len = strlen(str);
    char top[len+1];
    memset(top, '_', len);
    top[len] = '\0';
    char bottom[len+1];
    memset(bottom, '-', len);
    bottom[len] = '\0';
    printf("  %s\n< %s >\n  %s\n", top, str, bottom);
    printf("  \\ ^__^\n");
    printf("    (oo)\\_______\n");
    printf("    (__)\\       )\\/\\\n");
    printf("        ||----w |\n");
    printf("        ||     ||\n");
    return 1;
}


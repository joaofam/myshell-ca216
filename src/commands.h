#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <math.h>

/* cd command to change current directory */
void cd(char **args)
{
    char cwd[10000];

    if(args[1] == NULL){ /* if args are empty return PWD enviroment  */
        printf("%s\n", getenv("PWD"));
    }
    else if(chdir(args[1]) == -1)
    {  
        printf("Error: No such directory existing."); /* print error */
    }
    else
    {
        getcwd(cwd, sizeof(cwd)); /* current working directory is captured */
        setenv("PWD", cwd, 1); /* set enviroment to PWD*/
    }
}
/* environ function to list all enviroment strings */
void env(char **args)
{
    extern char **environ;
    for(int i=0; environ[i] != NULL; i++)
        printf("%s\n",environ[i]);
}

void dir(char **args)
{
    DIR *d;
    struct dirent *dir; /* dir object pointer */
    d = opendir("."); /* open directory */

    if(d)
    {
        while((dir = readdir(d)) != NULL){ /* read files */
            printf("%s\n", dir->d_name);  /* print files*/
        }
    }
    else
    {
        printf("\nError: current directory not opening."); /* print error */
    }
    closedir(d); /* closes directory */
}

void echo(char **args)
{
    if(args[1] == NULL) /* if empty print a newline */
    {
        printf("\n");
    }
    else /* else print every arguement after echo with a space */
    {
        for(int i=1; args[i]; i++)
        {
            printf("%s ", args[i]);
        }
        printf("\n");
    }   
}

/* help function to display what commands can be used */
/* NOT USED */
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
    "\nmanual"
    "\n$pause"
    "\n$quit"
    "\ncowsay"
    "\npi"
    "\n\n");
}

void pause1()
{
    printf ("Press enter to continue"); /* Press enter */
    while ('\n' != getchar()); /* do nothing while newline */
    getchar ();
}

void quit(char **args)
{
    printf("Exiting\n");
    exit(EXIT_SUCCESS); /* quit program */
}
/* cowsay function, a fun one! */
void cowsay(char **args)
{
    char *str;
    if (args[1] == NULL)/* if empty print */
    { 
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
    /* Cow drawing */
    printf("  %s\n< %s >\n  %s\n", top, str, bottom); 
    printf("  \\ ^__^\n");
    printf("    (oo)\\_______\n");
    printf("    (__)\\       )\\/\\\n");
    printf("        ||----w |\n");
    printf("        ||     ||\n");
}
/* pi function to display pi along with constants. User chooses constant through arguement */
void pi(char **args)
{
    if(args[1] == NULL)
    {
        printf("Error: please enter a number to get constant of pi\n"); /* error */
    }
    else
    {
        printf("%.*f\n", atoi(args[1]), M_PI); /* M_PI used under c libraries to get pi and constants */
    }
}

void manual()
{
    char manual[100];
    strcpy(manual, "more ../manual/readme");
    system(manual);
}

/* sources */

/* cd - https://stackoverflow.com/questions/298510/how-to-get-the-current-directory-in-a-c-program*/
/* clr - https://stackoverflow.com/questions/18154579/how-do-i-clear-the-screen-in-c/18154598 */
/* dir - https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwj6xPnQlsXvAhWtXRUIHWLaBgUQFjABegQIBhAD&url=https%3A%2F%2Fwww.sanfoundry.com%2Fc-program-list-files-directory%2F&usg=AOvVaw1KHYC_nIK-F3jyw6muzmCn */
/* dir - https://stackoverflow.com/questions/4204666/how-to-list-files-in-a-directory-in-a-c-program */
/* env - https://ca216.computing.dcu.ie/labs/lab4c/ */
/* pause - https://stackoverflow.com/questions/43475477/how-to-pause-the-c-program */
/* help - https://brennan.io/2015/01/16/write-a-shell-in-c/ */
/* shell enviroment - https://stackoverflow.com/questions/29260555/how-to-set-path-environment-variable-in-linux-in-c-language-code */
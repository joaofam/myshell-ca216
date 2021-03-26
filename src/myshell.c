#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lineread.h"
#include "parse.h"
#include "exec.h"

/* main function where shell will run under */

void shell_env(void);


int main(int argc, char **argv)
{
    shell_env(); /* set shell enviroment */
    char *line;
    char **args;

    do {
        printf("$ "); /* prompt */
        line = line_read(); /* read libe by line function */
        args = parse(line); /* args are then parsed through read line function*/
        exec(args); /* output commands */
    } while(true);
}
/* set shell enviroment */
void shell_env(void)
{
    char path[1024];
    getcwd(path, 1024);
    strcat(path, "/myshell"); /* using strcat to joi*/
    setenv("SHELL", path, 1); /* set shell enviroment to SHELL*/
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lineread.h"
#include "parse.h"
#include "exec.h"

void shell_env(void);


int main(int argc, char **argv)
{
    shell_env();
    char *line;
    char **args;

    do {
        printf("$ ");
        line = line_read();
        args = parse(line);
        exec(args);
    } while(true);
}

void shell_env(void)
{
  char path[1024];
  getcwd(path, 1024);
  strcat(path, "/myshell");
  setenv("SHELL", path, 1);
}
#include <stdio.h>
#include <stdlib.h>
/* function to read in lines */
char *line_read(void)
{
    char *line = NULL;
    size_t len = 0;

    if(getline(&line, &len, stdin)== -1) /* read line from stdin */
    {
        if(feof(stdin)) /*if found end of file*/
        {
            exit(EXIT_SUCCESS); /* exit */
        }
        else /* error in reading lines */
        { 
            printf("error occured reading line");
            exit(EXIT_FAILURE);
        }
    }
    return line;
}

/* SOURCES */
/* source - https://brennan.io/2015/01/16/write-a-shell-in-c/ */
/* https://riptutorial.com/c/example/8274/get-lines-from-a-file-using-getline-- */
#include <stdio.h>
#include <stdlib.h>

char *line_read(void)
{
    char *line = NULL;
    size_t len = 0;

    if(getline(&line, &len, stdin)== -1)
    {
        if(feof(stdin))
        {
            exit(EXIT_SUCCESS);
        }
        else 
        { 
            printf("error occured reading line");
            exit(EXIT_FAILURE);
        }
    }
    return line;
}

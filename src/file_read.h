/* DOES NOT WORK< IGNORE*/
char * file_read(char *file)
{
    FILE * file;

    file = fopen(file, "r");

    /* size_t is used as it deal with any negative int */
    size_t read;
    char * line = NULL;
    size_t line_len = 0;

    /*fscanf is used to read in files */
    fscanf(file, "%s", &line);
    /*use malloc to allocate memory and return a pointer and access large amounts of data*/
    char **array = malloc(sizeof() * n);

    /* for loop to put int into an array*/
    for (int i=0; i<n; i++)
    {
        fscanf(file, "%d", &array[i]);
    }
    /* exit stream and flush all buffers*/
    fclose(file);
    return array;
}

/* batch - https://pages.cs.wisc.edu/~remzi/Classes/537/Spring2012/Projects/p2a.html */
/* NOT WORKING DUE TO FILE READ, ATTEMPT */
void batch(char **args)
{
    char *line;
    char **args;
    for(int i = 0; a ;i++)
    {
        line = file_read(args[1]); /* error in file_read, so it is currently not functional */
        args = parse(line);
        exec(args);
    }
        free(line);
        free(args);
}
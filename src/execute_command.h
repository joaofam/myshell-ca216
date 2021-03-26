#include <wait.h>

/* function to execute internal commands */
void execute(char **args)
{
    pid_t pid;
    pid = fork(); /* fork */

    if(pid == 0)
    {
        execvp(args[0], args); /* built in command */
        /*pid_t = getpid(); (optional here) */
    }
    else if(pid < 0)
    {
        perror("Failed Fork"); /* print error if fork fails */
    }
    else{
        wait(NULL);
        /* waitpid(pid, NULL, 0) (optional here ) */
    }
}

/* exec - https://stackoverflow.com/questions/46368813/fork-returns-0-but-the-child-process-getpid-0-why */
/* exec - https://ca216.computing.dcu.ie/labs/lab4d/ */
/* child processes - https://stackoverflow.com/questions/41801868/identify-child-of-a-child-process */
/* Output error - https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwjU49u8osfvAhU2SBUIHW1ED6UQFjABegQIBRAD&url=https%3A%2F%2Fstackoverflow.com%2Fquestions%2F39002052%2Fhow-i-can-print-to-stderr-in-c&usg=AOvVaw2t_0uuT2rVhqO4nBYpVghq */
/* exec (waitpid)- https://stackoverflow.com/questions/41211732/fork-and-waitpid-in-c */
/* exec - https://ca216.computing.dcu.ie/labs/lab4a/ */
/* format - https://ca216.computing.dcu.ie/labs/lab4b/ */
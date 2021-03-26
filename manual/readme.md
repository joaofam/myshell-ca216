*****************************************

         WELCOME TO MY SHELL
             Joao Pereira
               19354106

****************************************

##Usage
To be able to use this fle simply type 'make -B -C ../src' in the bin folder in the console to compile thr program.
Once complied, run './myshell' in the console to start up the program.


##Commands

cd -                   Chnages current working directory
clr -                  Clears the terminal screen
dir -                  Displays all the files in the directory
environ -              Lists all enviroment strings
echo -                 Prints arguements that are being passed as strings
help -                 Displays the manual
pause -                Pauses program operations until enter is pressed.
quit -                 Exits the shell.
cowsay -               Displays a ASCII picture of a cow along with 
                       the users arguement above it
pi -                   Prints the pi number along with the number of
                       constants the user provides as an arguement

##Enviroment

The enviroment is defined by enviroment variables which can be set by the system or by the user or shell.
The variable is assigned with a value. The value is can be set through the operating system.
Some common shell enviroment variables would be HOME, PWD, SHELL and USER.
On the other hand it must contain parameters and the most common bash parameter is $.


##I/O Redirection
I/O Redirection is changing the way how commands read the input to how commands send the output.
in I/O Redirection Pipes are utilized to redirect the input to a directed output.

Pipes are displayed by "|" "<" and ">" characters.
For example > writes output to a file
            >> writes output to a file and then appends output to the end of the file provided.
            < writes input from a file

##Background and Foreground Execution
Foreground proccesses is when you directly run a command or application and have to wait for it to finish.
Background proccesses can be similar to foreground executions however the shell does not have to wait 
for the proccess to end before other operations can be run. 

Foreground - Operations that user is interacting with
Background - Operations that the user is not interacting with.

To be able to run a command as a background process the user types the command, a space and a n ampersand ("&")
at the end of the file.

In any case f the foreground process is taking too long to be executed, the user can stop it by pressing CTRL+Z.
It stops but yet still exists. Now to resume the process but in the background, type bg. On the other hand to resume a process in the foreground, type fg.

##References

Blum, R. and Bresnahan, C. Linux command line and Shell scripting bible. Wiley; 3rd edition (9 Jan. 2015)

Siever, E. Linux in a nutshell. O'Reilly Media; 6th edition (2 Oct. 2009)

Schreiner, A. T. Using C with curses, lex and yacc Prentice-Hall; First Edition (1 July 1990)

Love, R. Linux system programming. O'Reilly Media; 2nd edition (8 Jun. 2013)

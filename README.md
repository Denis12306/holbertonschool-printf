# holbertonschool-printf

Create the printf function : printf()

Command to compile is : gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

Requirements :
Allowd editors : vi, vim, emacs
All your files will be compiled on Uuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are allowed to use golbal variables
No more than 5 functions per file
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo.
We will use our own main.c files at compilation; do not push your own main.c file. Our main.c files might be different from the one shown in the examples.
The prototypes of all your functions should be included in your header file calles main.h
Don't forget to push your header file
All your header files should be include guarded

printf is use to print the string of caracters you desire even in different format
ex: int main ()
    {
    printf ("Hello, i am a Holbertonschool student")
    return (0);
    }
    /** it will print : Hello, i am a Holbertonschool student

%c print a single character
%d print a decimal (base 10) number
%e print an exponential floating-point number
%f print a floating-point number
%g print a general-format floating-point number
%i print an integer in base 10
%o print a number in octal (base 8)
%s print a string of characters
%u print an unsigned decimal (base 10) number
%x print a number in hexidecimal (base 16)
%% print a percent sign (\% also works)

Flowchart

<img width="551" height="586" alt="Printf drawio" src="https://github.com/user-attachments/assets/49fef514-ff1c-4109-a05e-ea5e4ff8bb89" />

Man Page
NAME printf(3)
LIBRARY Standard C
SYNOPSIS #include <stdio.h>

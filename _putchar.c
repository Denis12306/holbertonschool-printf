#include <unistd.h>
#include <stdio.h>
/**
 * The putchar function in C writes a single character to the standard output
 * (usually the console) and returns the character written or EOF on error.
 * It is used for outputting characters one at a time,
 * often in loops or for debugging purposes
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

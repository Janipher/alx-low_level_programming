#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: the character to print
 * Return: 1 if successful
 * On error -1, then the error is set correctly
 */

int _putchar(char c)
{
	return (write(1, &c, 1);
			}

#include "main.h"

/**
 * main - function that checks for alphabetic character.
 * @c: unsigned int value to be compared with ASCII value
 *
 * Return: 1 if alphabet otherwise 0
 */

int _isalpha(int c)

{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}

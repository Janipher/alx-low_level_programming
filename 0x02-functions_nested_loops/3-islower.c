#include "main.h"

/**
 * main - function that checks for lowercase character.
 *if YES it returns 1
 *otherwise returns 0 just like islower() function in ctype.h
 *@c: Is the int value to be compared with the ASCII value
 * Return: 0 if entry point is successsful
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

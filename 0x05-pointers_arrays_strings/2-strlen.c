#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string.
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s++)
		c++;

	return (c);
}

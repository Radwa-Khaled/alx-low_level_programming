#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to get length .
 * Return: the length of @s.
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s++)
		c++;

	return (c);
}

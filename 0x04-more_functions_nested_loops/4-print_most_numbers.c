#include "main.h"

/**
 * print_most_numbers - print from 0 - 9
 *	not 2 and 4 using _putchar
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
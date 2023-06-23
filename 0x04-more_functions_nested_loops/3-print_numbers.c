#include "main.h"

/**
 * print_number() - print a number from 0 to 9
 * @a: value of number to be printed
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}


#include "main.h"

/**
 * void print_numbers - print values 0 to 9
 * return: void
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

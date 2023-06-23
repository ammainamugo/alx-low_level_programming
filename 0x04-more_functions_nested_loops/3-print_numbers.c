#include "main.h"

/**
 * print_number() - print a number zero to nine
 * @a: value of number to be printed
 */

void print_numbers(void)
{
	char c = '0';

	while(c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

#include "main.h"

/*
 * print_most_numbers - print num 0 to 9
 * skips 2 and 4
 * @i: value of i
 * return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n');
}

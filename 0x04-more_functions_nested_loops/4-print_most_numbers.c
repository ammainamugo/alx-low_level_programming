#include "main.h"

/*
 * print_most_numbers - print num 0 to 9
 * skips 2 and 4
 * @i: value of i
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

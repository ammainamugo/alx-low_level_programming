#include "main.h"

/**
 * more_numbers - print 0 to 14 10 times
 * return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar(i);
	}
	_putchar('\n');
}
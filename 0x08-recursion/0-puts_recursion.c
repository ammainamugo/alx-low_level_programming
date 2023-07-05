#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	char c = *s;

	if (c)
	{
		_putchar(c);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}

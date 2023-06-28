#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int var_char  = 0;

	while (str[var_char] != '\0')
	{
		_putchar(str[var_char]);
		var_char += 2;
	}
	_putchar('\n');
}

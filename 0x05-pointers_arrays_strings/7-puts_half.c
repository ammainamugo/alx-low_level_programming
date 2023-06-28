#include <stdio.h>

/**
 * puts_half - Calculate the length of the string
 * Calculate the starting index for printing the second half
 * Print the second half of the string
 * @str: input string
 */

void puts_half(char *str)
{
	int length = 0;
	int i, start_index;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}
	for (i = start_index; i < length; i++)
	{putchar(str[i]);
	}
	putchar('\n');
}

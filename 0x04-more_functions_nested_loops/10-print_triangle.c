#include "main.h"

/**
 * print_triangle - Prints a triangle
 * Description: if the size is zero or less prints a new line
 * @size: is the size of the triangle
 * # character to print the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		i = 1;
		while (i <= size)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
			i++;
		}
	}
}

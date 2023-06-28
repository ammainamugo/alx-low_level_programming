#include "main.h"
#include <stdio.h>
#include <stdio.h>
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements in the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int str_index;

	for (str_index = 0; str_index < (n - 1); str_index++)
	{
		printf("%d, ", a[str_index]);
	}
		if (str_index == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

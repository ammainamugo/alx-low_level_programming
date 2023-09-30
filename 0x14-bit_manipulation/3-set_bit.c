#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @index: index of the bit starting from 0 you want to set to 1
 * @n: pointer to the number to change
 *
 * Return: 1 for success and -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

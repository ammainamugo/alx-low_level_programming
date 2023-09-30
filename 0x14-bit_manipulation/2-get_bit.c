#include "main.h"

/**
 * get_bit - function that returns the value of a bit at an index in a
 * decimal number
 * @n: number to search
 * @index: Index, starting from 0 of the bit you want to get
 *
 * Return: value of the bit at the index value, or
 * if an error occurred -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}

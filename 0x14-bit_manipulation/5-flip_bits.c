#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: original number value
 * @m: new number value
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int original_num;
	unsigned long int new_num = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		original_num = new_num >> i;
		if (original_num & 1)
			count++;
	}

	return (count);
}

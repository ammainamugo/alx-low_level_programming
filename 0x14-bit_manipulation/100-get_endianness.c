#include "main.h"

/**
 * get_endianness - function that checks endianness
 * Return: 0 for big endian and 1 for little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *ch = (char *) &i;

	return (*ch);
}

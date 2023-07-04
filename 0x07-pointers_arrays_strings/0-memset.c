#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to the start address of the memory
 * @b: constant to fill the memory
 * @n: size of the memory to be filled
 *
 * Return: new array value (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}

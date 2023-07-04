#include "main.h"

/**
 * _memcpy - function to copy memory area
 * @dest: destination to move source memory src
 * @src: source of memory to be copied to dest
 * @n: size of memory to be copied
 *
 * Return: pointer of dest variable
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int j;

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}

#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: destination string
 * @src: Source string
 * @n: bytes check
 * Return: Always 0 (success)
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	dest_ptr = '\0';

	return (dest);
}

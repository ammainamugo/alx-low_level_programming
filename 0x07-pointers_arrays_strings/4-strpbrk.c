#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: input string
 * @accept: accept string
 *
 * Return: a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*s == *accept && *accept != '\0')
		{
			s++;
			accept++;
	}
	return (0);
	*s++;
}

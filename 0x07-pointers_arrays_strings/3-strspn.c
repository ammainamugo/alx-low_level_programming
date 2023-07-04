#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input string
 * @accept: string to be check against
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int is_accept = 0;

	while (*s)
	{
		for (is_accept = 0; accept[is_accept]; is_accept++)
		{
			if (*s == accept[is_accept])
			{
				length++;
				break;
			}
			else if (accept[is_accept + 1] == '\0')
			{
				return (length);
			}
		}
		s++;
	}
	return (length);
}

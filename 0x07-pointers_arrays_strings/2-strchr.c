#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to the string s
 * @c: character to be located in string s
 *
 * Return: a pointer to the first occurrence of the character
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}

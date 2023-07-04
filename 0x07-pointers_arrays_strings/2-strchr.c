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
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

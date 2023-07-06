#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: input string to return length
 *
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s > '\0')
	{
		length += _strlen_recursion(s + 1);
		length++;
	}
	return (length);
}

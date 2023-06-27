#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: actual string to be checked
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int str_length;

	str_length = 0;
	while (*s != '\0')
	{
		str_length++;
		s++;
	}
	return (str_length);
}

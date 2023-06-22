#include "main.h"

/**
 * _isdigit - check for a digit between 0 & 9
 * @c: the var to check
 * Return: 1 if c is a digit else 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1); /* c is a digit */
	else
		return (0); /* c is not a digit */
}


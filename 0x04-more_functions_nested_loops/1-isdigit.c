#include "main.h"

/**
 * _isdigit(int c) - check for a digit between 0 & 9
 * @c: the var to check
 * Retur: 1 if c is a digit else 0
 */
int _isdigit(int c)
{
	if (c >=0 && c <=9)
	{
		return (1); /* c is a digt */
	} else
	{
		return (0); /* c is not a digit */
	}
}

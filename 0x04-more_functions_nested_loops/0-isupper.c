#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: value to check between A and Z
 * Return: 1 if upper, 0 if lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);/* c is uppercase */
	else
		return (0);/* c is lowercase */
}

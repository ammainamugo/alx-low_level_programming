#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: input value
 * @y: input to raise x by
 *
 * Return: Power of x raised to the power y
 * y is lower than 0, the function should return -1
 * y is 0, return 1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
